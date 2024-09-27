#include <unistd.h>

int	ft_has_char(char *str, char c)	
{
	int i = 0;
	while (str[i])
	{
		if (c == str[i])
		{
			return 1;
		}
	i++;
	}
	return 0;
}

void	ft_union(char *str1, char *str2, char *comp)
{
	int i = 0;
	int j = 0;
	int k = 0;

	while (str1[i])
	{
		if (!ft_has_char(comp, str1[i]))
		{
				write(1, &str1[i], 1);
				comp[k] = str1[i];
				k++;
		}
		i++;
	}
	while (str2[j])
	{
		if (!ft_has_char(comp, str2[j]))
		{
			write(1, &str2[j], 1);
			comp[k] = str2[j];
			k++;
		}
		j++;
	}
}

int main(int ac, char **av)
{
	char	str[1024];
	if (ac == 3)
	{
		ft_union(av[1], av[2], str);
	}
	write(1, "\n", 1);
	return 0;
}