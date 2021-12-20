/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memswap.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodufour <jodufour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/21 06:28:15 by jdufour           #+#    #+#             */
/*   Updated: 2021/12/19 22:38:52 by jodufour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdint.h>

/*
	Swap the value of both bytes pointed by given pointers `a` and `b`
*/
void	ft_memswap(uint8_t *a, uint8_t *b)
{
	*a ^= *b;
	*b ^= *a;
	*a ^= *b;
}
