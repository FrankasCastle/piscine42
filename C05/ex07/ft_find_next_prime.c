/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucsanto <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/09 08:55:13 by lucsanto          #+#    #+#             */
/*   Updated: 2026/03/09 08:55:15 by lucsanto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	i;

	if (nb <= 0)
		return (0);
	i = 1;
	while (i <= nb / i)
	{
		if (i * i == nb)
			return (i);
		i++;
	}
	return (i);
}

int	ft_is_prime(int nb)
{
	int	raiz;
	int	i;

	raiz = ft_sqrt(nb);
	i = 3;
	if ((nb == 0) || (nb == 1))
		return (0);
	if ((nb == 2) || (nb == 3))
		return (1);
	if (nb % 2 == 0)
		return (0);
	while (i <= raiz)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	if ((nb < 0) || (nb == 2))
		return (2);
	if (ft_is_prime(nb) == 1)
		return (1);
	while (ft_is_prime(nb) != 1)
	{
		nb++;
	}
	return (nb);
}
// #include <stdio.h>

// int main(void)
// {
//     int numero_recebido = 2147483630;
//     printf("Próximo primo: %d", ft_find_next_prime(numero_recebido));
// }