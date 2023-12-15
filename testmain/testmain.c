/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   testmain.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svan-hoo <svan-hoo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 20:50:29 by svan-hoo          #+#    #+#             */
/*   Updated: 2023/12/15 21:50:51 by svan-hoo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

int	main(void)
{
	const char	*str = "\a\b\t\n\v\f\r\177\001\002\003\004\005\006normal text \016\017\020\021\022\023\024\025\026\027\030\031\032\033\034\035\036\037";

	write(1, "\n\033[33m 0:	", 10);
	ft_writingtwo(str, 0);
	write(1, "\n\033[32m-1:	", 10);
	ft_writingtwo(str, -1);
	write(1, "\n\033[31m50:	", 10);
	ft_writingtwo(str, 50);
	write(1, "\n\n", 2);
	return (0);
}
	// "\a\b\t\n\v\f\r\177\001\002\003\004\005\006normal text \016\017\020\021\022\023\024\025\026\027\030\031\032\033\034\035\036\037";
