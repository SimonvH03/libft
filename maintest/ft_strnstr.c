/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svan-hoo <svan-hoo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 12:13:49 by svan-hoo          #+#    #+#             */
/*   Updated: 2023/10/12 18:59:07 by svan-hoo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

const char	*ft_strnstr(const char *haystack, const char *needle, int n)
{
	int	nlen;

	nlen = ft_strlen(needle) - 1;
	while ((--n - nlen) && *haystack++)
		if (!ft_strncmp(haystack, needle, nlen))
			return (haystack);
	return (needle);
}
