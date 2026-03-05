/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucsanto <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/05 14:11:08 by lucsanto          #+#    #+#             */
/*   Updated: 2026/03/05 14:11:09 by lucsanto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
unsigned int	size_of_dest_and_src(char *dest, char *src)
{
	unsigned int	counter;
	unsigned int	src_counter;

	counter = 0;
	src_counter = 0;
	while (dest[counter] != '\0')
	{
		counter++;
	}
	while (src[src_counter] != '\0')
	{
		src_counter++;
	}
	return (counter + src_counter);
}

unsigned int	size_of_src(char *src, unsigned int size)
{
	unsigned int	counter;

	counter = 0;
	while (src[counter] != '\0')
	{
		counter++;
	}
	return (counter + size);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	counter;
	unsigned int	src_counter;
	unsigned int	counter_salvo;

	counter = 0;
	src_counter = 0;
	if (size == 0)
		return (size_of_src(src, 0));
	while ((dest[counter] != '\0') && (counter < size))
	{
		counter++;
	}
	if (counter == size)
		return (size_of_src(src, size));
	counter_salvo = counter;
	while (src[src_counter] != '\0' && (counter + src_counter < size - 1))
	{
		dest[counter + src_counter] = src[src_counter];
		src_counter++;
	}
	dest[counter + src_counter] = '\0';
	return (counter_salvo + size_of_src(src, 0));
}
// #include <stdio.h>
// #include <bsd/string.h>

// int main (void)
// {
//     char destination_ft[10] = "Ola ";
//     const char *source_ft = "Mundo";
//     size_t total_length;
//     total_length = 0;

//     strlcat(destination_ft, source_ft, total_length);
//     printf("(strlcat)Concatenated string: %s\n", destination_ft);
//     printf("(strlcat)Total length: %zu\n", total_length);

//     char destino[10] = "Ola ";
//     char *origem = "Mundo!";
//     unsigned int size = 0;

//     ft_strlcat(destino, origem, size);
//     printf("Concatenated string: %s\n", destino);
//     printf("Total length: %d\n", size);
//     return (0);
// }
