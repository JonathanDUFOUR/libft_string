/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcasecmp.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodufour <jodufour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/27 00:58:19 by jdufour           #+#    #+#             */
/*   Updated: 2021/12/09 21:07:30 by jodufour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdint.h>

static int	ft_toupper(int const c)
{
	return (c - (c >= 'a' && c <= 'z') * ('a' - 'A'));
}

/*
	Compare the content of the given string `s0`
	and the content of the given string `s1`
	without case sensitivity
*/
int	ft_strcasecmp(char const *s0, char const *s1)
{
	while (*s0 && ft_toupper(*s0) == ft_toupper(*s1))
	{
		++s0;
		++s1;
	}
	return (*s0 - *s1);
}
