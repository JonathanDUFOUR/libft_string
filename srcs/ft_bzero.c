/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodufour <jodufour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/21 06:14:24 by jdufour           #+#    #+#             */
/*   Updated: 2021/12/19 22:51:34 by jodufour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdint.h>

static void	__update(void **const addr, size_t *const size,
	size_t const jump)
{
	*addr += jump;
	*size -= jump;
}

/*
	Set every bytes of the area pointed by the given pointer `addr`
	to zero
*/
void	ft_bzero(void *addr, size_t size)
{
	if (!addr)
		return ;
	while (size >= sizeof(uint64_t))
	{
		*((uint64_t *)addr) = (uint64_t)0;
		__update(&addr, &size, sizeof(uint64_t));
	}
	if (size >= sizeof(uint32_t))
	{
		*((uint32_t *)addr) = (uint32_t)0;
		__update(&addr, &size, sizeof(uint64_t));
	}
	if (size >= sizeof(uint16_t))
	{
		*((uint16_t *)addr) = (uint16_t)0;
		__update(&addr, &size, sizeof(uint64_t));
	}
	if (size)
		*(uint8_t *)addr = (uint8_t)0;
}
