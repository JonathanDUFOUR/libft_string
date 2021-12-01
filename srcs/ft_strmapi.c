/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodufour <jodufour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/26 19:29:08 by jdufour           #+#    #+#             */
/*   Updated: 2021/12/01 17:57:38 by jodufour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_string.h"

char	*ft_strmapi(char const *str, char (*f)(t_uint, char))
{
	char	*map;
	char	*ptr;

	map = malloc((ft_strlen(str) + 1) * sizeof(char));
	if (!map)
		return (NULL);
	ptr = map;
	while (*str)
	{
		*ptr = (*f)((ptr - map), *str++);
		++ptr;
	}
	*ptr = 0;
	return (map);
}
