/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcaseequ.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodufour <jodufour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/28 06:46:06 by jdufour           #+#    #+#             */
/*   Updated: 2021/07/22 21:20:49 by jodufour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdbool.h>

static int	ft_toupper(int c)
{
	return (c - (c >= 'a' && c <= 'z') * ('a' - 'A'));
}

bool	ft_strcaseequ(char const *s1, char const *s2)
{
	if (s1 == s2)
		return (true);
	while (s1 && s2 && *s1 && ft_toupper(*s1++) == ft_toupper(*s2))
		++s2;
	return (s1 && s2 && ft_toupper(*s1) == ft_toupper(*s2));
}
