/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucsanto <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/02 12:40:43 by lucsanto          #+#    #+#             */
/*   Updated: 2026/03/02 12:41:04 by lucsanto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
void	aux_ft(char *str, int counter)
{
	counter--;
	if (str[counter] >= 'a' && str[counter] <= 'z')
	{
		str[counter] = str[counter] - 32;
		counter++;
	}
	if (str[counter] >= 'A' && str[counter] <= 'Z')
	{
		counter++;
	}
	counter++;
}

char	*ft_strcapitalize(char *str)
{
	int	counter;

	counter = 1;
	aux_ft(str, counter);
	while (str[counter] != '\0')
	{
		if ((str[counter] >= 'a' && str[counter] <= 'z')
			|| (str[counter] >= '0' && str[counter] <= '9'))
			counter++;
		else if (str[counter] >= 'A' && str[counter] <= 'Z')
		{
			str[counter] = str[counter] + 32;
			counter++;
		}
		else
		{
			counter++;
			if (str[counter] >= 'a' && str[counter] <= 'z')
			{
				str[counter] = str[counter] - 32;
				counter++;
			}
		}
	}
	return (str);
}
// #include <stdio.h>

// int	main(void)
// {
// 	char string_test[] = "hi, how are you? 42words forty-two; fifty+and+one";
// 	printf("%s\n", ft_strcapitalize(string_test));
// }