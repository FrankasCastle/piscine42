/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucsanto <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/26 11:39:43 by lucsanto          #+#    #+#             */
/*   Updated: 2026/02/26 15:18:04 by lucsanto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_int_to_char(int n)
{
	char	dezena;
	char	unidade;

	dezena = (n / 10) + '0';
	unidade = (n % 10) + '0';
	write(1, &dezena, 1);
	write(1, &unidade, 1);
}

void	ft_print_comb2(void)
{
	int	list_num[2];

	list_num[0] = 0;
	while (list_num[0] <= 98)
	{
		list_num[1] = list_num[0] + 1;
		while (list_num[1] <= 99)
		{
			ft_int_to_char(list_num[0]);
			write (1, " ", 1);
			ft_int_to_char(list_num[1]);
			if (!(list_num[0] == 98 && list_num[1] == 99))
				write (1, ", ", 2);
			list_num[1]++;
		}
		list_num[0]++;
	}
}

void	main(void)
{
	ft_print_comb2();
}
