/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodufour <jodufour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/21 06:26:45 by jdufour           #+#    #+#             */
/*   Updated: 2021/12/20 21:57:50 by jodufour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

/*
	Copy the content of the given string `src`
	to the given string `dst`
	Return the address of the given string `dst`
*/
char	*ft_strcpy(char *const dst, char const *src)
{
	register char	*ptr;

	ptr = dst;
	while (*src)
		*ptr++ = *src++;
	*ptr = 0;
	return (dst);
}
