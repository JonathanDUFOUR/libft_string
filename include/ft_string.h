/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_string.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodufour <jodufour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/20 21:02:55 by jodufour          #+#    #+#             */
/*   Updated: 2021/12/10 15:18:23 by jodufour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_STRING_H
# define FT_STRING_H

# include <string.h>
# include <stdbool.h>
# include "type/t_int.h"

int		ft_strcasecmp(char const *s0, char const *s1)
		__attribute__((nonnull));
int		ft_strcmp(char const *s0, char const *s1)
		__attribute__((nonnull));
int		ft_strncasecmp(char const *s0, char const *s1, size_t n)
		__attribute__((nonnull (1, 2)));
int		ft_strncmp(char const *s0, char const *s1, size_t n)
		__attribute__((nonnull (1, 2)));
int		ft_strnequ(char const *s0, char const *s1, size_t n)
		__attribute__((nonnull (1, 2)));

void	ft_striter(char *str, void (*fct)(char *))
		__attribute__((nonnull));
void	ft_striteri(char *str, void (*fct)(t_uint, char *))
		__attribute__((nonnull));

bool	ft_strcaseequ(char const *s0, char const *s1)
		__attribute__((nonnull));
bool	ft_strequ(char const *s0, char const *s1)
		__attribute__((nonnull));
bool	ft_strncaseequ(char const *s0, char const *s1, size_t n)
		__attribute__((nonnull (1, 2)));

char	*ft_strcat(char *dst, const char *src)
		__attribute__((nonnull));
char	*ft_strchr(const char *str, char const c)
		__attribute__((nonnull (1)));
char	*ft_strcpy(char *dst, const char *src)
		__attribute__((nonnull));
char	*ft_strdup(char const *str)
		__attribute__((nonnull));
char	*ft_strjoin(char const *s0, char const *s1)
		__attribute__((nonnull));
char	*ft_strlink(char const **strs, char const *link)
		__attribute__((nonnull));
char	*ft_strmap(char const *str, char (*fct)(char))
		__attribute__((nonnull));
char	*ft_strmapi(char const *str, char (*fct)(t_uint, char))
		__attribute__((nonnull));
char	*ft_strncat(char *dst, const char *src, size_t n)
		__attribute__((nonnull (1, 2)));
char	*ft_strncpy(char *dst, const char *src, size_t n)
		__attribute__((nonnull (1, 2)));
char	*ft_strndup(char const *str, size_t n)
		__attribute__((nonnull (1)));
char	*ft_strnstr(char const *str, const char *tf, size_t n)
		__attribute__((nonnull (1, 2)));
char	*ft_strrchr(const char *str, int const c)
		__attribute__((nonnull (1)));
char	*ft_strrev(char *str)
		__attribute__((nonnull));
char	*ft_strstr(char const *str, char const *tf)
		__attribute__((nonnull));
char	*ft_strsubchr(char const *str, char const c)
		__attribute__((nonnull (1)));
char	*ft_strsubidx(char const *str, size_t const idx)
		__attribute__((nonnull (1)));
char	*ft_strtrim(char const *str, char const *set)
		__attribute__((nonnull));
char	*ft_substr(char const *str, size_t start, size_t len)
		__attribute__((nonnull (1)));

char	**ft_split(char const *str, char c)
		__attribute__((nonnull (1)));

size_t	ft_strlcat(char *dst, const char *src, size_t size)
		__attribute__((nonnull (1, 2)));
size_t	ft_strlcpy(char *dst, const char *src, size_t size)
		__attribute__((nonnull (1, 2)));
size_t	ft_strlen(char const *str)
		__attribute__((nonnull));

#endif
