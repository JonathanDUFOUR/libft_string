/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodufour <jodufour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/22 02:28:28 by jdufour           #+#    #+#             */
/*   Updated: 2021/07/21 00:42:43 by jodufour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_string.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	dst_len;

	i = 0;
	while (i < size)
	{
		if (!dst[i])
		{
			i = 0;
			dst_len = ft_strlen(dst);
			while (src[i] && i < (size - dst_len) - 1)
			{
				dst[dst_len + i] = src[i];
				++i;
			}
			dst[dst_len + i] = 0;
			return (dst_len + ft_strlen(src));
		}
		++i;
	}
	return (size + ft_strlen(src));
}
