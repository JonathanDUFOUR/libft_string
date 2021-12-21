/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsubidx.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodufour <jodufour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/10 15:00:20 by jodufour          #+#    #+#             */
/*   Updated: 2021/12/21 01:29:20 by jodufour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_string.h"

/*
	Allocate a new string and copy the content of the given string `str` to it
	except the character at the index `i`
	Return the address of the new string
	Return NULL upon failure
*/
char	*ft_strsubidx(char const *str, size_t const i)
{
	char			*output;
	size_t const	size = ft_strlen(str);

	if (!size || i >= size - 1)
		return (ft_strdup(str));
	output = malloc(size * sizeof(char));
	if (!output)
		return (NULL);
	return (ft_memcpy(ft_memcpy(output, str, i) + i, str + i + 1, size - i));
}
