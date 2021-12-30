/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodufour <jodufour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/26 17:47:35 by jdufour           #+#    #+#             */
/*   Updated: 2021/12/30 08:16:31 by jodufour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_string.h"

/*
	Allocate a new string, copy the content of the given string `str` to it,
	and apply the function `fct` to each character of the new string
	Return the address of the new string
	Return NULL upon failure
*/
char	*ft_strmap(char const *str, char (*fct)(char const c))
{
	char	*map;
	char	*ptr;

	map = ft_strdup(str);
	if (!map)
		return (NULL);
	ptr = map;
	while (*ptr)
	{
		*ptr = fct(*ptr);
		++ptr;
	}
	return (map);
}
