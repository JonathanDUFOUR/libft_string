/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodufour <jodufour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/22 21:55:54 by jdufour           #+#    #+#             */
/*   Updated: 2021/10/05 02:31:38 by jodufour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_string.h"

char	*ft_strrchr(char const *str, int const c)
{
	char const	*ptr = str;

	ptr += ft_strlen(str);
	while (ptr >= str && *ptr != (char const)c)
		--ptr;
	if (*ptr == (char const)c)
		return ((char *)ptr);
	return (NULL);
}
