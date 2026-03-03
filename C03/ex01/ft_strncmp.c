/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucsanto <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/03 15:47:48 by lucsanto          #+#    #+#             */
/*   Updated: 2026/03/03 15:47:49 by lucsanto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_strncmp(char *s1, char *s2, unsigned int n)
{
    unsigned int    counters1;
    unsigned int    counters2;

    counters1 = 0;
    counters2 = 0;
    while ((counters2 < n - 1) || (s2[counters2] != '\0'))
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
#include <stdio.h>
#include <string.h>
int main(void)
{
    char str1[] = "Eu estou copiando algo";
    char str2[] = "Eu estou copiando algO";
    unsigned int size = 5;

    printf("O resultado é: %d\n", ft_strncmp(str1, str2, size));
    printf("O resultado é: %d\n", strncmp(str1, str2, size));    
}