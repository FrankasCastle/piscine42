/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucsanto <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/10 15:55:01 by lucsanto          #+#    #+#             */
/*   Updated: 2026/03/10 15:55:03 by lucsanto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*int_array;
	int	i;
	int	length;

	if (min >= max)
		return (NULL);
	length = max - min;
	int_array = (int *)malloc(length * 4);
	if (int_array == NULL)
		return (NULL);
	i = 0;
	while (i < length)
	{
		int_array[i] = min;
		min++;
		i++;
	}
	return (int_array);
}
// #include <stdio.h>
// int	main(void)
// {
// 	int	primeiro_numero = -30;
// 	int ultimo_numero = 15;
// 	int i = 0;
// 	int length = (ultimo_numero -(primeiro_numero) - 1);
// 	int *minha_lista = ft_range(primeiro_numero, ultimo_numero);

// 	while (i <= length)
// 	{
// 		printf("%d", minha_lista[i]);
// 		i++;
// 		if (i <= length)
// 			printf(", ");
// 	}
// 	free (minha_lista);
// 	return (0);
// }
