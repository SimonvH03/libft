/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svan-hoo <svan-hoo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 17:31:33 by svan-hoo          #+#    #+#             */
/*   Updated: 2023/10/04 18:18:22 by svan-hoo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strlen(char *c)
{
	int	i;

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
	while (++i < l)
		dst[i] = src[i - dlen];
	dst[i] = '\0';
	return (dlen + ft_strlen(src));
}

int	main(void)
{
	char	src[30] = "tenate-successful-failed";
	char	dst[50] = "conca\0-----------------";

	printf("%d\n%s", ft_strlcat(dst, src, 15), dst);
	return (0);
}
