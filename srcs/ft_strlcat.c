/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodufour <jodufour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/22 02:28:28 by jdufour           #+#    #+#             */
/*   Updated: 2021/12/09 20:54:20 by jodufour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_string.h"

/*
	Append no more that size - strlen(dst) - 1 characters
	from the given string `src` to the end of the given string `dst`
	Return the length of the string the function tried to create
*/
size_t	ft_strlcat(char *dst, char const *src, size_t size)
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
			while (src[i] && i < size - dst_len - 1)
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
