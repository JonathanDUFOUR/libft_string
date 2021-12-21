/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodufour <jodufour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/21 06:26:57 by jdufour           #+#    #+#             */
/*   Updated: 2021/12/20 22:12:17 by jodufour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_string.h"

/*
	Allocate a new string 
	Copy the content of the given string `str` to it
	Return the address of the new string
	Return NULL upon failure
*/
char	*ft_strdup(char const *str)
{
	char	*output;
	size_t	size;

	size = ft_strlen(str) + 1;
	output = malloc(size * sizeof(char));
	if (!output)
		return (NULL);
	return (ft_memcpy(output, str, size));
}
