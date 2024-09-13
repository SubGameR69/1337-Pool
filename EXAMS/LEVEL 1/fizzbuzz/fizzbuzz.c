#include <unistd.h>

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
}

void	ft_putnbr(int nbr)
{
	char	digit;

	if (nbr > 9)
		ft_putnbr(nbr / 10);
	digit = (nbr % 10) + '0';
	write (1, &digit, 1);
}

int		main()
{
	int	i;

	i = 1;
	while (i <= 100)
	{
		if (i % 15 == 0)
			ft_putstr("fizzbuzz");
		else if (i % 3 == 0)
			ft_putstr("fizz");
		else if (i % 5 == 0)
			ft_putstr("buzz");
		else
			ft_putnbr(i);
		i++;
		write (1, "\n", 1);
	}
}