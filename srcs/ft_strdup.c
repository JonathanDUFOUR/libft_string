/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodufour <jodufour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/21 06:26:57 by jdufour           #+#    #+#             */
/*   Updated: 2021/12/09 20:38:27 by jodufour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_string.h"

/*
	Allocate a new string and copy the content of the given string `str` to it
	Return the address of the new string
	Return NULL upon failure
*/
char	*ft_strdup(char const *str)
{
	char	*output;
	char	*ptr;
	size_t	len;

	len = ft_strlen(str);
	output = malloc((len + 1) * sizeof(char));
	if (!output)
		return (NULL);
	ptr = output;
	while (*str)
		*ptr++ = *str++;
	*ptr = 0;
	return (output);
}
