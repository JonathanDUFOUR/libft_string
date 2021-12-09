/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodufour <jodufour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/26 03:09:10 by jdufour           #+#    #+#             */
/*   Updated: 2021/12/09 20:43:20 by jodufour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "type/t_int.h"

/*
	Apply the function `fct` on each character of the given string `str`
*/
void	ft_striteri(char *str, void (*fct)(t_uint, char *))
{
	register char const	*ptr = str;

	while (*str)
	{
		fct(str - ptr, str);
		++str;
	}
}
