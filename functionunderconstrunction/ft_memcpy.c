/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svan-hoo <svan-hoo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 15:20:13 by simon             #+#    #+#             */
/*   Updated: 2023/10/12 15:14:05 by svan-hoo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

int	ft_memcpy(void *mb0, void *mb1)
{
	size_t			i;
	unsigned char	*str0;
	unsigned char	*str1;

	i = 0;
	while (str0[i] && str1[i])
	{
		str1[i] = str0[i];
		i++;
	}
	return (0);
}
