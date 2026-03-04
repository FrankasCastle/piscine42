/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucsanto <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/04 11:40:37 by lucsanto          #+#    #+#             */
/*   Updated: 2026/03/04 11:40:58 by lucsanto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	aux_ft(char *str, int counter)
{
	counter--;
	if (str[counter] >= 'a' && str[counter] <= 'z')
	{
		str[counter] = str[counter] - 32;
	}
}

void	aux2_ft(char *str, int counter)
{
	if (str[counter] >= 'a' && str[counter] <= 'z')
	{
		str[counter] = str[counter] - 32;
	}
}

char	*ft_strcapitalize(char *str)
{
	int	counter;

	if (str[0] == '\0')
		return (str);
	counter = 0;
	if (str[counter] >= 'a' && str[counter] <= 'z')
		aux_ft(str, 1);
	counter = 1;
	while (str[counter] != '\0')
	{
		if (str[counter] >= 'A' && str[counter] <= 'Z')
			str[counter] = str[counter] + 32;
		if ((str[counter] >= 'a' && str[counter] <= 'z')
			|| (str[counter] >= '0' && str[counter] <= '9'))
		{
			if (!((str[counter - 1] >= 'a' && str[counter - 1] <= 'z')
					|| (str[counter - 1] >= 'A' && str[counter - 1] <= 'Z')
					|| (str[counter - 1] >= '0' && str[counter - 1] <= '9')))
			{
				aux2_ft(str, counter);
			}
		}
		counter++;
	}
	return (str);
}
// #include <stdio.h>
// int main(void)
// {
//     char    str[] = "hi, h_w are ''you? 42words forty-two; fifty+and+one";
//     char    str1[] = "HELLO HELLO";
//     char    str2[] = "hELLO hello";
//     char    str3[] = "hELLO+Hello";

//     printf("%s\n", ft_strcapitalize(str));
//     printf("%s\n", ft_strcapitalize(str1));
//     printf("%s\n", ft_strcapitalize(str2));
//     printf("%s\n", ft_strcapitalize(str3));
//     return (0);
// }