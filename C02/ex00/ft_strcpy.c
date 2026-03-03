/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucsanto <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/28 13:24:34 by lucsanto          #+#    #+#             */
/*   Updated: 2026/03/01 15:35:06 by lucsanto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
char	*ft_strcpy(char *dest, char *src)
{
	int	counter;

	counter = 0;
	while (src[counter] != '\0')
	{
		dest[counter] = src[counter];
		counter++;
	}
	dest[counter] = '\0';
	return (dest);
}
// #include <stdio.h>
// #include <string.h>
// int	main(void)
// {
// 	char	dest[50];
// 	char	src[] = "Este é um teste";

// 	printf("%s\n", ft_strcpy(dest, src));
// 	printf("%s", strcpy(dest, src));
// 	return (0);
// }