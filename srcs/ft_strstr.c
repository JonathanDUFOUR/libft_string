/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodufour <jodufour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/21 06:28:03 by jdufour           #+#    #+#             */
/*   Updated: 2021/07/22 21:47:20 by jodufour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdint.h>
#include "ft_string.h"

static int	ft_memcmp(void const *a1, void const *a2, size_t n)
{
	uint8_t	*p1;
	uint8_t	*p2;

	if (!n || a1 == a2)
		return (0);
	p1 = (uint8_t *)a1;
	p2 = (uint8_t *)a2;
	while (n--)
	{
		if (*p1 != *p2)
			return (*p1 - *p2);
		++p1;
		++p2;
	}
	return (0);
}

char	*ft_strstr(char const *s, char const *tf)
{
	size_t const	tf_l = ft_strlen(tf);
	size_t const	s_l = ft_strlen(s);
	size_t			tab[256];
	size_t			i;

	i = 0;
	if (!s || !tf || tf_l > s_l || !tf_l)
		return ((char *)(!tf_l * (uintptr_t)s));
	while (i < 256)
		tab[i++] = tf_l;
	i = 0;
	while (i < tf_l - 1)
	{
		tab[(int)tf[i]] = tf_l - i - 1;
		++i;
	}
	i = 0;
	while (i <= (s_l - tf_l))
	{
		if (s[tf_l - 1] == tf[tf_l - 1] && !ft_memcmp(s, tf, tf_l - 1))
			return ((char *)s);
		i += tab[(uint8_t)s[tf_l - 1]];
		s += tab[(uint8_t)s[tf_l - 1]];
	}
	return (NULL);
}
