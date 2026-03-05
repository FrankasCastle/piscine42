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

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	counter;

	counter = 0;
	if (n == 0)
	{
		return (0);
	}
	while ((counter < n - 1) && (s2[counter] != '\0')
		&& (s1[counter] == s2[counter]))
	{
		counter++;
	}
	return ((unsigned char) s1[counter] - s2[counter]);
}
// #include <stdio.h>
// #include <string.h>
// int main(void)
// {
//     // s1 < s2  resultado 'e negativo
//     // s1 > s2  resultado 'e positivo

//     unsigned int    n1 = 5;
//     char			s1[] = "He";
//     char			s2[] = "";
//     printf("He He = %d", ft_strncmp(s1, s2, n1));
//     printf(" %d\n\n", strncmp(s1, s2, n1));

//     unsigned int    n2 = 5;
//     char			s3[] = "He";
//     char			s4[] = "Ho";
//     printf("He Ho = %d", ft_strncmp(s3, s4, n2));
//     printf(" %d\n\n", strncmp(s3, s4, n2));

//     unsigned int    n3 = 5;
//     char			s5[] = "Ho";
//     char			s6[] = "He";
//     printf("Ho He = %d", ft_strncmp(s5, s6, n3));
//     printf(" %d\n\n", strncmp(s5, s6, n3));

//     unsigned int    n4 = 5;
//     char			s7[] = "He";
//     char			s8[] = "Hel";
//     printf("He Hel = %d", ft_strncmp(s7, s8, n4));
//     printf(" %d\n\n", strncmp(s7, s8, n4));

//     unsigned int    n5 = 5;
//     char			s9[] = "Hel";
//     char			s10[] = "He";
//     printf("Hel He = %d", ft_strncmp(s9, s10, n5));
//     printf(" %d\n\n", strncmp(s9, s10, n5));

//     unsigned int    n6 = 5;
//     char			s11[] = "Hell";
//     char			s12[] = "He";
//     printf("Hell He = %d", ft_strncmp(s11, s12, n6));
//     printf(" %d\n\n", strncmp(s11, s12, n6));

//     unsigned int    n7 = 5;
//     char			s13[] = "Hello";
//     char			s14[] = "He";
//     printf("Hello He = %d", ft_strncmp(s13, s14, n7));
//     printf(" %d\n", strncmp(s13, s14, n7));
//     return (0);
// }