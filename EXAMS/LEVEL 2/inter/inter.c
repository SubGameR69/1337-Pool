#include <unistd.h>

int	it_has_char(char *str, char c)
{
	int i = 0;
	while (str[i])
	{
		if (str[i] == c)
			return 1;
		i++;
	}
	return 0;
}

void	ft_inter(char *str1, char *str2, char *list)
{
	int i = 0;
	int j = 0;
	while (str1[i])
	{
		if (it_has_char(str2, str1[i]))
		{
			if (!it_has_char(list, str1[i]))
			{
				write(1, &str1[i], 1);
				list[j] = str1[i];
				j++;
			}
		}
		i++;
	}
}

int main(int ac, char **av)
{
	char list[1024];
	if (ac == 3)
	{
		ft_inter(av[1], av[2], list);
	}
	write(1, "\n", 1);
	return 0;
}