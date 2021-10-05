/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncasecmp.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodufour <jodufour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/27 02:38:36 by jdufour           #+#    #+#             */
/*   Updated: 2021/10/05 01:17:33 by jodufour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "type/t_int.h"

static int	ft_toupper(int c)
{
	return (c - (c >= 'a' && c <= 'z') * ('a' - 'A'));
}

int	ft_strncasecmp(char const *s0, char const *s1, size_t n)
{
	while (n && s0 && s1 && *s0 && ft_toupper(*s0) == ft_toupper(*s1))
	{
		++s0;
		++s1;
		--n;
	}
	return (*(t_hhuint *)s0 - *(t_hhuint *)s1);
}
