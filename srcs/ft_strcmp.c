/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodufour <jodufour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/21 06:26:33 by jdufour           #+#    #+#             */
/*   Updated: 2022/04/27 09:07:36 by jodufour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "t_int.h"

/*
	Compare the content of the given string `str0`
	and the content of the given string `str1`
	with case sensitivity
*/
int	ft_strcmp(char const *str0, char const *str1)
{
	while (*str0 && *str0 == *str1)
	{
		++str0;
		++str1;
	}
	return (*str0 - *str1);
}
