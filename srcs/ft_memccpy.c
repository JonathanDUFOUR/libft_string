/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodufour <jodufour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/21 07:04:31 by jdufour           #+#    #+#             */
/*   Updated: 2021/12/27 05:22:42 by jodufour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdlib.h>
#include <stdint.h>

/*
	Copy the `n` first bytes of the area pointed by the given pointer `src`
	to the area pointed by the given pointer `dst`
	If the given byte `c` is encountered, it is copied, the copy ends here,
	and the address of the next byte in `dst` is returned
	If the given byte `c` is not encountered, the copy ends
	when `n` bytes are copied, and NULL is returned
*/
void	*ft_memccpy(void *dst, void const *src, uint8_t const c, size_t n)
{
	if (!dst || !src)
		return (NULL);
	else if (dst != src)
	{
		while (n--)
		{
			*(uint8_t *)dst++ = *(uint8_t *)src;
			if (*(uint8_t *)src++ == (uint8_t)c)
				return (dst);
		}
	}
	return (NULL);
}
