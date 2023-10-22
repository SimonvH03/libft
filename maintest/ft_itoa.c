/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svan-hoo <svan-hoo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 17:38:33 by svan-hoo          #+#    #+#             */
/*   Updated: 2023/10/22 22:13:36 by svan-hoo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_intlen(int n)
{
	size_t	len;

	len = 1;
	if (n < 0)
		len++;
	while (n > 9 || n < -9)
	{
		n = n / 10;
		len++;
	}
	return (len);
}

void	ft_putpnbr(char *ptr, int n)
{
	if (n == INT_MIN)
		ft_strlcpy(ptr, "-2147483648", 13);
	if (n < 0)
	{
		*ptr = '-';
		n = -n;
		ptr++;
	}
	if (n > 9)
	{
		ft_putpnbr(ptr, n / 10);
		ptr++;
		n = n % 10;
	}
	if (n <= 9)
	{
		*ptr = n + 48;
		ptr++;
	}
	*ptr = '\0';
}

char	*ft_itoa(int n)
{
	char	*ptr;

	ptr = (char *)malloc((ft_intlen(n) + 1) * sizeof(char));
	if (!ptr)
		return (NULL);
	ft_putpnbr(ptr, n);
	return (ptr);
}
