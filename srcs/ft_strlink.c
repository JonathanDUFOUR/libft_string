/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlink.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodufour <jodufour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/28 21:39:40 by jdufour           #+#    #+#             */
/*   Updated: 2021/07/22 21:21:38 by jodufour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_string.h"
#include <stdint.h>

static void	ft_bzero(void *addr, size_t n)
{
	register char	*p;

	if (!addr)
		return ;
	p = addr;
	while (n >= sizeof(uint64_t))
	{
		*((uint64_t *)p) = 0;
		p += sizeof(uint64_t);
		n -= sizeof(uint64_t);
	}
	if (n >= sizeof(uint32_t))
	{
		*((uint32_t *)p) = 0;
		p += sizeof(uint32_t);
		n -= sizeof(uint32_t);
	}
	if (n >= sizeof(uint16_t))
	{
		*((uint16_t *)p) = 0;
		p += sizeof(uint16_t);
		n -= sizeof(uint16_t);
	}
	if (n)
		*p = 0;
}

char	*ft_strlink(char const **strs, char const *link)
{
	char		*output;
	char const	**cpy;
	size_t		o_len;
	size_t		l_len;

	if (!strs || !link)
		return (NULL);
	if (!*strs || !*(strs + 1))
		return ((char *)*strs);
	cpy = strs;
	l_len = ft_strlen(link);
	o_len = ft_strlen(*cpy++);
	while (*cpy)
		o_len += ft_strlen(*cpy++) + l_len;
	output = malloc(o_len + 1);
	if (!output)
		return (NULL);
	ft_bzero(output, o_len + 1);
	while (*strs)
	{
		output = ft_strcat(output, *strs++);
		output = ft_strcat(output, link);
	}
	*(output + o_len) = 0;
	return (output);
}
