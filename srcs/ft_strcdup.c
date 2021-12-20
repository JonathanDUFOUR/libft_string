/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcdup.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodufour <jodufour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/20 19:19:35 by jodufour          #+#    #+#             */
/*   Updated: 2021/12/20 20:47:43 by jodufour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_string.h"

/*
	Allocate a new string
	Copy the content of the given string `str` to it
	During the copy, if the given character `c` is encountered,
	it is not copied and the copy ends here
	Return the address of the new string
	Return NULL upon failure
*/
char	*ft_strcdup(char const *str, char const c)
{
	char		*output;
	char		*ptr;
	size_t		len;

	ptr = ft_strchr(str, c);
	if (!ptr)
		ptr = ft_strchr(str, 0);
	len = ptr - str;
	output = malloc((len + 1) * sizeof(char));
	if (!output)
		return (NULL);
	ft_memcpy(output, str, len);
	output[len] = 0;
	return (output);
}
