/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodufour <jodufour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/04 16:36:45 by jonathan          #+#    #+#             */
/*   Updated: 2021/12/09 20:46:07 by jodufour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_string.h"

/*
	Allocate a new string, copy the content of the given string `s0` to it
	and appends the content of the given string `s1` to it
	Return the address of the new string
	Return NULL upon failure
*/
char	*ft_strjoin(char const *s0, char const *s1)
{
	char	*output;
	char	*ptr;

	output = malloc((ft_strlen(s0) + ft_strlen(s1) + 1) * sizeof(char));
	if (!output)
		return (NULL);
	ptr = output;
	while (*s0)
		*ptr++ = *s0++;
	while (*s1)
		*ptr++ = *s1++;
	*ptr = 0;
	return (output);
}
