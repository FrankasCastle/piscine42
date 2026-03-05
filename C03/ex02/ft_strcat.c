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

//     printf("Palavra concatenada: %s\n", ft_strcat(destino, origem));
//     printf("Palavra concatenada: %s", strcat(destino_ft, origem_ft));
//     return (0);
// }
