/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodufour <jodufour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/26 03:09:10 by jdufour           #+#    #+#             */
/*   Updated: 2021/12/09 20:40:45 by jodufour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	Apply the function `fct` on each character of the given string `str`
*/
void	ft_striter(char *str, void (*fct)(char *))
{
	while (*str)
		fct(str++);
}
