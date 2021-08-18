/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_string.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodufour <jodufour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/20 21:02:55 by jodufour          #+#    #+#             */
/*   Updated: 2021/08/18 02:36:35 by jodufour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_STRING_H
# define FT_STRING_H

# include <string.h>
# include <stdbool.h>
# include "type/t_int.h"

int		ft_strcasecmp(char const *s1, char const *s2);
int		ft_strcmp(char const *s1, char const *s2);
int		ft_strncasecmp(char const *s1, char const *s2, size_t n);
int		ft_strncmp(char const *s1, char const *s2, size_t n);
int		ft_strnequ(char const *s1, char const *s2, size_t n);

void	ft_striter(char *s, void (*f)(char *));
void	ft_striteri(char *s, void (*f)(t_uint, char *));

bool	ft_strcaseequ(char const *s1, char const *s2);
bool	ft_strequ(char const *s1, char const *s2);
bool	ft_strncaseequ(char const *s1, char const *s2, size_t n);

char	*ft_strcat(char *dst, const char *src);
char	*ft_strchr(const char *s, int c);
char	*ft_strcpy(char *dst, const char *src);
char	*ft_strdup(char const *s);
char	*ft_strjoin(char const *s1, char const *s2);
char	*ft_strlink(char const **strs, char const *link);
char	*ft_strmap(char const *s, char (*f)(char));
char	*ft_strmapi(char const *s, char (*f)(t_uint, char));
char	*ft_strncat(char *dst, const char *src, size_t n);
char	*ft_strncpy(char *dst, const char *src, size_t n);
char	*ft_strndup(char const *s, size_t n);
char	*ft_strnstr(char *s, const char *to_find, size_t n);
char	*ft_strrchr(const char *s, int c);
char	*ft_strrev(char *s);
char	*ft_strstr(char const *s, char const *tf);
char	*ft_strtrim(char const *s, char const *set);
char	*ft_substr(char const *s, size_t start, size_t len);

char	**ft_split(char const *s, char c);

size_t	ft_strlcat(char *dst, const char *src, size_t size);
size_t	ft_strlcpy(char *dst, const char *src, size_t size);
size_t	ft_strlen(char const *s);

#endif
