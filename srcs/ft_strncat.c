/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodufour <jodufour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/21 23:29:24 by jdufour           #+#    #+#             */
/*   Updated: 2021/12/09 21:17:13 by jodufour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

/*
	Append the `n` first characters of the content of the given string `src`
	to the end of the given string `dst`
*/
char	*ft_strncat(char *dst, char const *src, size_t n)
{
	char	*ptr;

	ptr = dst;
	while (*ptr)
		++ptr;
	while (n-- && *src)
		*ptr++ = *src++;
	*ptr = 0;
	return (dst);
}
