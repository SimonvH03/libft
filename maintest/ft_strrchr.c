/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svan-hoo <svan-hoo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 18:51:27 by svan-hoo          #+#    #+#             */
/*   Updated: 2023/10/10 19:40:34 by svan-hoo         ###   ########.fr       */
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

char	*ft_strrchr(char *str, int c)
{
	int		i;

	i = ft_strlen(str) - 1;
	if (!c)
		return (&str[i + 1]);
	while (i && str[i] && str[i] != c)
		i--;
	if (str[i] == c)
		return (&str[i]);
	return ((void *)0);
}
