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
	unsigned int		counter;

	counter = 0;
	while (counter < n)
	{
		dest[counter] = src[counter];
		counter++;
	}
	return (dest);
}
// #include <stdio.h>
// #include <string.h>
// int	main(void)
// {
// 	char	dest[] = "string lixo";
// 	char	src[] = "string certa";

// 	printf("%s\n", ft_strncpy(dest, src, 12));
// 	printf("%s", strncpy(dest, src, 12));
// 	return (0);
// }