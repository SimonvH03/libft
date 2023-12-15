/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_writing.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: simon <simon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/24 21:46:08 by svan-hoo          #+#    #+#             */
/*   Updated: 2023/12/15 16:25:37 by simon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#define MARKUP "\033[40;36m\\"
#define MARKDOWN "\033[0m"
#define BACKPRINT "\a\b\t\n\v\f\r\177"

static int	ft_putchar_octal(const int c)
{
	char	esc[4];

	write(1, MARKUP, 9);
	esc[0] = ((c >> 6) & 7) + '0';
	esc[1] = ((c >> 3) & 7) + '0';
	esc[2] = ((c >> 0) & 7) + '0';
	write(1, esc, 4);
	write(1, MARKDOWN, 4);
	return (1);
}

static int	ft_putchar_back(const int c)
{
	const char	*except = "abtnvfrD0";
	int			i;

	write(1, MARKUP, 9);
	if (c == '\177')
		write(1, "DEL", 3);
	else
	{
		i = 0;
		while (i < 9)
			if (c == BACKPRINT[i++])
				write(1, &except[i - 1], 1);
	}
	write(1, MARKDOWN, 4);
	return (1);
}

int	ft_writing(const char *str, int n)
{
	const int	strlen = ft_strlen(str);
	int			len;
	int			i;

	len = 0;
	if (n == 0)
		n = strlen;
	if (n == -1)
		n = strlen + 1;
	i = 0;
	write(1, "\033[0m", 4);
	while (i < n)
	{
		if (i >= strlen)
			write(1, "\033[2m", 4);
		if (ft_strchr(BACKPRINT, str[i]))
			len += ft_putchar_back(str[i]);
		else if (!ft_isprint(str[i]))
			len += ft_putchar_octal(str[i]);
		else
			len += write(1, &str[i], 1);
		i++;
	}
	write(1, "\033[0m", 4);
	return (len);
}
