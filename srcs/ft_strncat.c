/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodufour <jodufour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/21 23:29:24 by jdufour           #+#    #+#             */
/*   Updated: 2021/12/20 22:04:24 by jodufour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_string.h"

/*
	Append the `n` first characters of the content of the given string `src`
	to the end of the given string `dst`
*/
char	*ft_strncat(char *const dst, char const *const src, size_t const n)
{
	return (ft_memmove(dst + ft_strlen(dst), src, n + 1));
}
