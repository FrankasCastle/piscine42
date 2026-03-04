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
		return (src_length);
	}
	while (src[counter] != '\0' && counter < (size - 1))
	{
		dest [counter] = src [counter];
		counter++;
	}
	dest[counter] = '\0';
	return (src_length);
}
// #include <stdio.h>
// #include <bsd/string.h>

// int	main(void)
// {
// 	char	origem[] = "Hello World!";
// 	char	destino[20];
// 	unsigned int size_n;
// 	unsigned long size_strlcpy_n;
// 	//flag: -lbsd

// 	size_n = ft_strlcpy(destino, origem, 13);
// 	printf("Size maior que a string: %s / length = %u\n", destino, size_n);
// 	size_n = ft_strlcpy(destino, origem, 5);
// 	printf("Size menor que a string: %s / length = %u\n", destino, size_n);
// 	// size_n = ft_strlcpy(destino, origem, 0);
// 	// printf("Size = 0: %s / length = %u\n", destino, size_n);
// 	size_strlcpy_n = strlcpy(destino, origem, 13);
// 	printf("(strlcpy)Size menor: %s / length = %lu\n", destino, size_strlcpy_n);
// 	size_strlcpy_n = strlcpy(destino, origem, 5);
// 	printf("(strlcpy) Size menor: %s / length = %lu", destino, size_strlcpy_n);
// 	// size_n = ft_strlcpy(destino, origem, 0);
// 	// printf("Size = 0: %s / length = %u\n", destino, size_n);
// 	return (0);
// }