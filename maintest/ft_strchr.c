/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svan-hoo <svan-hoo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 18:43:44 by svan-hoo          #+#    #+#             */
/*   Updated: 2023/10/19 19:01:48 by svan-hoo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

const char	*ft_strchr(const char *str, int c)
{
	int	i;

	i = 0;
	if (c > 127)
		return (str);
	while (str[i] || str[i] == c)
	{
		if (str[i] == c)
			return (str + i);
		i++;
	}
	return (NULL);
}
