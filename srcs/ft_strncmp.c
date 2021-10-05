/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodufour <jodufour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/22 22:44:18 by jdufour           #+#    #+#             */
/*   Updated: 2021/10/05 01:18:16 by jodufour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "type/t_int.h"

int	ft_strncmp(char const *s0, char const *s1, size_t n)
{
	if (!n)
		return (0);
	while ((n - 1) && *s0 && *(t_hhuint *)s0 == *(t_hhuint *)s1)
	{
		++s0;
		++s1;
		--n;
	}
	return (*(t_hhuint *)s0 - *(t_hhuint *)s1);
}
