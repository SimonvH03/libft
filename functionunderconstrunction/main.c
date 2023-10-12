/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svan-hoo <svan-hoo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 18:05:46 by svan-hoo          #+#    #+#             */
/*   Updated: 2023/10/12 20:19:22 by svan-hoo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// singlecharacter
int	main(void)
{
	printf("-\nisalnum:	%d\n", ft_isalnum('b'));
	printf("isalpa:		%d\n", ft_isalpha('b'));
	printf("isascii:	%d\n", ft_isascii('-'));
	printf("isdigit:	%d\n", ft_isdigit('1'));
	printf("isprint:	%d\n", ft_isprint(' '));
	printf("tolower:	%c\n", ft_tolower('B'));
	printf("toupper:	%c\n-\n", ft_toupper('b'));
	printf("atoi:		%d	[%d]\n-\n", ft_atoi("  -0042x"), atoi("  -0042x"));
	return (0);
}

// str-mem inspection
// int	main(void)
// {
// 	ft_strchr();
// 	ft_strlen();
// 	ft_strncmp();
// 	ft_strnstr();
// 	ft_strrchr();
// 	ft_memchr();
// 	ft_memcmp();
// }

// str-mem modification
// int	main(void)
// {
// 	char	dest[6] = "conca";
// 	char	src[14] = "tenate me pls";

// 	printf("strlcat:	%d\n", ft_strlcat(dest, src, 15));
// 	return (0);
// }