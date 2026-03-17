/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucsanto <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/17 13:22:23 by lucsanto          #+#    #+#             */
/*   Updated: 2026/03/17 13:22:25 by lucsanto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "ft_stock_str.h"

void	ft_putstr(char *str)
{
	int	counter;

	counter = 0;
	while (str[counter] != '\0')
	{
		write (1, &str[counter], 1);
		counter++;
	}
}

void	ft_putnbr(int nb)
{
	long	nbl;
	int		i;
	char	c[11];

	nbl = nb;
	i = 0;
	if (nbl == 0)
		write (1, "0", 1);
	if (nbl < 0)
	{
		nbl = nbl * -1;
		write(1, "-", 1);
	}
	while (nbl > 0)
	{
		c[i] = (nbl % 10) + '0';
		i++;
		nbl = nbl / 10;
	}
	while (i > 0)
	{
		i--;
		write(1, &c[i], 1);
	}
}

void	ft_show_tab(struct s_stock_str *par)
{
	int	i;

	i = 0;
	while (par[i].str != 0)
	{
		ft_putstr(par[i].str);
		write (1, "\n", 1);
		ft_putnbr(par[i].size);
		write (1, "\n", 1);
		ft_putstr(par[i].copy);
		write (1, "\n", 1);
		i++;
	}
}

// #ifndef FT_STOCK_STR_H
// # define FT_STOCK_STR_H

// typedef struct s_stock_str
// {
//     int size;
//     char *str;
//     char *copy;
// }   t_stock_str;

// #endif

// #include "ft_stock_str.h"
// void				ft_show_tab(struct s_stock_str *par);
// struct s_stock_str	*ft_strs_to_tab(int ac, char **av);

// int	main(void)
// {
	// 	char		*av[] = {"cachorro", "gato", "papagaio"};
	// 	int			ac;
	// 	t_stock_str	*par;

	// 	ac = 3;
	// 	par = ft_strs_to_tab(ac, av);
	// 	ft_show_tab(par);
	// 	return (0);
// }
