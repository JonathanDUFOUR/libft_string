/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodufour <jodufour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/06 18:05:39 by jodufour          #+#    #+#             */
/*   Updated: 2021/12/09 20:55:19 by jodufour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_string.h"

/*
	Copy no more that size - 1 characters
	from the given string `src` to the given string `dst`
	Return the length of the string the function tried to create
*/
size_t	ft_strlcpy(char *dst, char const *src, size_t size)
{
	size_t	src_len;

	src_len = ft_strlen(src);
	if (!size)
		return (src_len);
	while (--size && *src)
		*dst++ = *src++;
	*dst = 0;
	return (src_len);
}
