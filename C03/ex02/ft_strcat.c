/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucsanto <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/04 17:09:56 by lucsanto          #+#    #+#             */
/*   Updated: 2026/03/04 17:09:59 by lucsanto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char    *ft_strcat(char *dest, char *src)
{
    int counter;
    int src_counter;

    counter = 0;
    src_counter = 0;
    while (dest[counter] != '\0')
    {
        counter++;
    }
    while (src[src_counter] != '\0')
    {
        dest = &src[src_counter];
        src_counter++;
    }
    dest[counter] = '\0';
    return (0);
}
// #include <stdio.h>
// #include <string.h>

// int main(void)
// {
//     char destino[] = "Hello ";
//     char origem[] = "World!";
//     char destino_strcat[] = "Hello ";
//     char origem_strcat[] = "World!";

//     ft_strcat(destino, origem);
//     printf("Palavra concatenada: %s\n", destino );
//     strcat(destino_strcat, origem_strcat);
//     printf("Palavra concatenada: %s\n", destino);
//     return (0);
// }
