/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlink.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodufour <jodufour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/28 21:39:40 by jdufour           #+#    #+#             */
/*   Updated: 2021/12/01 17:57:14 by jodufour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_string.h"
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

char	*ft_strlink(char const **strs, char const *link)
{
	char		*output;
	char const	**ptr = strs;
	size_t		o_len;
	size_t		l_len;

	if (!*strs || !*(strs + 1))
		return ((char *)*strs);
	l_len = ft_strlen(link);
	o_len = ft_strlen(*ptr++);
	while (*ptr)
		o_len += ft_strlen(*ptr++) + l_len;
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
