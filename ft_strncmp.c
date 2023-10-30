/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: simon <simon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 12:19:24 by svan-hoo          #+#    #+#             */
/*   Updated: 2023/10/31 00:10:49 by simon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *a, const char *b, size_t n)
{
	size_t				i;
	const unsigned char	*uca;
	const unsigned char	*ucb;

	i = 0;
	uca = (const unsigned char *)a;
	ucb = (const unsigned char *)b;
	if (n == 0)
		return (0);
	while ((i + 1) < n && uca[i] == ucb[i] && uca[i])
		i++;
	return (uca[i] - ucb[i]);
}
