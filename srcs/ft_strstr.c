/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodufour <jodufour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/21 06:28:03 by jdufour           #+#    #+#             */
/*   Updated: 2021/12/09 21:40:31 by jodufour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdint.h>
#include "ft_string.h"

static int	ft_memcmp(void const *addr0, void const *addr1, size_t n)
{
	uint8_t	*ptr0;
	uint8_t	*ptr1;

	if (!n || addr0 == addr1)
		return (0);
	ptr0 = (uint8_t *)addr0;
	ptr1 = (uint8_t *)addr1;
	while (n--)
	{
		if (*ptr0 != *ptr1)
			return (*ptr0 - *ptr1);
		++ptr0;
		++ptr1;
	}
	return (0);
}

/*
	Return the address of the first matched substring `tf`
	in the given string `str` 
	Return NULL if `tf` is not found
*/
char	*ft_strstr(char const *str, char const *tf)
{
	size_t const	tf_l = ft_strlen(tf);
	size_t const	s_l = ft_strlen(str);
	size_t			tab[256];
	size_t			i;

	i = 0;
	if (tf_l > s_l || !tf_l)
		return ((char *)(!tf_l * (uintptr_t)str));
	while (i < 256)
		tab[i++] = tf_l;
	i = 0;
	while (i < tf_l - 1)
	{
		tab[(int)tf[i]] = tf_l - i - 1;
		++i;
	}
	i = 0;
	while (i <= (s_l - tf_l))
	{
		if (str[tf_l - 1] == tf[tf_l - 1] && !ft_memcmp(str, tf, tf_l - 1))
			return ((char *)str);
		i += tab[(uint8_t)str[tf_l - 1]];
		str += tab[(uint8_t)str[tf_l - 1]];
	}
	return (NULL);
}
