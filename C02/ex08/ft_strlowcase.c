/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucsanto <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/02 11:39:22 by lucsanto          #+#    #+#             */
/*   Updated: 2026/03/02 11:41:58 by lucsanto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
char	*ft_strlowcase(char *str)
{
	int	counter;

	counter = 0;
	while (str[counter] != '\0')
	{
		if (str[counter] >= 'A' && str[counter] <= 'Z')
		{
			str[counter] = str[counter] + 32;
		}
			counter++;
	}
	return (str);
}
// #include <stdio.h>
// int	main(void)
// {
// 	char	str_maiuscula[] = "OLA munDO";
// 	printf("String minuscula: %s", ft_strlowcase(str_maiuscula));
// }