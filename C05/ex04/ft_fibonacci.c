/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucsanto <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/09 08:43:00 by lucsanto          #+#    #+#             */
/*   Updated: 2026/03/09 08:43:04 by lucsanto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_fibonacci(int index)
{
	int	fibo;
	int	nacci;
	int	i;

	fibo = 0;
	nacci = 1;
	i = 1;
	if (index < 0)
		return (-1);
	if (index == 0)
		return (0);
	if (index == 1)
		return (1);
	while (i != index)
	{
		fibo = fibo + nacci;
		i++;
		if (i == index)
			return (fibo);
		nacci = nacci + fibo;
		i++;
	}
	return (nacci);
}
// #include <stdio.h>
// int    main(void)
// {
//     int index;

//     index = -15;
//     printf("Posição %d, fibonnacci: %d", index, ft_fibonacci(index));
// }
