/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodufour <jodufour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/26 19:29:08 by jdufour           #+#    #+#             */
/*   Updated: 2021/07/22 21:22:31 by jodufour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_string.h"

char	*ft_strmapi(char const *s, char (*f)(t_uint, char))
{
	char	*map;
	char	*p;

	if (!s || !f)
		return (NULL);
	map = malloc((ft_strlen(s) + 1) * sizeof(char));
	if (!map)
		return (NULL);
	p = map;
	while (*s)
	{
		*p = (*f)((p - map), *s++);
		++p;
	}
	*p = 0;
	return (map);
}
