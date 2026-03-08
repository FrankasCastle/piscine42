/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucsanto <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/06 17:55:20 by lucsanto          #+#    #+#             */
/*   Updated: 2026/03/06 17:55:22 by lucsanto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	counter;

	counter = 0;
	while (str[counter] != '\0')
	{
		counter++;
	}
	return (counter);
}
// #include <stdio.h>
// int	main(void)
// {
// 	char	teste[] = "123456789";
// 	printf("numero de caracteres: %d", ft_strlen(teste));
// 	return (0);
// }
