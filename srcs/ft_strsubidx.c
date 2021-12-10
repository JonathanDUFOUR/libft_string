/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsubidx.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodufour <jodufour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/10 15:00:20 by jodufour          #+#    #+#             */
/*   Updated: 2021/12/10 15:12:46 by jodufour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_string.h"

/*
	Allocate a new string and copy the content of the given string `str` to it
	except the character at the `idx` position
	Return the address of the new string
	Return NULL upon failure
*/
char	*ft_strsubidx(char const *str, size_t const idx)
{
	char	*output;
	char	*ptr;

	if (idx >= ft_strlen(str))
		return (ft_strdup(str));
	output = malloc(ft_strlen(str) * sizeof(char));
	if (!output)
		return (NULL);
	ptr = output;
	while (*str && ptr - output != idx)
		*ptr++ = *str++;
	++str;
	while (*str)
		*ptr++ = *str++;
	*ptr = 0;
	return (output);
}
