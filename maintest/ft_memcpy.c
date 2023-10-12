/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svan-hoo <svan-hoo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 15:20:13 by simon             #+#    #+#             */
/*   Updated: 2023/10/12 16:07:54 by svan-hoo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, void *src, size_t n)
{
	size_t			i;
	unsigned char	*ucdest;
	unsigned char	*ucsrc;

	i = 0;
	ucdest = (unsigned char *)dest;
	ucsrc = (unsigned char *)src;
	while (n--)
	{
		ucsrc[i] = ucdest[i];
		i++;
	}
	return (dest);
}
