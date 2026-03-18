/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucsanto <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/18 14:17:19 by lucsanto          #+#    #+#             */
/*   Updated: 2026/03/18 14:17:21 by lucsanto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	**ft_split(char *str, char *charset);
void	add_word(char *str, char *charset, char **array, int position);
int		ft_is_charset(char c, char *charset);
int		c_words(char *str, char *charset);

int	c_words(char *str, char *charset)
{
	int	i;
	int	words;

	i = 0;
	words = 0;
	while (str[i] != '\0')
	{
		while (str[i] != '\0' && ft_is_charset(str[i], charset) == 1)
			i++;
		if (str[i] != '\0')
			words++;
		while (str[i] != '\0' && ft_is_charset(str[i], charset) == 0)
			i++;
	}
	words++;
	return (words);
}

int	ft_is_charset(char c, char *charset)
{
	int	i;

	i = 0;
	while (charset[i] != '\0')
	{
		if (c == charset[i])
			return (1);
		i++;
	}
	return (0);
}

void	add_word(char *str, char *charset, char **array, int position)
{
	int	i;

	i = 0;
	while (ft_is_charset(str[i], charset) == 0 && str[i] != '\0')
		i++;
	array[position] = (char *) malloc(sizeof(char) * (i + 1));
	if (array[position] == NULL)
		return ;
	i = 0;
	while (ft_is_charset(str[i], charset) == 0 && str[i] != '\0')
	{
		array[position][i] = str[i];
		i++;
	}
	array[position][i] = '\0';
}

char	**ft_split(char *str, char *charset)
{
	char	**array;
	int		words;
	int		i;

	words = c_words(str, charset);
	i = 0;
	array = (char **) malloc(sizeof(char *) * words + 1);
	if (array == NULL)
		return (NULL);
	while (*str != '\0')
	{
		while (*str != '\0' && ft_is_charset(*str, charset) == 1)
		str++;
		if (*str != '\0')
		{
			add_word(str, charset, array, i);
			i++;
		}
		while (*str != '\0' && ft_is_charset(*str, charset) == 0)
		str++;
	}
	array[i] = NULL;
	return (array);
}
// #include <stdio.h>
// int	main(void)
// {
// 	int		index;
// 	char	charset[] = " ";
// 	char	str[] = " estamos na 42sp aehoo";
// 	char	**result = NULL;

// 	index = 0;
// 	result = ft_split(str, charset);
// 	while (result[index])
// 	{
// 		printf("[%s]", result[index]);
// 		index++;
// 	}
// 	free(result);
// 	return (0);
// }
