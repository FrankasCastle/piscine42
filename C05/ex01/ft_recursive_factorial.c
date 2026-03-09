/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucsanto <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/08 14:42:58 by lucsanto          #+#    #+#             */
/*   Updated: 2026/03/08 14:42:59 by lucsanto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	if (nb < 0)
		return (0);
	if (nb == 0)
		return (0);
	else if (nb == 1)
		return (1);
	return (nb * ft_recursive_factorial(nb - 1));
}
// #include <stdio.h>

// int main(void)
// {
// 	int n = 5;
// 	printf("O fatorial de %d é: %d", n, ft_recursive_factorial(n));
// }
