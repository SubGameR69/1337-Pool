#include <stdlib.h>

int ft_strlen(char *str)
{
	int i = 0;
	while (str[i])
	{
		i++;
	}
	return i;
}

char    *ft_strdup(char *src)
{
  char *result;
  int i = 0;
  int len = 0;

  len = ft_strlen(src);
  result = malloc(sizeof(char) * len + 1);
  if (!result)
    return NULL;
  while (i < len)
  {
    result[i] = src[i];
    i++;
  }
  result[i] = '\0';
  return result;
}
