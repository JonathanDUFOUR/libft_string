/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcasecmp.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodufour <jodufour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/27 00:58:19 by jdufour           #+#    #+#             */
/*   Updated: 2021/10/05 01:03:34 by jodufour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdint.h>

static int	ft_toupper(int c)
{
	return (c - (c >= 'a' && c <= 'z') * ('a' - 'A'));
}

int	ft_strcasecmp(char const *s0, char const *s1)
{
	while (s0 && s1 && *s0 && ft_toupper(*s0) == ft_toupper(*s1))
	{
		++s0;
		++s1;
	}
	return (*(uint8_t *)s0 - *(uint8_t *)s1);
}
