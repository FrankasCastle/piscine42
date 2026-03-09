/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucsanto <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/08 16:31:57 by lucsanto          #+#    #+#             */
/*   Updated: 2026/03/08 16:31:59 by lucsanto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	if (power == 1)
		return (nb);
	else if (power == 0)
		return (1);
	else if (power < 0)
		return (0);
	return (nb * ft_recursive_power(nb, power - 1));
}
// #include <stdio.h>

// int	main(void)
// {
//  	int	numero;
//  	int potencia;

// 	numero = 5;
//  	potencia = 5;
//  	printf("N %d, pwr %d, result: %d", numero,
// potencia, ft_recursive_power(numero, potencia));
// }
