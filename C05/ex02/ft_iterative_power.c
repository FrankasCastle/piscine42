/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucsanto <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/08 15:09:03 by lucsanto          #+#    #+#             */
/*   Updated: 2026/03/08 15:09:04 by lucsanto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	original_nb;

	original_nb = nb;
	if (power == 1)
		return (nb);
	else if (power == 0)
		return (1);
	else if (power < 0)
		return (0);
	while (power > 1)
	{
		nb = nb * original_nb;
		power--;
	}
	return (nb);
}
// #include <stdio.h>

// int	main(void)
// {
// 	int	numero;
// 	int potencia;

// 	numero = 5;
// 	potencia = 5;
// 	printf("N %d, pwr %d, result: %d", numero,
// potencia, ft_iterative_power(numero, potencia));
// }
