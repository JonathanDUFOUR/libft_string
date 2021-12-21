/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodufour <jodufour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/21 06:26:11 by jdufour           #+#    #+#             */
/*   Updated: 2021/12/20 21:59:58 by jodufour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_string.h"

/*
	Append the content of the given string `src`
	to the end of the given string `dst`
*/
char	*ft_strcat(char *dst, char const *src)
{
	register char	*ptr;

	ptr = dst + ft_strlen(dst);
	while (*src)
		*ptr++ = *src++;
	*ptr = 0;
	return (dst);
}
