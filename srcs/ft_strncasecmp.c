/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncasecmp.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodufour <jodufour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/27 02:38:36 by jdufour           #+#    #+#             */
/*   Updated: 2022/04/27 09:07:51 by jodufour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include "t_int.h"

static char	__toupper(char const c)
{
	return (c - (c >= 'a' && c <= 'z') * ('a' - 'A'));
}

/*
	Compare the `n` first characters of the content of the given string `str0`
	and the content of the given string `str1`
	without case sensitivity
*/
int	ft_strncasecmp(char const *str0, char const *str1, size_t n)
{
	while (n && *str0 && __toupper(*str0) == __toupper(*str1))
	{
		++str0;
		++str1;
		--n;
	}
	return ((*(t_hhuint *)str0 - *(t_hhuint *)str1) *!!n);
}
