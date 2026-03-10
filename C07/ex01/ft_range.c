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

int	array_length(int min, int max)
{
	int	length;

	if (min < 0)
		length = (max -(min) - 1);
	else
		length = max - min;
	return (length);
}

int	*ft_range(int min, int max)
{
	int	aux;
	int	i;
	int	*lista_int;
	int	length;

	i = 0;
	aux = min;
	length = (array_length(min, max));
	if (min >= max)
		return (NULL);
	lista_int = (int *) malloc((length) * 4);
	while (i <= length)
	{
		lista_int[i] = aux;
		aux++;
		i++;
	}
	return (lista_int);
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
