/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucsanto <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/01 19:19:20 by lucsanto          #+#    #+#             */
/*   Updated: 2026/03/02 09:53:46 by lucsanto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	int	string_received;

	string_received = 0;
	while (str[string_received] != '\0')
	{
		if ((str[string_received] >= ' ' && str[string_received] <= '~')
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
// 	char	str[] = "1";
// 	char	str2[] = "a";
// 	char	str3[] = "\x02"; //ascii table non-printable
// 	char	str4[] = "";

// 	printf("%d\n", ft_str_is_printable(str));
// 	printf("%d\n", ft_str_is_printable(str2));
// 	printf("%d\n", ft_str_is_printable(str3));
// 	printf("%d\n", ft_str_is_printable(str4));
// 	return (0);
// }