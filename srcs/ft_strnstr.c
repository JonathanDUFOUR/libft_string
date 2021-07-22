/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodufour <jodufour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/22 22:11:06 by jdufour           #+#    #+#             */
/*   Updated: 2021/07/21 02:00:24 by jodufour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_string.h"

char	*ft_strnstr(char *s, const char *to_find, size_t n)
{
	size_t		tf_len;
	char		*p1;
	char const	*p2;

	if (!*to_find)
		return (s);
	tf_len = ft_strlen(to_find);
	if (!*s || n < tf_len)
		return (NULL);
	while (*s && (n >= tf_len))
	{
		p1 = s;
		p2 = to_find;
		while (*p1 && *p2 && *p1 == *p2)
		{
			++p1;
			++p2;
		}
		if (!*p2)
			return (s);
		--n;
		++s;
	}
	return (NULL);
}
