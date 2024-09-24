#include <stdlib.h>

char	*ft_strchr(char *str, char c)
{
	while (*str)
	{
		if (*str == c)
			return (str);
		str++;
	}
	return (0);
}

char	*ft_strpbrk(char const *str1, char const *str2)
{
	char *s1 = (char *)str1;
	char *s2 = (char *)str2;

	while (*s1)
	{
		if (ft_strchr(s2, *s1) != 0)
			return (s1);
		s1++;
	}
	return (NULL);
}