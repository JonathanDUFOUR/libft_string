/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodufour <jodufour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/26 22:41:53 by jdufour           #+#    #+#             */
/*   Updated: 2021/12/09 21:40:01 by jodufour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_string.h"

static void	char_swap(char *c1, char *c2)
{
	*c1 ^= *c2;
	*c2 ^= *c1;
	*c1 ^= *c2;
}

/*
	Reverse the whole content of the given string `str`
	Return the address of the given string `str`
*/
char	*ft_strrev(char *str)
{
	char	*ptr0;
	char	*ptr1;

	if (!*str || !*(str + 1))
		return (str);
	ptr0 = str;
	ptr1 = str + ft_strlen(str) - 1;
	while (ptr0 < ptr1)
		char_swap(ptr0++, ptr1--);
	return (str);
}
