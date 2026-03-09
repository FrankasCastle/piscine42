/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucsanto <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/09 16:40:23 by lucsanto          #+#    #+#             */
/*   Updated: 2026/03/09 16:40:30 by lucsanto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_argv_write(char *str)
{
	int	counter;

	counter = 0;
	while (str[counter] != '\0')
	{
		write(1, &str[counter], 1);
		counter++;
	}
	write(1, "\n", 1);
}

int	ft_strcmp(char *s1, char *s2)
{
	int	counter;

	counter = 0;
	while (s1[counter] != '\0' && s1[counter] == s2[counter])
		counter++;
	return ((unsigned char)s1[counter] - (unsigned char)s2[counter]);
}

void	string_swap(char **s1, char **s2)
{
	char	*temp;

	temp = *s1;
	*s1 = *s2;
	*s2 = temp;
}

int	main(int argc, char **argv)
{
	int	counter;
	int	aux;

	counter = 1;
	if (argc > 1)
	{
		while (counter < argc - 1)
		{
			aux = counter + 1;
			while (aux < argc)
			{
				if (ft_strcmp(argv[counter], argv[aux]) > 0)
					string_swap(&argv[counter], &argv[aux]);
				aux++;
			}
			counter++;
		}
		counter = 1;
		while (counter < argc)
		{
			ft_argv_write(argv[counter]);
			counter++;
		}
	}
	return (0);
}
