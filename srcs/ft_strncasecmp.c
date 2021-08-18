/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncasecmp.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodufour <jodufour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/27 02:38:36 by jdufour           #+#    #+#             */
/*   Updated: 2021/08/18 02:36:35 by jodufour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "type/t_int.h"

static int	ft_toupper(int c)
{
	return (c - (c >= 'a' && c <= 'z') * ('a' - 'A'));
}

int	ft_strncasecmp(char const *s1, char const *s2, size_t n)
{
	while (n && s1 && s2 && *s1 && ft_toupper(*s1) == ft_toupper(*s2))
	{
		++s1;
		++s2;
		--n;
	}
	return (*(t_hhuint *)s1 - *(t_hhuint *)s2);
}
