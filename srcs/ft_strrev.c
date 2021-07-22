/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodufour <jodufour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/26 22:41:53 by jdufour           #+#    #+#             */
/*   Updated: 2021/07/21 01:02:01 by jodufour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_string.h"

static void	char_swap(char *c1, char *c2)
{
	*c1 ^= *c2;
	*c2 ^= *c1;
	*c1 ^= *c2;
}

char	*ft_strrev(char *s)
{
	char	*p1;
	char	*p2;
	size_t	len;

	if (!s || !*s || !*(s + 1))
		return (s);
	len = ft_strlen(s);
	p1 = s;
	p2 = s + len;
	while ((len--) / 2)
		char_swap(p1++, p2--);
	return (s);
}
