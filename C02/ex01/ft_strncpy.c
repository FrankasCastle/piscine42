/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucsanto <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/28 14:08:15 by lucsanto          #+#    #+#             */
/*   Updated: 2026/03/02 15:44:17 by lucsanto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int		limitador;
	char	*string_copied;

	limitador = 0;
	string_copied = dest;
	while ((*src != '\0') && (limitador <= n))
	{
		*dest = *src;
		dest++;
		src++;
		limitador++;
	}
	//*dest = '\0';
	return (string_copied);
}