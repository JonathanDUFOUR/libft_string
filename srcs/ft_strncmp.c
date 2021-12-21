/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodufour <jodufour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/22 22:44:18 by jdufour           #+#    #+#             */
/*   Updated: 2021/12/20 22:16:50 by jodufour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "type/t_int.h"

/*
	Compare the `n` first characters of the content of the given string `str0`
	and the content of the given string `str1`
	with case sensitivity
*/
int	ft_strncmp(char const *str0, char const *str1, size_t n)
{
	while (n && *str0 && *str0 == *str1)
	{
		++str0;
		++str1;
		--n;
	}
	return (*str0 - *str1);
}
