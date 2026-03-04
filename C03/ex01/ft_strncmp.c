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
    unsigned int    counter;

    counter = 0;
    while ((counter < n) && (s2[counter] != '\0') && (s2[counter] != 0))
    {
        if(s1[counter] != s2[counter])
        {
            return ((unsigned char)s1[counter] - (unsigned char)s2[counter]);
        }
        counter++;
    }
    return (0);
}
// #include <stdio.h>
// #include <string.h>
// int main(void)
// {
//     char str1[] = "Hello World!";
//     char str2[] = "Hell0 World?";
//     unsigned int size = 5;

//     printf("O resultado é: %d\n", ft_strncmp(str1, str2, size));
//     printf("O resultado é: %d\n", strncmp(str1, str2, size));    
// }