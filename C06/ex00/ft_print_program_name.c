/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucsanto <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/09 11:42:59 by lucsanto          #+#    #+#             */
/*   Updated: 2026/03/09 11:43:02 by lucsanto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_argv_write(char *str)
{
	int	counter;

	counter = 0;
	while (str[counter] != '\0')
	{
		write (1, &str[counter], 1);
		counter++;
	}
	write (1, "\n", 1);
}

int	main(int argc, char **argv)
{
	if (argc == 1)
	{
		ft_argv_write(argv[0]);
	}
	return (0);
}
