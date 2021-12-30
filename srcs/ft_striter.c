/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodufour <jodufour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/26 03:09:10 by jdufour           #+#    #+#             */
/*   Updated: 2021/12/27 14:45:10 by jodufour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	Apply the function `fct` on each character of the given string `str`
*/
void	ft_striter(char *str, void (*fct)(char *const c))
{
	register char	*ptr;

	ptr = str;
	while (*ptr)
	{
		fct(ptr);
		++ptr;
	}
}
