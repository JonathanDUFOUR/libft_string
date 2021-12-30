/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodufour <jodufour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/21 23:22:40 by jdufour           #+#    #+#             */
/*   Updated: 2021/12/30 12:12:02 by jodufour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_string.h"

/*
	Copy the no more than `n` characters from the given string `src`
	to the given string `dst`
	Return the address of the given string `dst`
*/
char	*ft_strncpy(char *const dst, char const *src, size_t n)
{
	register char	*ptr;

	ptr = dst;
	++n;
	while (--n && *src)
		*ptr++ = *src++;
	if (!n)
		return (dst);
	while (n--)
		*ptr++ = 0;
	return (dst);
}
