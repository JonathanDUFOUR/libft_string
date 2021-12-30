/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodufour <jodufour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/28 23:11:11 by jdufour           #+#    #+#             */
/*   Updated: 2021/12/30 15:54:42 by jodufour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_string.h"

/*
	Allocate a new string and copy the content of the given string `str` to it
	except the first/last characters that are found in the given string `set`
	Return the address of the new string
	Return NULL upon failure
*/
char	*ft_strtrim(char const *str, char const *set)
{
	char		*output;
	char const	*ptr;
	size_t		len;

	len = ft_strlen(str);
	while (*str && ft_strchr(set, *str))
	{
		--len;
		++str;
	}
	ptr = str + len - 1;
	while (ptr >= str && ft_strchr(set, *ptr))
	{
		--len;
		--ptr;
	}
	output = malloc((len + 1) * sizeof(char));
	if (!output)
		return (NULL);
	output[len] = 0;
	return (ft_memcpy(output, str, len));
}
