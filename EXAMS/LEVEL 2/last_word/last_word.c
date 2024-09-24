#include <unistd.h>

int ft_strlen(char *str)
{
	int i;
	i = 0;
	while (str[i])
	{
		i++;
	}
	return i;
}

int ft_isspace(char c)
{
	return (c == ' ' || c == '\t' || c == '\0');
}

void last_word(char *str)
{
	int i;
	int len;
	int point;

	len = ft_strlen(str);
	i = len - 1;
	while (i >= 0 && ft_isspace(str[i]))
		i--;
	while (i >= 0 && !ft_isspace(str[i]))
		i--;
	if (ft_isspace(str[i]))
		point = i;
	while (str[point + 1] && !ft_isspace(str[point + 1]))
	{
		write(1, &str[point + 1], 1);
		point++;
	}
}

int main(int ac, char **av)
{
	if (ac == 2)
	{
		last_word(av[1]);
		write(1, "\n", 1);
		return 0;
	}
	write(1, "\n", 1);
	return 0;
}