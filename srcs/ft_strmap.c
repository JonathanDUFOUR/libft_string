/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodufour <jodufour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/26 17:47:35 by jdufour           #+#    #+#             */
/*   Updated: 2021/12/01 17:57:29 by jodufour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_string.h"

char	*ft_strmap(char const *str, char (*f)(char))
{
	char	*map;
	char	*ptr;

	map = ft_strdup(str);
	if (!map)
		return (NULL);
	ptr = map;
	while (*ptr)
	{
		*ptr = f(*ptr);
		++ptr;
	}
	return (map);
}
