/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlink.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodufour <jodufour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/28 21:39:40 by jdufour           #+#    #+#             */
/*   Updated: 2021/12/20 20:50:35 by jodufour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_string.h"

/*
	Allocate a new empty string, and successively append the contents
	of given strings `strs` to the end of it, separating each one
	with the content of the content of the given string `link`
	Return the address of the new string
	Return NULL upon failure
*/
char	*ft_strlink(char const **strs, char const *link)
{
	char		*output;
	char const	**ptr = strs;
	size_t		o_len;
	size_t		l_len;

	if (!*strs || !*(strs + 1))
		return (ft_strdup(*strs));
	l_len = ft_strlen(link);
	o_len = ft_strlen(*ptr++);
	while (*ptr)
		o_len += ft_strlen(*ptr++) + l_len;
	output = malloc(o_len + 1);
	if (!output)
		return (NULL);
	ft_bzero(output, o_len + 1);
	while (*strs)
	{
		output = ft_strcat(output, *strs++);
		output = ft_strcat(output, link);
	}
	*(output + o_len) = 0;
	return (output);
}
