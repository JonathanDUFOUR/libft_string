/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodufour <jodufour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/21 06:26:11 by jdufour           #+#    #+#             */
/*   Updated: 2021/12/09 20:47:24 by jodufour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

/*
	Append the content of the given string `src`
	to the end of the given string `dst`
*/
char	*ft_strcat(char *dst, char const *src)
{
	char	*ptr;

	if (!dst || !src)
		return (NULL);
	ptr = dst;
	while (*ptr)
		++ptr;
	while (*src)
		*ptr++ = *src++;
	*ptr = 0;
	return (dst);
}
