/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodufour <jodufour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/26 17:47:35 by jdufour           #+#    #+#             */
/*   Updated: 2021/10/05 01:16:14 by jodufour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_string.h"

char	*ft_strmap(char const *str, char (*f)(char))
{
	char	*map;
	char	*ptr;

	if (!str || !f)
		return (NULL);
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
