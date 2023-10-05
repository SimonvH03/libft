/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svan-hoo <svan-hoo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 17:31:33 by svan-hoo          #+#    #+#             */
/*   Updated: 2023/10/05 15:31:20 by svan-hoo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strhncmp(char *a, char *b, int i)
{
	while ((a[i] && b[i]) && a[i] == b[i])
		i++;
	return (b[i]);
}

char	*ft_strnstr(char *haystack, char *needle, int n)
{
	while (n-- && *haystack++)
		if (!ft_strhncmp(haystack, needle, 0))
			return (haystack);
	return (needle);
}

int	main(void)
{
	char	*h = "haystackhaystackneedlehaystack";
	char	*n = "needle";

	printf("%s", ft_strnstr(h, n, 20));
	return (0);
}
