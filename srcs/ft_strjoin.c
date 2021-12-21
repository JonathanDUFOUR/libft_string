/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodufour <jodufour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/04 16:36:45 by jonathan          #+#    #+#             */
/*   Updated: 2021/12/21 02:42:51 by jodufour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_string.h"

/*
	Allocate a new string, copy the content of the given string `str0` to it
	and append the content of the given string `str1` to it
	Return the address of the new string
	Return NULL upon failure
*/
char	*ft_strjoin(char const *str0, char const *str1)
{
	char			*output;
	size_t const	len0 = ft_strlen(str0);
	size_t const	len1 = ft_strlen(str1);
	size_t const	len = len0 + len1;

	output = malloc((len + 1) * sizeof(char));
	if (!output)
		return (NULL);
	output[len] = 0;
	ft_memcpy(output + len0, str1, len1);
	return (ft_memcpy(output, str0, len0));
}
