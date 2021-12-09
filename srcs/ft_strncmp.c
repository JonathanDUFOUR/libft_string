/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodufour <jodufour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/22 22:44:18 by jdufour           #+#    #+#             */
/*   Updated: 2021/12/09 21:08:32 by jodufour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "type/t_int.h"

/*
	Compare the `n` first characters of the content of the given string `s0`
	and the content of the given string `s1`
	with case sensitivity
*/
int	ft_strncmp(char const *s0, char const *s1, size_t n)
{
	if (!n)
		return (0);
	while ((n - 1) && *s0 && *s0 == *s1)
	{
		++s0;
		++s1;
		--n;
	}
	return (*s0 - *s1);
}
