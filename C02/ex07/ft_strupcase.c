/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucsanto <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/02 09:54:28 by lucsanto          #+#    #+#             */
/*   Updated: 2026/03/02 11:30:35 by lucsanto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
char	*ft_strupcase(char *str)
{
	int	counter;

	counter = 0;
	while (str[counter] != '\0')
	{
		if (str[counter] >= 'a' && str[counter] <= 'z')
		{
			str[counter] = str[counter] - 32;
		}
			counter++;
	}
	return (str);
}
// #include <stdio.h>
// int	main(void)
// {
// 	char	str_minuscula[] = "ola MUNdo";
// 	printf("String maiuscula: %s", ft_strupcase(str_minuscula));
// }