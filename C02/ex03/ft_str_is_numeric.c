/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucsanto <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/01 18:29:20 by lucsanto          #+#    #+#             */
/*   Updated: 2026/03/02 09:51:24 by lucsanto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	int	string_received;

	string_received = 0;
	while (str[string_received] != '\0')
	{
		if ((str[string_received] >= '0' && str[string_received] <= '9')
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
// 	char	str_test1[] = "02654615212";
// 	char	str_test2[] = "01564185964b";
// 	printf("Retorno: %d\n", ft_str_is_numeric(str_test1));
// 	printf("Retorno: %d\n", ft_str_is_numeric(str_test2));
// }