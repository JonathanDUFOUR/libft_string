/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlink.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodufour <jodufour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/28 21:39:40 by jdufour           #+#    #+#             */
/*   Updated: 2021/12/30 07:29:20 by jodufour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_string.h"

static char	*__allocate(char const **strs, char const *link)
{
	size_t	len;

	len = ft_strlen(*strs++);
	while (*strs)
		len += ft_strlen(*strs++) + ft_strlen(link);
	return (malloc((len + 1) * sizeof(char)));
}

static void	__fill(char const **strs, char const *link, char *output)
{
	ft_strcpy(output, *strs++);
	while (*strs)
	{
		ft_strcat(output, link);
		ft_strcat(output, *strs++);
	}
}

/*
	Allocate a new empty string, and successively append the contents
	of given strings `strs` to the end of it, separating each one
	with the content of the content of the given string `link`
	Return the address of the new string
	Return NULL upon failure
*/
char	*ft_strlink(char const **strs, char const *link)
{
	char	*output;

	if (!*strs)
		return (NULL);
	output = __allocate(strs, link);
	if (!output)
		return (NULL);
	__fill(strs, link, output);
	return (output);
}
