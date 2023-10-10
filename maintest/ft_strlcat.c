/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svan-hoo <svan-hoo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 17:44:15 by svan-hoo          #+#    #+#             */
/*   Updated: 2023/10/10 19:39:01 by svan-hoo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

static size_t	ft_strlen(char *c)
{
	size_t	i;

	i = 0;
	while (c[i])
		i++;
	return (i);
}

int	ft_strlcat(char *dst, char *src, int l)
{
	int	dlen;
	int	i;

	dlen = ft_strlen(dst);
	i = dlen - 1;
	while (++i < (l - 1))
		dst[i] = src[i - dlen];
	dst[i] = '\0';
	return (dlen + ft_strlen(src));
}
