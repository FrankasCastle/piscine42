/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucsanto <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/06 17:57:08 by lucsanto          #+#    #+#             */
/*   Updated: 2026/03/06 17:57:10 by lucsanto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

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
// int main(void)
// {
//	 char	printed_str[] = "Olá mundo!";
// 	ft_putstr(printed_str);	
// }
