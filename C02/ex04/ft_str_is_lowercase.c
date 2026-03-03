/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucsanto <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/01 18:30:38 by lucsanto          #+#    #+#             */
/*   Updated: 2026/03/02 09:49:31 by lucsanto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_str_is_lowercase(char *str)
{
	int	string_received;

	string_received = 0;
	while (str[string_received] != '\0')
	{
		if ((str[string_received] >= 'a' && str[string_received] <= 'z')
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
// 	char	str_test1[] = "OLAMUNDO";
// 	char	str_test2[] = "olamundo";
// 	char	str_test3[] = "olamundO";
// 	printf("Retorno: %d\n", ft_str_is_lowercase(str_test1));
// 	printf("Retorno: %d\n", ft_str_is_lowercase(str_test2));
// 	printf("Retorno: %d", ft_str_is_lowercase(str_test3));
// }