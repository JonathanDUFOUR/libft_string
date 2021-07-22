/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodufour <jodufour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/21 06:26:57 by jdufour           #+#    #+#             */
/*   Updated: 2021/07/21 00:39:07 by jodufour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_string.h"

char	*ft_strdup(char const *s)
{
	char	*output;
	char	*p;
	size_t	len;

	if (!s)
		return (NULL);
	len = ft_strlen(s);
	output = malloc((len + 1) * sizeof(char));
	if (!output)
		return (NULL);
	p = output;
	while (*s)
		*p++ = *s++;
	*p = 0;
	return (output);
}
