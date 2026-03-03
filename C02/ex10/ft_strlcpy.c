/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucsanto <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/02 15:25:24 by lucsanto          #+#    #+#             */
/*   Updated: 2026/03/02 15:25:26 by lucsanto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	counter;
	unsigned int	src_length;

	counter = 0;
	src_length = 0;
	while (src[src_length] != '\0')
	{
		src_length++;
	}
	if (size == 0)
	{
		return (0);
	}
	while (src[counter] != '\0' && counter < (size - 1))
	{
		dest [counter] = src [counter];
		counter++;
	}
	dest[counter] = '\0';
	return (size);
}
// #include <stdio.h>

// int	main(void)
// {
// 	char	origem[] = "Olá mundo!";
// 	char	destino[20];
// 	unsigned int size_n;

// 	size_n = ft_strlcpy(destino, origem, 20);
// 	printf("Exemplo com buffer de sobra: %s / size = %u\n", destino, size_n);
// 	size_n = ft_strlcpy(destino, origem, 5);
// 	printf("Exemplo com buffer menor: %s / size = %u\n", destino, size_n);
// 	size_n = ft_strlcpy(destino, origem, 0);
// 	printf("Exemplo com size 0: %s / size = %u\n", destino, size_n);
// 	return (0);
// }	