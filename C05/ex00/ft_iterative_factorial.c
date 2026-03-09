/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucsanto <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/08 14:33:31 by lucsanto          #+#    #+#             */
/*   Updated: 2026/03/08 14:33:33 by lucsanto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	aux;

	aux = nb - 1;
	if (nb < 0)
		return (0);
	if (nb == 0)
		return (1);
	while (aux > 0)
	{
		nb = nb * aux;
		aux --;
	}
	return (nb);
}
// #include <stdio.h>
// int main(void)
// {
//     int numb;

//     numb = 1;
//     printf("O fatorial de %d é: %d", numb, ft_iterative_factorial(numb));
//     return (0);
// }
