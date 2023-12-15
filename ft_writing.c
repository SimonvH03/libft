/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_writing.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: simon <simon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/24 21:46:08 by svan-hoo          #+#    #+#             */
/*   Updated: 2023/12/15 23:17:08 by simon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#define MARKUP "\033[35m\\"
#define ULEN 7
#define MARKDOWN "\033[0m"
#define DLEN 5
#define WRITELEN 15
#define BACKPRINT "\a\b\t\n\v\f\r\177"

static int	ft_putchar_octal(const int c)
{
	char	out[WRITELEN + 1];
	char	octal[4];

	ft_cpy(out, MARKUP, ULEN);
	octal[0] = ((c >> 6) & 7) + '0';
	octal[1] = ((c >> 3) & 7) + '0';
	octal[2] = ((c >> 0) & 7) + '0';
	ft_cpy(out + ULEN, octal, 3);
	ft_cpy(out + WRITELEN - DLEN, MARKDOWN, DLEN);
	write(STDOUT_FILENO, out, WRITELEN);
	return (1);
}

static int	ft_putchar_back(const int c)
{
	char		out[WRITELEN + 1];
	char		back[4];
	const char	*except = "abtnvfrD0";
	int			i;

	ft_bzero(back, 4);
	ft_cpy(out, MARKUP, ULEN);
	if (c == '\177')
		ft_cpy(out + ULEN, "DEL", 3);
	else if (c == '\0')
	{
		out[ULEN - 4] = '1';
		back[0] = '0';
	}
	else
	{
		i = 0;
		while (BACKPRINT[i])
			if (c == BACKPRINT[i++])
				back[0] = except[i - 1];
	}
	ft_cpy(out + ULEN, back, 3);
	ft_cpy(out + WRITELEN - DLEN, MARKDOWN, DLEN);
	write(STDOUT_FILENO, out, WRITELEN);
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
	write(STDOUT_FILENO, MARKDOWN, DLEN);
	while (i < n)
	{
		if (i > strlen)
			write(STDOUT_FILENO, "\033[2m", 4);
		if (ft_strchr(BACKPRINT, str[i]))
			len += ft_putchar_back(str[i]);
		else if (!ft_isprint(str[i]))
			len += ft_putchar_octal(str[i]);
		else
			len += write(1, &str[i], 1);
		i++;
	}
	write(STDOUT_FILENO, MARKDOWN, DLEN);
	return (len);
}
