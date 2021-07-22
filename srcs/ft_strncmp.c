/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodufour <jodufour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/22 22:44:18 by jdufour           #+#    #+#             */
/*   Updated: 2021/07/22 21:40:40 by jodufour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "typedefs/t_int.h"

int	ft_strncmp(char const *s1, char const *s2, size_t n)
{
	if (!n)
		return (0);
	while ((n - 1) && *s1 && *(t_hhuint *)s1 == *(t_hhuint *)s2)
	{
		++s1;
		++s2;
		--n;
	}
	return (*(t_hhuint *)s1 - *(t_hhuint *)s2);
}
