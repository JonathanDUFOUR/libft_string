/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodufour <jodufour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/22 19:09:16 by jdufour           #+#    #+#             */
/*   Updated: 2021/12/19 21:02:42 by jodufour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

/*
	Release the resources of the pointer pointed by the given pointer `addr`
	and set it to NULL
*/
void	ft_memdel(void *addr)
{
	if (addr)
	{
		free(*(void **)addr);
		*(void **)addr = NULL;
	}
}
