/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucsanto <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/01 18:29:20 by lucsanto          #+#    #+#             */
/*   Updated: 2026/03/01 18:30:07 by lucsanto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_str_is_alpha(char *str)
{
	int	string_received;

	string_received = 0;
	while (str[string_received] != '\0')
	{
		if ((str[string_received] >= '0' && str[string_received] <= '9')
			|| (str[string_received] == '\0'))
		{
			string_received++;
		}
		else
		{
			return (0);
		}
	}
	return (1);
}

