/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svan-hoo <svan-hoo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 15:39:37 by svan-hoo          #+#    #+#             */
/*   Updated: 2023/10/17 18:25:15 by svan-hoo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	size_t	i;
	size_t	j;
	char	*ptr;

	i = nmemb * size;
	if (nmemb && (i / nmemb) != size)
		return (NULL);
	ptr = (char *)malloc(i);
	if (!ptr)
		return (NULL);
	j = 0;
	while (j < i)
	{
		ptr[j] = 0;
		j++;
	}
	return (ptr);
}