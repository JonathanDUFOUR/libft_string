/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsubchr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodufour <jodufour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/09 20:05:19 by jodufour          #+#    #+#             */
/*   Updated: 2021/12/21 01:24:11 by jodufour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_string.h"

/*
	Allocate a new string and copy the content of the given string `str` to it
	except the first occurence of the character `c`
	Return the address of the new string
	Return NULL upon failure
*/
char	*ft_strsubchr(char const *str, char const c)
{
	char			*output;
	char *const		ptr = ft_strchr(str, c);
	size_t const	size = ft_strlen(str);
	size_t			i;

	if (!c || !ptr || !size)
		return (ft_strdup(str));
	output = malloc(size * sizeof(char));
	if (!output)
		return (NULL);
	i = ptr - str;
	return (ft_memcpy(ft_memcpy(output, str, i) + i, str + i + 1, size - i));
}
