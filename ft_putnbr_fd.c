/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svan-hoo <svan-hoo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 15:02:32 by simon             #+#    #+#             */
/*   Updated: 2023/11/01 22:02:24 by svan-hoo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_intlen(int n)
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

static void	ft_putnbr_ptr(char *ptr, int n)
{
	size_t	len;

	len = ft_intlen(n);
	if (n == INT_MIN)
	{
		ft_strlcpy(ptr, "-2147483648", 13);
		return ;
	}
	if (n < 0)
	{
		*ptr = '-';
		n = -n;
	}
	else
		*ptr = '0';
	ptr[len] = '\0';
	while (n != 0)
	{
		ptr[--len] = (n % 10) + 48;
		n /= 10;
	}
}

void	ft_putnbr_fd(int n, int fd)
{
	char	*str;

	ft_putnbr_ptr(str, n);
	ft_putstr_fd(str, fd);
}
