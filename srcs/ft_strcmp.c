/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodufour <jodufour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/21 06:26:33 by jdufour           #+#    #+#             */
/*   Updated: 2021/10/05 01:06:34 by jodufour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "type/t_int.h"

int	ft_strcmp(char const *s0, char const *s1)
{
	while (s0 && s1 && *s0 && *(t_hhuint *)s0 == *(t_hhuint *)s1)
	{
		++s0;
		++s1;
	}
	return (*(t_hhuint *)s0 - *(t_hhuint *)s1);
}
