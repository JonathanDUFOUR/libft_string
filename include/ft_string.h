/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_string.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodufour <jodufour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/20 21:02:55 by jodufour          #+#    #+#             */
/*   Updated: 2021/12/21 01:41:48 by jodufour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_STRING_H
# define FT_STRING_H

# include <string.h>
# include <stdint.h>
# include <stdbool.h>
# include "type/t_int.h"

int		ft_memcmp(void const *addr0, void const *addr1, size_t size)
		__attribute__((nonnull (1, 2)));
int		ft_strcasecmp(char const *str0, char const *str1)
		__attribute__((nonnull));
int		ft_strcmp(char const *str0, char const *str1)
		__attribute__((nonnull));
int		ft_strncasecmp(char const *str0, char const *str1, size_t n)
		__attribute__((nonnull (1, 2)));
int		ft_strncmp(char const *str0, char const *str1, size_t n)
		__attribute__((nonnull (1, 2)));
int		ft_strnequ(char const *str0, char const *str1, size_t n)
		__attribute__((nonnull (1, 2)));

void	ft_bzero(void *addr, size_t size)
		__attribute__((nonnull (1)));
void	ft_memdel(void *addr)
		__attribute__((nonnull));
void	ft_memswap(void *a, void *b)
		__attribute__((nonnull));
void	ft_striter(char *str, void (*fct)(char *))
		__attribute__((nonnull));
void	ft_striteri(char *str, void (*fct)(t_uint, char *))
		__attribute__((nonnull));

void	*ft_calloc(size_t n, size_t size);
void	*ft_memccpy(void *dst, void const *src, uint8_t const c, size_t size)
		__attribute__((nonnull (1, 2)));
void	*ft_memchr(const void *addr, uint8_t const c, size_t size)
		__attribute__((nonnull (1)));
void	*ft_memcpy(void *dst, void const *src, size_t size)
		__attribute__((nonnull (1, 2)));
void	*ft_memmove(void *dst, void const *src, size_t size)
		__attribute__((nonnull (1, 2)));
void	*ft_memset(void *addr, uint8_t const c, size_t size)
		__attribute__((nonnull (1)));

bool	ft_strcaseequ(char const *str0, char const *str1)
		__attribute__((nonnull));
bool	ft_strequ(char const *str0, char const *str1)
		__attribute__((nonnull));
bool	ft_strncaseequ(char const *str0, char const *str1, size_t n)
		__attribute__((nonnull (1, 2)));

char	*ft_strcat(char *dst, const char *src)
		__attribute__((nonnull));
char	*ft_strcdup(char const *str, char const c)
		__attribute__((nonnull (1)));
char	*ft_strchr(char const *str, char const c)
		__attribute__((nonnull (1)));
char	*ft_strcjoin(char const *str0, char const *str1, char const c)
		__attribute__((nonnull (1, 2)));
char	*ft_strcpy(char *const dst, const char *src)
		__attribute__((nonnull));
char	*ft_strdup(char const *str)
		__attribute__((nonnull));
char	*ft_strjoin(char const *str0, char const *str1)
		__attribute__((nonnull));
char	*ft_strlink(char const **strs, char const *link)
		__attribute__((nonnull));
char	*ft_strmap(char const *str, char (*fct)(char))
		__attribute__((nonnull));
char	*ft_strmapi(char const *str, char (*fct)(t_uint, char))
		__attribute__((nonnull));
char	*ft_strncat(char *const dst, char const *const src, size_t const n)
		__attribute__((nonnull (1, 2)));
char	*ft_strncpy(char *const dst, char const *const src, size_t const n)
		__attribute__((nonnull (1, 2)));
char	*ft_strndup(char const *str, size_t n)
		__attribute__((nonnull (1)));
char	*ft_strnstr(char const *str, const char *tf, size_t n)
		__attribute__((nonnull (1, 2)));
char	*ft_strrchr(const char *str, char const c)
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
