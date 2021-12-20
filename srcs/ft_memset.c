/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodufour <jodufour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/21 06:37:54 by jdufour           #+#    #+#             */
/*   Updated: 2021/12/19 23:10:10 by jodufour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdint.h>

static void	__update(void **const ptr, size_t *const size,
	size_t const jump)
{
	*ptr += jump;
	*size -= jump;
}

/*
	Set the value of every bytes of the area pointed by the given pointer `addr`
	to the given value `c`
*/
void	*ft_memset(void *addr, uint8_t const c, size_t size)
{
	void			*ptr;
	uint16_t const	set16 = (uint16_t)c | (uint16_t)c << 8;
	uint32_t const	set32 = (uint32_t)set16 | (uint32_t)set16 << 16;
	uint64_t const	set64 = (uint64_t)set32 | (uint64_t)set32 << 32;

	ptr = addr;
	while (size >= sizeof(uint64_t))
	{
		*(uint64_t *)ptr = set64;
		__update(&ptr, &size, sizeof(uint64_t));
	}
	if (size >= sizeof(uint32_t))
	{
		*(uint32_t *)ptr = set32;
		__update(&ptr, &size, sizeof(uint32_t));
	}
	if (size >= sizeof(uint16_t))
	{
		*(uint16_t *)ptr = set16;
		__update(&ptr, &size, sizeof(uint16_t));
	}
	if (size)
		*(uint8_t *)ptr = c;
	return (addr);
}
