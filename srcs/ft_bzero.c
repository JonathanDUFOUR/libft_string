/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodufour <jodufour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/21 06:14:24 by jdufour           #+#    #+#             */
/*   Updated: 2021/12/27 05:19:46 by jodufour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdint.h>

static void	__update(void **const addr, size_t *const n,
	size_t const jump)
{
	*addr += jump;
	*n -= jump;
}

/*
	Set the `n` first bytes of the area pointed by the given pointer `addr`
	to zero
*/
void	ft_bzero(void *addr, size_t n)
{
	if (!addr)
		return ;
	while (n >= sizeof(uint64_t))
	{
		*((uint64_t *)addr) = (uint64_t)0;
		__update(&addr, &n, sizeof(uint64_t));
	}
	if (n >= sizeof(uint32_t))
	{
		*((uint32_t *)addr) = (uint32_t)0;
		__update(&addr, &n, sizeof(uint32_t));
	}
	if (n >= sizeof(uint16_t))
	{
		*((uint16_t *)addr) = (uint16_t)0;
		__update(&addr, &n, sizeof(uint16_t));
	}
	if (n)
		*(uint8_t *)addr = (uint8_t)0;
}
