/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodufour <jodufour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/21 06:57:51 by jdufour           #+#    #+#             */
/*   Updated: 2021/12/27 05:30:35 by jodufour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdint.h>

static void	__update(void **const ptr, void const **const src,
	size_t *const n, size_t const jump)
{
	*ptr += jump;
	*src += jump;
	*n -= jump;
}

/*
	Copy the `n` first bytes of the area pointed by the given pointer `src`
	to the area pointed by the given pointer `dst`
	If both areas overlap, the result is undefined
	Return the given pointer `dst`
*/
void	*ft_memcpy(void *const dst, void const *src, size_t n)
{
	void	*ptr;

	if (dst == src)
		return (dst);
	ptr = dst;
	while (n >= sizeof(uint64_t))
	{
		*(uint64_t *)ptr = *(uint64_t *)src;
		__update(&ptr, &src, &n, sizeof(uint64_t));
	}
	if (n >= sizeof(uint32_t))
	{
		*(uint32_t *)ptr = *(uint32_t *)src;
		__update(&ptr, &src, &n, sizeof(uint32_t));
	}
	if (n >= sizeof(uint16_t))
	{
		*(uint16_t *)ptr = *(uint16_t *)src;
		__update(&ptr, &src, &n, sizeof(uint16_t));
	}
	if (n)
		*(uint8_t *)ptr = *(uint8_t *)src;
	return (dst);
}
