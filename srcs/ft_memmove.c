/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodufour <jodufour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/21 07:07:46 by jdufour           #+#    #+#             */
/*   Updated: 2021/12/20 22:06:31 by jodufour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdint.h>
#include "ft_string.h"

static void	__update(void **const dst, void const **const src,
	size_t *const size, size_t const jump)
{
	*dst -= jump;
	*src -= jump;
	*size -= jump;
}

/*
	Copy the content of the area pointed by the given pointer `src`
	to the area pointed by the given pointer `dst`
*/
void	*ft_memmove(void *dst, void const *src, size_t size)
{
	if (src >= dst)
		return (ft_memcpy(dst, src, size));
	src += size;
	dst += size;
	while (size >= sizeof(uint64_t))
	{
		__update(&dst, &src, &size, sizeof(uint64_t));
		*(uint64_t *)dst = *(uint64_t *)src;
	}
	if (size >= sizeof(uint32_t))
	{
		__update(&dst, &src, &size, sizeof(uint32_t));
		*(uint32_t *)dst = *(uint32_t *)src;
	}
	if (size >= sizeof(uint16_t))
	{
		__update(&dst, &src, &size, sizeof(uint16_t));
		*(uint16_t *)dst = *(uint16_t *)src;
	}
	if (size >= sizeof(uint8_t))
	{
		__update(&dst, &src, &size, sizeof(uint8_t));
		*(uint8_t *)dst = *(uint8_t *)src;
	}
	return (dst);
}
