/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svan-hoo <svan-hoo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 17:44:15 by svan-hoo          #+#    #+#             */
/*   Updated: 2023/10/12 19:59:18 by svan-hoo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strlcat(char *dst, const char *src, int l)
{
	int	slen;
	int	dlen;
	int	i;

	dlen = ft_strlen(dst);
	slen = ft_strlen(src);
	i = 0;
	while (dlen + i < (l - 1) && src[i])
	{
		dst[dlen + i] = src[i];
		i++;
	}
	dst[dlen + i] = '\0';
	if (dlen < l)
		return (dlen + slen);
	else
		return (l + slen);
}
