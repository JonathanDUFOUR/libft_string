/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodufour <jodufour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/26 03:09:10 by jdufour           #+#    #+#             */
/*   Updated: 2022/04/27 09:07:48 by jodufour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "t_int.h"

/*
	Apply the function `fct` on each character of the given string `str`
*/
void	ft_striteri(char *str, void (*fct)(t_uint const i, char *const c))
{
	register char	*ptr;

	ptr = str;
	while (*ptr)
	{
		fct(ptr - str, ptr);
		++ptr;
	}
}
