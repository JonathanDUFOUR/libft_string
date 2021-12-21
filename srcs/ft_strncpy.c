/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodufour <jodufour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/21 23:22:40 by jdufour           #+#    #+#             */
/*   Updated: 2021/12/20 22:04:13 by jodufour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_string.h"

/*
	Copy the `n` first characters of the content of the given string `src`
	to the given string `dst`
	Return the address of the given string `dst`
*/
char	*ft_strncpy(char *const dst, char const *const src, size_t const n)
{
	return (ft_memmove(dst, src, n));
}
