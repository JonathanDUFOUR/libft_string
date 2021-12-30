/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodufour <jodufour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/21 07:07:46 by jdufour           #+#    #+#             */
/*   Updated: 2021/12/27 05:30:10 by jodufour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdint.h>
#include "ft_string.h"

static void	__update(void **const dst, void const **const src,
	size_t *const n, size_t const jump)
{
	*dst -= jump;
	*src -= jump;
	*n -= jump;
}

/*
	Copy the `n` first bytes of the area pointed by the given pointer `src`
	to the area pointed by the given pointer `dst`
	Return the given pointer `dst`
*/
void	*ft_memmove(void *dst, void const *src, size_t n)
{
	if (src >= dst)
		return (ft_memcpy(dst, src, n));
	src += n;
	dst += n;
	while (n >= sizeof(uint64_t))
	{
		__update(&dst, &src, &n, sizeof(uint64_t));
		*(uint64_t *)dst = *(uint64_t *)src;
	}
	if (n >= sizeof(uint32_t))
	{
		__update(&dst, &src, &n, sizeof(uint32_t));
		*(uint32_t *)dst = *(uint32_t *)src;
	}
	if (n >= sizeof(uint16_t))
	{
		__update(&dst, &src, &n, sizeof(uint16_t));
		*(uint16_t *)dst = *(uint16_t *)src;
	}
	if (n)
	{
		__update(&dst, &src, &n, sizeof(uint8_t));
		*(uint8_t *)dst = *(uint8_t *)src;
	}
	return (dst);
}
