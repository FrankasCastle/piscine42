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

#include <unistd.h>
char	is_space(char *string_argv, int *counter_argv)
{
	int	counter_aux;

	counter_aux = *counter_argv;
	if (string_argv[counter_aux] == ' ')
	{
		return ((*counter_argv)++);
	}
	return (*string_argv);
}
void	ft_putchar(char c)
{
	write (1, &c, 1);
}
char	ft_signs(char *string_argv, int *counter_argv)
{
	while (string_argv[*counter_argv] == '+' || string_argv[*counter_argv] == '-')
	{
		if ((string_argv[*counter_argv] == '-') || (string_argv[*counter_argv] == '+'))
		{
			if ((string_argv[*counter_argv] == '-') && ((string_argv[*counter_argv + 1] == '+')
				|| (string_argv[*counter_argv + 1] == '-')))
			{
				(*counter_argv)++;
				return (*string_argv = '-');
			}
			else if (string_argv[*counter_argv] == '+')
			{
				if (string_argv[*counter_argv + 1] == '-')
				{
					(*counter_argv)++;
					return (*string_argv = '-');
				}
				else if ((string_argv[*counter_argv] == '+') && (string_argv[*counter_argv + 1 == '+']))
					return ((*counter_argv)++);
			}
		} 
		(*counter_argv)++;
	}
	return (*string_argv);
}

int ft_strlen(char *str)
{
	int	argv_len;
	
	argv_len = 0;
	while (str[argv_len] != '\0')
	{
		argv_len++;
	}
	return (argv_len);
}
int	ft_atoi(char *str)
{
	int		counter_argv;
	char	string_argv[ft_strlen(str + 1)];
	
	counter_argv = 0;
	while (str[counter_argv] != '\0')
	{
		string_argv[counter_argv] = str[counter_argv];
		counter_argv++;
	}
	string_argv[counter_argv] = '\0';
	counter_argv = 0;
	is_space(string_argv, &counter_argv);
	ft_signs(string_argv, &counter_argv);
	while ((string_argv[counter_argv] >= '0') && (string_argv[counter_argv] <= '9')
		&& (string_argv[counter_argv] != '\0'))
	{
		ft_putchar(string_argv[counter_argv]);
		counter_argv++;
	}
	return (0);
}
int	main(int argc, char **argv)
{
	argc = 0;
	ft_atoi(argv[1]);
}
