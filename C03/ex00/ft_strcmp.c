/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucsanto <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/03 13:38:08 by lucsanto          #+#    #+#             */
/*   Updated: 2026/03/03 13:38:10 by lucsanto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int ft_strcmp(char *s1, char *s2)
{
    int    counters1;
    int    counters2;

    counters1 = 0;
    counters2 = 0;
    while (s2[counters2] != '\0')
    {
        if(s1[counters1] != s2[counters2])
        {
            return ((unsigned char)s1[counters1] - (unsigned char)s2[counters2]);
        }
        counters1++;
        counters2++;
    }
    return (0);
}
// #include <stdio.h>
// #include <string.h>
// int main(void)
// {
//     char str1[] = "Á";
//     char str2[] = "Z";

//     printf("O resultado é: %d\n", ft_strcmp(str1, str2));
//     printf("O resultado é: %d\n", strcmp(str1, str2));    
// }

