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

void ft_putchar(char c)
{
    write (1, &c, 1);
}
void ft_putstr(char *str)
{
    int counter;

    counter = 0;
    while (str[counter] != '\0')
    {
        ft_putchar(&str);
        counter++;
    }
}
