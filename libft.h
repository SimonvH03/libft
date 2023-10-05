/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svan-hoo <svan-hoo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 16:53:50 by svan-hoo          #+#    #+#             */
/*   Updated: 2023/10/05 15:43:16 by svan-hoo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

int	ft_atoi(char *c);
int	ft_isalnum(int c);
int	ft_isalpha(int c);
int	ft_isascii(int c);
int	ft_isdigit(int c);
int	ft_isprint(int c);
int	ft_strlcat(char *dst, char *src, int l);
int	ft_strlcpy(char *dst, char *src, int l);
int	ft_strlen(char *c);
int	ft_tolower(int c);
int	ft_toupper(int c);

#endif
