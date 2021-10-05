/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_string.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodufour <jodufour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/20 21:02:55 by jodufour          #+#    #+#             */
/*   Updated: 2021/10/05 01:00:45 by jodufour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_STRING_H
# define FT_STRING_H

# include <string.h>
# include <stdbool.h>
# include "type/t_int.h"

int		ft_strcasecmp(char const *s0, char const *s1);
int		ft_strcmp(char const *s0, char const *s1);
int		ft_strncasecmp(char const *s0, char const *s1, size_t n);
int		ft_strncmp(char const *s0, char const *s1, size_t n);
int		ft_strnequ(char const *s0, char const *s1, size_t n);

void	ft_striter(char *str, void (*f)(char *));
void	ft_striteri(char *str, void (*f)(t_uint, char *));

bool	ft_strcaseequ(char const *s0, char const *s1);
bool	ft_strequ(char const *s0, char const *s1);
bool	ft_strncaseequ(char const *s0, char const *s1, size_t n);

char	*ft_strcat(char *dst, const char *src);
char	*ft_strchr(const char *str, int const c);
char	*ft_strcpy(char *dst, const char *src);
char	*ft_strdup(char const *str);
char	*ft_strjoin(char const *s0, char const *s1);
char	*ft_strlink(char const **strs, char const *link);
char	*ft_strmap(char const *str, char (*f)(char));
char	*ft_strmapi(char const *str, char (*f)(t_uint, char));
char	*ft_strncat(char *dst, const char *src, size_t n);
char	*ft_strncpy(char *dst, const char *src, size_t n);
char	*ft_strndup(char const *str, size_t n);
char	*ft_strnstr(char const *str, const char *tf, size_t n);
char	*ft_strrchr(const char *str, int const c);
char	*ft_strrev(char *str);
char	*ft_strstr(char const *str, char const *tf);
char	*ft_strtrim(char const *str, char const *set);
char	*ft_substr(char const *str, size_t start, size_t len);

char	**ft_split(char const *str, char c);

size_t	ft_strlcat(char *dst, const char *src, size_t size);
size_t	ft_strlcpy(char *dst, const char *src, size_t size);
size_t	ft_strlen(char const *str);

#endif
