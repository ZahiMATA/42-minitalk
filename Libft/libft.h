/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmata <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 11:27:59 by zmata             #+#    #+#             */
/*   Updated: 2024/12/10 15:04:15 by zmata            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdio.h>
# include <stdlib.h>

int		ft_atoi(const char *str);

void	ft_bzero(void *s, size_t n);

void	*ft_calloc(size_t c, size_t s);

int		ft_isalnum(int l);

int		ft_isalpha(int l);

int		ft_isascii(int l);

int		ft_isdigit(int deci);

int		ft_isprint(int l);

char	*ft_itoa(int n);

void	*ft_memchr(const void *c, int h, size_t size);

int		ft_memcmp(const void *p1, const void *p2, size_t size);

void	*ft_memcpy(void *dest, const void *s, size_t size);

void	*ft_memmove(void *dest, const void *sr, size_t size);

void	*ft_memset(void *point, int valeur, size_t count);

void	ft_putchar_fd(char c, int fd);

void	ft_putendl_fd(char *s, int fd);

void	ft_putnbr_fd(int nb, int fd);

void	ft_putstr_fd(char *s, int fd);

char	**ft_split(char const *s, char c);

char	*ft_strchr(const char *str, int s);

char	*ft_strdup(const char *s);

char	*ft_strjoin(char const *s1, char const *s2);

size_t	ft_strlcat(char *dest, const char *src, size_t size);

size_t	ft_strlcpy(char *dest, const char *src, size_t size);

int		ft_strlen(const char *str);

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));

int		ft_strncmp(const char *s1, const char *s2, size_t n);

char	*ft_strnstr(const char *s1, const char *s2, size_t len);

char	*ft_strrchr(const char *str, int s);

char	*ft_strtrim(char const *s1, char const *set);

char	*ft_substr(char const *s, unsigned int start, size_t len);

int		ft_toupper(int t);

int		ft_tolower(int t);

void	ft_striteri(char *s, void (*f)(unsigned int, char *));

#endif
