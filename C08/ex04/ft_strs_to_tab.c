/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucsanto <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/17 11:07:15 by lucsanto          #+#    #+#             */
/*   Updated: 2026/03/17 11:07:17 by lucsanto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

typedef struct s_stock_str
{
	int size;
	char *str;
	char *copy;
}	t_stock_str;
int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}
char	*ft_strcpy(char *dest, char *src)
{
	int	counter;

	counter = 0;
	while (src[counter] != '\0')
	{
		dest[counter] = src[counter];
		counter++;
	}
	dest[counter] = '\0';
	return (dest);
}

char	*ft_strdup(char *src)
{
	char	*dest;

	dest = (char *) malloc(ft_strlen(src) + 1);
	if (dest == NULL)
		return (NULL);
	dest = ft_strcpy(dest, src);
	return (dest);
}
struct s_stock_str *ft_strs_to_tab (int ac, char **av)
{
	int	i;
	t_stock_str *array;

	i = 0;
	array = malloc(sizeof(struct s_stock_str) + 1);
	if (array == NULL)
		return (NULL);
	while (i < ac)
	{
		array[i].size = ft_strlen((*av)[i]);
		array[i].str = (*av)[i];
		array[i].copy = ft_strdup((*av)[i]);
		i++;
	}
	array[i].str = 0;
	return (array);
}
