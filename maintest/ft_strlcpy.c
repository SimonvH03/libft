/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svan-hoo <svan-hoo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 16:18:00 by svan-hoo          #+#    #+#             */
/*   Updated: 2023/10/10 19:40:07 by svan-hoo         ###   ########.fr       */
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

int	ft_strlcpy(char *dst, char *src, int l)
{
	int	i;

	i = -1;
	while (++i < l - 1)
		dst[i] = src[i];
	dst[i] = '\0';
	return (ft_strlen(src));
}
