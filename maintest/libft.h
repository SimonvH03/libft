/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svan-hoo <svan-hoo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 16:53:50 by svan-hoo          #+#    #+#             */
/*   Updated: 2023/10/12 18:59:52 by svan-hoo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <stddef.h>
# include <stdio.h>
# include <stdlib.h>

int			ft_atoi(const char *c);
void		ft_bzero(void *s, size_t n);
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
int			ft_strlcat(char *dst, const char *src, int l);
int			ft_strlcpy(char *dst, const char *src, int l);
size_t		ft_strlen(const char *c);
int			ft_strncmp(const char *a, const char *b, int n);
const char	*ft_strnstr(const char *haystack, const char *needle, int n);
const char	*ft_strrchr(const char *str, int c);
int			ft_tolower(int c);
int			ft_toupper(int c);

#endif
