/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodufour <jodufour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/21 22:21:47 by jdufour           #+#    #+#             */
/*   Updated: 2021/12/27 05:24:03 by jodufour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdint.h>

static void	__update(void const **const addr0, void const **const addr1,
	size_t *const n, size_t const jump)
{
	*addr0 += jump;
	*addr1 += jump;
	*n -= jump;
}

/*
	Compare the `n` first bytes of the two given areas `addr0` and `addr1`
	Return the difference of the first two divergent bytes found
	Return zero if no divergence were found
*/
int	ft_memcmp(void const *addr0, void const *addr1, size_t n)
{
	if (!n || addr0 == addr1)
		return (0);
	while (n > sizeof(uint64_t) && *(uint64_t *)addr0 == *(uint64_t *)addr1)
		__update(&addr0, &addr1, &n, sizeof(uint64_t));
	if (n > sizeof(uint32_t) && *(uint32_t *)addr0 == *(uint32_t *)addr1)
		__update(&addr0, &addr1, &n, sizeof(uint32_t));
	if (n > sizeof(uint16_t) && *(uint16_t *)addr0 == *(uint16_t *)addr1)
		__update(&addr0, &addr1, &n, sizeof(uint16_t));
	if (n > sizeof(uint8_t) && *(uint8_t *)addr0 == *(uint8_t *)addr1)
		__update(&addr0, &addr1, &n, sizeof(uint8_t));
	return (*(uint8_t *)addr0 - *(uint8_t *)addr1);
}
