/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svan-hoo <svan-hoo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 15:25:45 by simon             #+#    #+#             */
/*   Updated: 2023/10/30 21:50:51 by svan-hoo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*ucdest;
	unsigned char	*ucsrc;

	if (!dest && !src)
		return (NULL);
	i = 0;
	ucdest = (unsigned char *)dest;
	ucsrc = (unsigned char *)src;
	if (dest < src)
	{
		while (i < n)
		{
			ucdest[i] = ucsrc[i];
			i++;
		}
	}
	else
		while (n--)
			ucdest[n] = ucsrc[n];
	return (dest);
}
