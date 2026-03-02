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
char	*ft_strcapitalize(char *str)
{
	int	counter;

	counter = 0;
	if (str[counter] >= 'a' && str[counter] <= 'z')
	{
		str[counter] = str[counter] - 32;
		counter++;
	}
	if (str[counter] >= 'A' && str[counter] <= 'Z')
		counter++;
	while (str[counter] != '\0')
	{
		if (str[counter] >= 'a' && str[counter] <= 'z')
			counter++;
		else if (str[counter] >= 'A' && str[counter] <= 'Z')
		{
			str[counter] = str[counter] + 32;
			counter++;
		}
		else if (str[counter] >= '0' && str[counter] <= '9')
			counter ++;
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
