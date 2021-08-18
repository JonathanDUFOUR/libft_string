/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodufour <jodufour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/21 06:26:33 by jdufour           #+#    #+#             */
/*   Updated: 2021/08/18 02:36:35 by jodufour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "type/t_int.h"

int	ft_strcmp(char const *s1, char const *s2)
{
	while (s1 && s2 && *s1 && *(t_hhuint *)s1 == *(t_hhuint *)s2)
	{
		++s1;
		++s2;
	}
	return (*(t_hhuint *)s1 - *(t_hhuint *)s2);
}
