/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svan-hoo <svan-hoo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 16:26:22 by svan-hoo          #+#    #+#             */
/*   Updated: 2023/10/04 17:20:02 by svan-hoo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include "libft.h"

int	main(void)
{
	char	src[20] = "copy me pls";
	char	dst[50];
	char	srca[20] = "copy me pls";
	char	dsta[50];

	printf("%d", strlcpy(dst, src, 7));
	printf("%s", dst);
	printf("%d", ft_strlcpy(dsta, srca, 7));
	printf("%s", dsta);
	return (0);
}
