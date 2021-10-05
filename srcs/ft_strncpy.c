/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodufour <jodufour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/21 23:22:40 by jdufour           #+#    #+#             */
/*   Updated: 2021/10/05 01:18:48 by jodufour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdint.h>

static void	ft_bzero(void *addr, size_t n)
{
	register char	*ptr;

	if (!addr)
		return ;
	ptr = addr;
	while (n >= sizeof(uint64_t))
	{
		*((uint64_t *)ptr) = 0;
		ptr += sizeof(uint64_t);
		n -= sizeof(uint64_t);
	}
	if (n >= sizeof(uint32_t))
	{
		*((uint32_t *)ptr) = 0;
		ptr += sizeof(uint32_t);
		n -= sizeof(uint32_t);
	}
	if (n >= sizeof(uint16_t))
	{
		*((uint16_t *)ptr) = 0;
		ptr += sizeof(uint16_t);
		n -= sizeof(uint16_t);
	}
	if (n)
		*ptr = 0;
}

char	*ft_strncpy(char *dst, char const *src, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n && src[i])
	{
		dst[i] = src[i];
		++i;
	}
	ft_bzero(&dst[i], n - i);
	return (dst);
}
