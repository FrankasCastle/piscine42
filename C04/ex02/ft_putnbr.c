/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucsanto <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/07 10:10:32 by lucsanto          #+#    #+#             */
/*   Updated: 2026/03/07 10:10:34 by lucsanto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void    ft_putnbr(int nb)
{
    long    nbl;
    char    c[11];
    int    i;
    
    nbl = nb;
    i = 0;
    if (nbl < 0)
    {
        nbl = nbl * -1;
        write(1, "-", 1);
    }
    while (nbl > 0)
    {
        c[i] = (nbl % 10) + 48;
        i++;
        nbl = nbl / 10;
    }
    while (i > 0)
    {
        i--;
        write(1, &c[i], 1);
    }
}
//#include <unistd.h>
// int main()
// {
//   ft_putnbr(-2147483648);
//   write (1, "\n", 1);
//   return 0;
// }
