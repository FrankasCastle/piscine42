/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucsanto <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/10 13:21:04 by lucsanto          #+#    #+#             */
/*   Updated: 2026/03/10 13:21:06 by lucsanto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <malloc.h>
int	ft_strlen(char *str)
{
    int	counter;
    
	counter = 0;
	while (str[counter] != '\0')
	{
        counter++;
	}
	return (counter);
}
char	*ft_strcpy(char *dest, char *src)
{
    int	counter;
    
	counter = 0;
	while (src[counter] != '\0')
	{
        dest[counter] = src[counter];
		counter++;
	}
	dest[counter] = '\0';
	return (dest);
}


char *ft_strdup(char *src)
{
    char    *dest;
    
    dest = (char *) malloc(ft_strlen(src) + 1);
    if (dest == NULL)
        return (NULL);
    dest = ft_strcpy(dest, src);
    return (dest);
}

// #include <stdio.h>
// int main(void)
// {
//     char    origem[] = "String test.";
//     char    *destino;

//     destino = ft_strdup(origem);
//     printf("String duplicada: %s", destino);
//     free (destino);
//     return (0);
//     //valgrind --leak-check=full
// }
