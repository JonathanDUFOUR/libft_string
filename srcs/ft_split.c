/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodufour <jodufour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/21 06:27:46 by jdufour           #+#    #+#             */
/*   Updated: 2021/12/17 22:28:04 by jodufour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <string.h>

static char	**populate(char **output, char *ptr, char const *str, char const c)
{
	size_t	size;

	size = 0;
	while (*str)
	{
		output[size++] = ptr;
		while (*str && *str != c)
			*ptr++ = *str++;
		*ptr++ = 0;
		while (*str && *str == c)
			++str;
	}
	return (output);
}

/*
	Split the given string `str` whenever char `c` is encountered
	Return an array of strings resulting of the spliting
*/
char	**ft_split(char const *str, char const c)
{
	register char const	*ptr;
	char				**output;
	size_t				size;
	size_t				len;

	while (*str && *str == c)
		++str;
	ptr = str;
	size = 0;
	len = 0;
	while (*ptr)
	{
		if (*ptr != c)
		{
			++len;
			if ((ptr == str || *(ptr - 1) == c))
				++size;
		}
		++ptr;
	}
	output = malloc((size + 1) * sizeof(char *) + (len + size) * sizeof(char));
	if (!output)
		return (NULL);
	output[size] = NULL;
	return (populate(output, (char *)(output + size + 1), str, c));
}
