/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svan-hoo <svan-hoo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 17:31:33 by svan-hoo          #+#    #+#             */
/*   Updated: 2023/10/05 20:01:31 by svan-hoo         ###   ########.fr       */
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

char	*ft_strchr(char *str, int c)
{
	while (*str && *str != c)
		str++;
	if (*str != c)
		return ((void *)0);
	return (str);
}

int	main(void)
{
	char	a[50] = "haystack_haystack_haystack_needle_haystack";
	char	b = 'x';

	printf("%s", ft_strchr(a, b));
	return (0);
}
