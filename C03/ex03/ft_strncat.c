/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strncat.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucsanto <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/05 10:20:24 by lucsanto          #+#    #+#             */
/*   Updated: 2026/03/05 10:20:26 by lucsanto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char    *ft_strncat(char *dest, char *src, unsigned int nb)
{
    unsigned int counter;
    unsigned int src_counter;

    counter = 0;
    src_counter = 0;

    while ((dest[counter] != '\0'))
    {
        counter++;
    }
    while (src[src_counter] != '\0' && (src_counter < nb))
    {
        dest[counter + src_counter] = src[src_counter];
        src_counter++;
    }
    dest[counter + src_counter] = '\0';

    return (dest);
}
// #include <stdio.h>
// #include <string.h>

// int main(void)
// {
//     char destino[20] = "Hello ";
//     char origem[] = "World!";
//     char destino_ft[20] = "Hello ";
//     char origem_ft[] = "World!";
//     unsigned int limitador = 2;
//     unsigned int limitador_ft = 2;

//     printf("Palavra concatenada: %s\n", ft_strncat(destino, origem, limitador));
//     printf("Palavra concatenada: %s", strncat(destino_ft, origem_ft, limitador_ft));
//     return (0);
// }
