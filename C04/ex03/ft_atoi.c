/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucsanto <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/07 10:44:16 by lucsanto          #+#    #+#             */
/*   Updated: 2026/03/07 10:44:18 by lucsanto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	minus;
	int	n;

	n = 0;
	minus = 0;
	while ((*str >= 9 && *str <= 13) || (*str == ' '))
		str++;
	while (*str == '+' || *str == '-')
	{
		if (*str == '-')
			minus++;
		str++;
	}
	while ((*str >= 48) && (*str <= 57))
	{
		n = n * 10;
		n = n + *str - 48;
		str++;
	}
	if (minus % 2 == 0)
		return (n);
	return (-n);
}
// #include <stdio.h>

// int main(int argc, char **argv)
// {
//     if (argc == 2)
//     {
//         printf("%d\n", ft_atoi(argv[1]));
//     }
//     return (0);
// }
