/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svan-hoo <svan-hoo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 16:53:50 by svan-hoo          #+#    #+#             */
/*   Updated: 2023/10/17 18:05:23 by svan-hoo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <stddef.h>
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

int			ft_atoi(const char *c);
void		ft_bzero(void *s, size_t n);
void		*ft_calloc(size_t nmemb, size_t size);
int			ft_isalnum(int c);
int			ft_isalpha(int c);
int			ft_isascii(int c);
int			ft_isdigit(int c);
int			ft_isprint(int c);
void		*ft_memchr(const void *s, int c, size_t n);
int			ft_memcmp(const void *s1, const void *s2, size_t n);
void		*ft_memcpy(void *dest, const void *src, size_t n);
void		*ft_memmove(void *dest, const void *src, size_t n);
void		*ft_memset(void *s, int c, size_t n);
char		*ft_strchr(char *str, int c);
char		*ft_strdup(const char *s);
size_t		ft_strlcat(char *dst, const char *src, size_t l);
size_t		ft_strlcpy(char *dst, const char *src, size_t l);
size_t		ft_strlen(const char *c);
int			ft_strncmp(const char *a, const char *b, size_t n);
const char	*ft_strnstr(const char *haystack, const char *needle, size_t n);
const char	*ft_strrchr(const char *str, int c);
int			ft_tolower(int c);
int			ft_toupper(int c);

#endif
