/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodufour <jodufour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/28 23:11:11 by jdufour           #+#    #+#             */
/*   Updated: 2021/07/22 21:27:10 by jodufour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdint.h>
#include <stdlib.h>
#include "ft_string.h"

static void	*ft_memcpy(void *dst, void const *src, size_t n)
{
	if (!dst || !src)
		return (NULL);
	else if (dst != src)
		while (n--)
			((uint8_t *)dst)[n] = ((uint8_t *)src)[n];
	return (dst);
}

char	*ft_strtrim(char const *s, char const *set)
{
	char	*output;
	size_t	o_len;

	if (!s || !set)
		return (NULL);
	o_len = ft_strlen(s);
	while (*s && ft_strchr(set, *s))
	{
		--o_len;
		++s;
	}
	if (!*s)
		return (ft_strdup(""));
	s += o_len - 1;
	while (*s && ft_strchr(set, *s))
	{
		--o_len;
		--s;
	}
	s -= o_len - 1;
	output = malloc((o_len + 1) * sizeof(char));
	if (!output)
		return (NULL);
	*(output + o_len) = 0;
	return (ft_memcpy(output, s, o_len));
}
