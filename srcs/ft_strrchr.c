/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodufour <jodufour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/22 21:55:54 by jdufour           #+#    #+#             */
/*   Updated: 2021/12/20 22:19:04 by jodufour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_string.h"

/*
	Return the address of the last occurence of the character `c`
	in the given string `str`
	Return NULL if `c` is not found
*/
char	*ft_strrchr(char const *str, char const c)
{
	register char const	*ptr = str;

	ptr += ft_strlen(str);
	while (ptr >= str && *ptr != c)
		--ptr;
	if (*ptr == c)
		return ((char *)ptr);
	return (NULL);
}
