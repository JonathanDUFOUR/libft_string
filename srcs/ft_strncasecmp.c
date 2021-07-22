/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncasecmp.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodufour <jodufour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/27 02:38:36 by jdufour           #+#    #+#             */
/*   Updated: 2021/07/22 21:23:07 by jodufour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdint.h>
#include <string.h>

static int	ft_toupper(int c)
{
	return (c - (c >= 'a' && c <= 'z') * ('a' - 'A'));
}

int	ft_strncasecmp(char const *s1, char const *s2, size_t n)
{
	while (n && s1 && s2 && *s1 && ft_toupper(*s1) == ft_toupper(*s2))
	{
		++s1;
		++s2;
		--n;
	}
	return (*(uint8_t *)s1 - *(uint8_t *)s2);
}
