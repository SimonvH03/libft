/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svan-hoo <svan-hoo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 18:05:46 by svan-hoo          #+#    #+#             */
/*   Updated: 2023/10/10 19:34:06 by svan-hoo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	main(void)
{
	char	alpha;
	char	digit;
	char	ascii;

	alpha = 'Z';
	digit = '9';
	ascii = '-';
	printf("atoi:		%d	[%d]\n", ft_atoi("  -0042x"), atoi("  -0042x"));
	printf("isalnum:	%d\n", ft_isalnum(ascii));
	printf("isalpa:		%d\n", ft_isalpha(digit));
	printf("isascii:	%d\n", ft_isascii(ascii));
	printf("isdigit:	%d\n", ft_isdigit(digit));
	printf("isprint:	%d\n", ft_isprint(ascii));
	return (0);
}
