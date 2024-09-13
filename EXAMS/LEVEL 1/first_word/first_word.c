#include <unistd.h>

int	ft_isspace(char c)
{
	if (c == ' ' || c == '\t' || c == '\n')
	{
		return (1);
	}
	return (0);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_first_word(char *str)
{
	int	i;

	i = 0;
	while (ft_isspace(str[i]))
	{
		i++;
	}
	while (!ft_isspace(str[i]) && str[i])
	{
		ft_putchar(str[i]);
		i++;
	}
	ft_putchar('\n');
}

int	main(int argc, char **argv)
{
	if (argc == 2)
	{
		ft_first_word(argv[1]);
	}
	else
	{
		ft_putchar('\n');
	}
	return (0);
}