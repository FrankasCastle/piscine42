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
	return (i);
}
int	ft_is_prime(int nb)
{
	int raiz;
	int i;

	raiz = ft_sqrt(nb);
	i = 3;
	if (nb < 0)
		return(0);
	if ((nb == 0) || (nb == 1))
		return(0);
	if ((nb == 2) || (nb == 3))
		return (1);
	if (nb % 2 == 0)
		return (0);
	while (i <= raiz)
	{
		if (nb % i == 0)
			return(0);
		i++;
	}
	return (1);
}
// #include <stdio.h>
// int	main(void)
// {
// 	int is_prime;
	
// 	is_prime = 30;
// 	if (ft_is_prime(is_prime) == 1)
// 		printf("É primo!\n");
// 	else
// 		printf("Não é primo :(\n");
// }