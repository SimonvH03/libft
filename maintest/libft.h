/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svan-hoo <svan-hoo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 16:53:50 by svan-hoo          #+#    #+#             */
/*   Updated: 2023/10/10 19:34:02 by svan-hoo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <stddef.h>
# include <stdio.h>
# include <stdlib.h>

int		ft_atoi(char *c);
int		ft_isalnum(int c);
int		ft_isalpha(int c);
int		ft_isascii(int c);
int		ft_isdigit(int c);
int		ft_isprint(int c);
void	*ft_memchr(const void *s, int c, size_t n);
int		ft_memcmp(const void *s1, const void *s2, size_t n);
char	*ft_strchr(char *str, int c);
int		ft_strlcat(char *dst, char *src, int l);
int		ft_strlcpy(char *dst, char *src, int l);
int		ft_strlen(char *c);
int		ft_strncmp(char *a, char *b, int n);
char	*ft_strnstr(char *haystack, char *needle, int n);
char	*ft_strrchr(char *str, int c);
int		ft_tolower(int c);
int		ft_toupper(int c);

#endif
