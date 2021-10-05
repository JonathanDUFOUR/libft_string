/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodufour <jodufour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/21 06:26:11 by jdufour           #+#    #+#             */
/*   Updated: 2021/10/05 01:03:56 by jodufour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strcat(char *dst, char const *src)
{
	char	*p;

	if (!dst || !src)
		return (NULL);
	p = dst;
	while (*p)
		++p;
	while (*src)
		*p++ = *src++;
	*p = 0;
	return (dst);
}
