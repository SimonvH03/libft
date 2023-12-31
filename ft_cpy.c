/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cpy.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: simon <simon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/15 22:01:12 by svan-hoo          #+#    #+#             */
/*   Updated: 2023/12/16 00:14:46 by simon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_cpy(char *out, const char *add, int n)
{
	int	i;

	i = 0;
	while (i < n)
	{
		out[i] = add[i];
		i++;
	}
	return (n);
}
