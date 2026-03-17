/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_point.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucsanto <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/16 15:19:00 by lucsanto          #+#    #+#             */
/*   Updated: 2026/03/16 15:19:02 by lucsanto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_POINT_H
# define FT_POINT_H

typedef struct s_point
{
	int	x;
	int	y;
}	t_point;

#endif

// #include "ft_point.h"
// #include <stdio.h>
// void set_point(t_point *point)
// {
//     point->x = 42;
//     point->y = 21;
// }
// int main(void)
// {
//     t_point point;
//     set_point(&point);
// 	// point.x = 42;
// 	// point.y = 21;
//     printf("x = %d\n", point.x);
//     printf("y = %d\n", point.y);
//     return (0);
// }