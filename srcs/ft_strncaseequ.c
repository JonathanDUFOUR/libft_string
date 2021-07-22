/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncaseequ.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodufour <jodufour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/28 06:51:16 by jdufour           #+#    #+#             */
/*   Updated: 2021/07/22 21:23:32 by jodufour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdbool.h>
#include <string.h>

static int	ft_toupper(int c)
{
	return (c - (c >= 'a' && c <= 'z') * ('a' - 'A'));
}

bool	ft_strncaseequ(char const *s1, char const *s2, size_t n)
{
	if (s1 == s2 || !n)
		return (true);
	while (n && s1 && s2 && *s1 && ft_toupper(*s1) == ft_toupper(*s2))
	{
		++s1;
		++s2;
		--n;
	}
	return (!n || (s1 && s2 && ft_toupper(*s1) == ft_toupper(*s2)));
}
