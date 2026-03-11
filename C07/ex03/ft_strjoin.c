/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucsanto <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/11 11:11:28 by lucsanto          #+#    #+#             */
/*   Updated: 2026/03/11 11:11:29 by lucsanto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_total_len(int size, char **strs)
{
	int	i;
	int	j;
	int	total;

	i = 0;
	total = 0;
	while (i < size)
	{
		j = 0;
		while (strs[i][j] != '\0')
		{
			total++;
			j++;
		}
		i++;
	}
	i = 0;
	i = size - 1;
	total += (size - 1) * i;
	return (total);
}
char	*ft_strcat(char *dest, char *src)
{
	int	counter;
	int	src_counter;

	counter = 0;
	src_counter = 0;
	while (dest[counter] != '\0')
	{
		counter++;
	}
	dest[counter] = ',';
	counter++;
	dest[counter] = ' ';
	while (src[src_counter] != '\0')
	{
		dest[counter + src_counter] = src[src_counter];
		src_counter++;
	}
	dest[counter + src_counter] = '\0';
	return (dest);
}

char *ft_strjoin(int size, char **strs, char *sep)
{
	int	i;
	int strs_len;
    char	*str_cats;

	strs_len = ft_total_len(size, **strs);
	i = 0;
	str_cats = (char *) malloc(strs_len);
	if (size == 0)
	{
		// free(str_cats);
		// str_cats[1] = '\0';
		return (str_cats);
	}
	while (i < size)
	{
		str_cats = ft_strcat(strs[i], strs[i + 1]);
		i++;
	}
	return (str_cats);
}
