/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsubidx.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodufour <jodufour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/10 15:00:20 by jodufour          #+#    #+#             */
/*   Updated: 2021/12/21 02:47:33 by jodufour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_string.h"

/*
	Allocate a new string and copy the content of the given string `str` to it
	except the character at the index `idx`
	Return the address of the new string
	Return NULL upon failure
*/
char	*ft_strsubidx(char const *str, size_t const idx)
{
	char			*output;
	size_t const	size = ft_strlen(str);

	if (!size || idx >= size - 1)
		return (ft_strdup(str));
	output = malloc(size * sizeof(char));
	if (!output)
		return (NULL);
	ft_memcpy(output + idx, str + idx + 1, size - idx);
	return (ft_memcpy(output, str, idx));
}
