/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucsanto <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/01 19:14:30 by lucsanto          #+#    #+#             */
/*   Updated: 2026/03/02 09:53:11 by lucsanto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	int	string_received;

	string_received = 0;
	while (str[string_received] != '\0')
	{
		if ((str[string_received] >= 'A' && str[string_received] <= 'Z')
			|| (str[string_received] == '\0'))
		{
			string_received++;
		}
		else
		{
			return (0);
		}
	}
	return (1);
}
// #include <stdio.h>
// int	main(void)
// {
// 	char	str_test1[] = "olamundo";
// 	char	str_test2[] = "OLAMUNDO";
// 	char	str_test3[] = "OLAMUNDo";
// 	printf("Retorno: %d\n", ft_str_is_uppercase(str_test1));
// 	printf("Retorno: %d\n", ft_str_is_uppercase(str_test2));
// 	printf("Retorno: %d", ft_str_is_uppercase(str_test3));
// }