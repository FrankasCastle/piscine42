/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucsanto <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/26 11:11:04 by lucsanto          #+#    #+#             */
/*   Updated: 2026/02/26 14:03:59 by lucsanto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb(void)
{
	char	list_n[3];

	list_n[0] = '0';
	while (list_n[0] <= '7')
	{
		list_n[1] = list_n[0] + 1;
		while (list_n[1] <= '8')
		{
			list_n[2] = list_n[1] + '1';
			while (list_n[2] <= '9')
			{
				write(1, &list_n[0], 1);
				write(1, &list_n[1], 1);
				write(1, &list_n[2], 1);
				if (!(list_n[0] == '7' && list_n[1] == '8' && list_n[2] == '9'))
					write(1, ", ", 2);
				list_n[2]++;
			}
			list_n[1]++;
		}
		list_n[0]++;
	}
}
