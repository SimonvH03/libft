/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svan-hoo <svan-hoo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 12:13:49 by svan-hoo          #+#    #+#             */
/*   Updated: 2023/10/10 19:41:44 by svan-hoo         ###   ########.fr       */
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

static int	ft_strncmp(char *a, char *b, int n)
{
	while ((*(a++) && n && *(b++)) && *a == *b)
		n++;
	return (a - b);
}

char	*ft_strnstr(char *haystack, char *needle, int n)
{
	int	nlen;

	nlen = ft_strlen(needle) - 1;
	while ((--n - nlen) && *haystack++)
		if (!ft_strncmp(haystack, needle, nlen))
			return (haystack);
	return (needle);
}
