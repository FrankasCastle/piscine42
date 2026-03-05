/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucsanto <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/05 10:56:14 by lucsanto          #+#    #+#             */
/*   Updated: 2026/03/05 10:56:16 by lucsanto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char *ft_strstr(char *str, char *to_find)
{
    int counter;
    int counter2;

    if(to_find[0] == '\0')
    {
        return (str);
    }
    counter = 0;
    while (str[counter] != '\0')
    {
        counter2 = 0;
        while (to_find[counter2] && str[counter + counter2] == to_find[counter2])
        {
            counter2++;
            if(to_find[counter2] == '\0')
            {
                return (&str[counter]);
            }
        }
        counter++;
    }
    return (0);
}
// #include <stdio.h>
// #include <string.h>
// int main(void)
// {
// //char string_1_ft[20] = "Hello World!";
// //char string_2_ft[20] = "Wo";
// char string_1[20] = "Hello World!";
// char string_2[10] = "Wo";
// char string_3[20] = "42 São Paulo";
// char string_4[20] = "";
// char string_5[20] = "C";
// char string_6[20] = "Curso";
// char string_7[20] = "mississipi";
// char string_8[20] = "issi";
// char string_9[20] = "aaaaaaaaaaaaaaaaaab";
// char string_10[20] = "aaab";
// char string_11[20] = "C-Programming\0Hidden";
// char string_12[20] = "Hidden";

// printf("Substring: %s\n", ft_strstr(string_1, string_2));
// printf("Substring: %s\n", ft_strstr(string_3, string_4));
// printf("Substring: %s\n", ft_strstr(string_5, string_6));
// printf("Substring: %s\n", ft_strstr(string_7, string_8));
// printf("Substring: %s\n", ft_strstr(string_9, string_10));
// printf("Substring: %s\n", ft_strstr(string_11, string_12));
// //printf("Substring: %s", strstr(string_1_ft, string_2_ft));
// }


// A função retorna um ponteiro para os primeiros
// caracteres de str_2 em str_1 ou um ponteiro nulo
// se str_2 não for encontrado em str_1.

// Se str_2 for uma string vazia, str_1 será retornado.
