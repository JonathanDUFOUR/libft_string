/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodufour <jodufour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/21 18:55:17 by jdufour           #+#    #+#             */
/*   Updated: 2021/12/19 22:51:54 by jodufour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdint.h>
#include <stdlib.h>

/*
	Return the address of the first occurence of the given byte `c`
	in the given area `addr`
	Return NULL if `c` is not found
*/
void	*ft_memchr(void const *addr, uint8_t const c, size_t size)
{
	while (size && (*(uint8_t *)addr) != c)
	{
		--size;
		addr += sizeof(uint8_t);
	}
	if (size && (*(uint8_t *)addr) == c)
		return ((void *)addr);
	return (NULL);
}
