/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svan-hoo <svan-hoo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 12:13:49 by svan-hoo          #+#    #+#             */
/*   Updated: 2023/10/23 19:56:31 by svan-hoo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t n)
{
	size_t	i;

	while (*haystack && n)
	{
		i = 0;
		while (haystack[i] == needle[i] && needle[i] && n - i)
			i++;
		if (needle[i] == '\0')
			return ((char *)haystack);
		haystack++;
		n--;
	}
	if (*needle == '\0')
		return ((char *)haystack);
	return (NULL);
}