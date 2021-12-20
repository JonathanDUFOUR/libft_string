/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodufour <jodufour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/30 05:44:00 by jdufour           #+#    #+#             */
/*   Updated: 2021/12/20 20:49:57 by jodufour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_string.h"

/*
	Allocate `n` elements of `size` bytes each
	Set all allocated bytes to null bytes
	Return the address of the allocated area
	Return NULL upon failure
*/
void	*ft_calloc(size_t n, size_t size)
{
	void	*output;

	output = malloc(size * n);
	if (n && size && output)
		ft_bzero(output, size * n);
	return (output);
}
