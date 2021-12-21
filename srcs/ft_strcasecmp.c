/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcasecmp.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodufour <jodufour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/27 00:58:19 by jdufour           #+#    #+#             */
/*   Updated: 2021/12/20 21:47:30 by jodufour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdint.h>

static int	ft_toupper(int const c)
{
	return (c - (c >= 'a' && c <= 'z') * ('a' - 'A'));
}

/*
	Compare the content of the given string `str0`
	and the content of the given string `str1`
	without case sensitivity
*/
int	ft_strcasecmp(char const *str0, char const *str1)
{
	while (*str0 && ft_toupper(*str0) == ft_toupper(*str1))
	{
		++str0;
		++str1;
	}
	return (*str0 - *str1);
}
