/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucsanto <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/11 09:19:03 by lucsanto          #+#    #+#             */
/*   Updated: 2026/03/11 09:19:05 by lucsanto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	length;
	int	i;
	int	*int_array;

	i = 0;
	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	length = max - min;
	*range = (int *) malloc(length * 4);
	if (*range == NULL)
		return (-1);
	int_array = *range;
	while (i < length)
	{
		int_array[i] = min;
		min++;
		i++;
	}
	return (length);
}
// #include <stdio.h>
// int	main(void)
// {
// 	int *lista_inteiros;
// 	int size;
// 	int i = 0;
// //valgrind --leak-check=full

// 	size = ft_ultimate_range(&lista_inteiros, -15, 15);
// 	printf("size = %d\n", size);
// 	while (i < size)
// 	{
// 		printf("%d ", lista_inteiros[i]);
// 		i++;
// 	}
// 	free(lista_inteiros);
// }
