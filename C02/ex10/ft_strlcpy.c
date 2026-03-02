/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucsanto <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/02 15:25:24 by lucsanto          #+#    #+#             */
/*   Updated: 2026/03/02 15:25:26 by lucsanto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
char	*ft_strlcpy(char *dest, char *src, unsigned int n)
{
	unsigned int		limitador;
	char	*string_copied;

	limitador = 0;
	string_copied = dest;
	while ((*src != '\0') && (limitador <= n))
	{
        dest[limitador] = src[limitador];
		limitador++;
	}
	*dest = '\0';
	return (string_copied);
}