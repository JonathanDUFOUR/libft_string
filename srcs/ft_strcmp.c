/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodufour <jodufour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/21 06:26:33 by jdufour           #+#    #+#             */
/*   Updated: 2021/12/09 20:37:57 by jodufour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "type/t_int.h"

/*
	Compare the content of the given string `s0`
	and the content of the given string `s1`
	with case sensitivity
*/
int	ft_strcmp(char const *s0, char const *s1)
{
	while (*s0 && *s0 == *s1)
	{
		++s0;
		++s1;
	}
	return (*s0 - *s1);
}
