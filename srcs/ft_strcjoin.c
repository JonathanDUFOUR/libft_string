/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcjoin.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodufour <jodufour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/20 21:27:23 by jodufour          #+#    #+#             */
/*   Updated: 2021/12/20 21:45:18 by jodufour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_string.h"

/*
	Allocate a new string
	Copy the content of the given string `str0` to it
	During the copy, if the given character `c` is encountered,
	it is not copied, and the next operation begins
	Append the content of the given string `str1` to the new string
	During the append, if the given character `c` is encountered,
	it is not copied
	Return the address of the new string
	Return NULL upon failure
*/
char	*ft_strcjoin(char const *str0, char const *str1, char const c)
{
	char		*output;
	char const	*ptr0 = ft_strchr(str0, c);
	char const	*ptr1 = ft_strchr(str1, c);
	size_t		len;

	if (!ptr0)
		ptr0 = ft_strchr(str0, 0);
	if (!ptr1)
		ptr1 = ft_strchr(str1, 0);
	len = ptr0 - str0 + ptr1 - str1;
	output = malloc((len + 1) * sizeof(char));
	if (!output)
		return (NULL);
	ft_memcpy(output, str0, ptr0 - str0);
	ft_memcpy(output + (size_t)(ptr0 - str0), str1, ptr1 - str1);
	output[len] = 0;
	return (output);
}
