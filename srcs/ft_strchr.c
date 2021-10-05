/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodufour <jodufour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/22 21:20:35 by jdufour           #+#    #+#             */
/*   Updated: 2021/10/05 02:30:44 by jodufour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_string.h"

char	*ft_strchr(char const *str, int const c)
{
	if (!str)
		return (NULL);
	while (*str && *str != (char const)c)
		++str;
	if (*str == (char const)c)
		return ((char *)str);
	return (NULL);
}
