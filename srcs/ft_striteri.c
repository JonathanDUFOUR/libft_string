/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodufour <jodufour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/26 03:09:10 by jdufour           #+#    #+#             */
/*   Updated: 2021/08/18 02:36:35 by jodufour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "type/t_int.h"

void	ft_striteri(char *s, void (*f)(t_uint, char *))
{
	register char const	*p = s;

	if (s && f)
	{
		while (s && *s)
		{
			f(s - p, s);
			++s;
		}
	}
}
