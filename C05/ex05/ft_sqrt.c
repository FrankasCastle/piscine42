int	ft_sqrt(int nb)
{
	int	i;

	if (nb <= 0)
		return (0);
	i = 1;
	while (i <= nb / i)
	{
		if (i * i == nb)
			return (i);
		i++;
	}
	return (0);
}
// #include <stdio.h>
// int	main(void)
// {
// 	int raiz1 = 16;
// 	int raiz2 = 42;
// 	int raiz3 = 49;
// 	printf("A raiz de %d é: %d\n",raiz1, ft_sqrt(raiz1));
// 	printf("A raiz de %d é: %d\n",raiz2,  ft_sqrt(raiz2));
// 	printf("A raiz de %d é: %d\n",raiz3, ft_sqrt(raiz3));
// }