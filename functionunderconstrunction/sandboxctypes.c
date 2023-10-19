/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sandboxctypes.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svan-hoo <svan-hoo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 18:47:09 by svan-hoo          #+#    #+#             */
/*   Updated: 2023/10/19 18:55:53 by svan-hoo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>
#include <stdio.h>

int	main(void)
{
	printf("alphaT:	%d\n", isalpha(97));
	printf("digiT: 	%d\n", isdigit(49));
	printf("alnumT: %d\n", isalnum(49));
	printf("prinT: 	%d\n", isprint(32));
	printf("asciiT: %d\n", isascii(49));
	return (0);
}
