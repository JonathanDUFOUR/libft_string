/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodufour <jodufour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/21 23:29:24 by jdufour           #+#    #+#             */
/*   Updated: 2021/12/30 10:18:54 by jodufour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_string.h"

/*
	Append no more than `n` characters from the given string `src`
	to the end of the given string `dst`
*/
char	*ft_strncat(char *const dst, char const *src, size_t n)
{
	register char	*ptr;

	ptr = dst;
	while (*ptr)
		++ptr;
	while (n-- && *src)
		*ptr++ = *src++;
	*ptr = 0;
	return (dst);
}
