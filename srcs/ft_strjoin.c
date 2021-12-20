/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodufour <jodufour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/04 16:36:45 by jonathan          #+#    #+#             */
/*   Updated: 2021/12/20 20:49:43 by jodufour         ###   ########.fr       */
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
	char			*output;
	size_t const	s0_len = ft_strlen(s0);
	size_t const	s1_len = ft_strlen(s1);

	output = malloc((s0_len + s1_len + 1) * sizeof(char));
	if (!output)
		return (NULL);
	ft_memcpy(output, s0, s0_len);
	ft_memcpy(output + s0_len, s1, s1_len);
	output[s0_len + s1_len] = 0;
	return (output);
}
