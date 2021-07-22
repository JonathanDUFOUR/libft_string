/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodufour <jodufour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/28 20:47:11 by jdufour           #+#    #+#             */
/*   Updated: 2021/07/22 21:27:39 by jodufour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_string.h"

char	*ft_substr(char const *s, size_t start, size_t len)
{
	char	*output;
	size_t	s_len;

	if (!s || start >= ft_strlen(s))
		return (ft_strdup(""));
	s_len = ft_strlen(s);
	if (len > (s_len - start))
		len = s_len - start;
	output = malloc((len + 1) * sizeof(char));
	if (!output)
		return (NULL);
	*(output + len) = 0;
	while (len--)
		*(output + len) = *(s + start + len);
	return (output);
}
