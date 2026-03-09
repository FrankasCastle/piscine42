/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucsanto <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/09 13:53:07 by lucsanto          #+#    #+#             */
/*   Updated: 2026/03/09 13:53:08 by lucsanto         ###   ########.fr       */
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
	int	counter;

	counter = 1;
	if (argc > 1)
	{
		while (counter < argc)
		{
			counter++;
		}
		while (counter > 1)
		{
			counter--;
			ft_argv_write(argv[counter]);
		}
	}
	return (0);
}
