/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucsanto <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/28 14:08:15 by lucsanto          #+#    #+#             */
/*   Updated: 2026/03/01 14:07:22 by lucsanto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	int		limitador;
	char	*string_copied;

	limitador = 1;
	string_copied = dest;
	while ((*src != '\0') && (limitador <= n))
	{
		*dest = *src;
		dest++;
		src++;
		limitador++;
	}
	*dest = '\0';
	return (string_copied);
}
