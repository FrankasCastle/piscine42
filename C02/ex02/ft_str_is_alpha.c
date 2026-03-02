/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucsanto <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/01 13:59:36 by lucsanto          #+#    #+#             */
/*   Updated: 2026/03/01 14:00:27 by lucsanto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_str_is_alpha(char *str)
{
	int	string_received;

	string_received = 0;
	while (str[string_received] != '\0')
	{
		if ((str[string_received] >= 'A' && str[string_received] <= 'Z')
			|| (str[string_received] >= 'a' && str[string_received] <= 'z')
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
