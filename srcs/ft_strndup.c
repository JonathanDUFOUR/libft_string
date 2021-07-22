/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strndup.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodufour <jodufour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/01 17:04:12 by jdufour           #+#    #+#             */
/*   Updated: 2021/07/22 21:25:22 by jodufour         ###   ########.fr       */
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

char	*ft_strndup(char const *s, size_t n)
{
	char	*output;
	size_t	len;

	if (!s)
		return (NULL);
	len = ft_strlen(s);
	n = (n > len) * len + (n <= len) * n;
	output = malloc((n + 1) * sizeof(char));
	if (output)
		ft_memcpy(output, s, n + 1);
	return (output);
}
