/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodufour <jodufour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/22 22:11:06 by jdufour           #+#    #+#             */
/*   Updated: 2021/10/05 02:25:44 by jodufour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_string.h"

char	*ft_strnstr(char const *str, const char *tf, size_t n)
{
	size_t	len;
	size_t	i;
	size_t	j;

	if (!str || !tf)
		return (NULL);
	len = ft_strlen(str);
	n = (len < n) * len + (len >= n) * n;
	len = ft_strlen(tf);
	i = 0;
	while ((i + len) <= n)
	{
		j = 0;
		while (tf[j] && (str[j] == tf[j]))
			++j;
		if (!tf[j])
			return ((char *)str);
		++str;
		++i;
	}
	return (NULL);
}
