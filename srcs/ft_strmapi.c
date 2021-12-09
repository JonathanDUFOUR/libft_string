/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodufour <jodufour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/26 19:29:08 by jdufour           #+#    #+#             */
/*   Updated: 2021/12/09 21:04:12 by jodufour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_string.h"

/*
	Allocate a new string, copy the content of the given string `str` to it,
	and apply the function `fct` to each character of the new string
	Return the address of the new string
	Return NULL upon failure
*/
char	*ft_strmapi(char const *str, char (*fct)(t_uint, char))
{
	char	*map;
	char	*ptr;

	map = malloc((ft_strlen(str) + 1) * sizeof(char));
	if (!map)
		return (NULL);
	ptr = map;
	while (*str)
	{
		*ptr = (*fct)((ptr - map), *str++);
		++ptr;
	}
	*ptr = 0;
	return (map);
}
