#include <unistd.h>

int main(int ac, char **av)
{
  int i;

  i = 0;
  if (ac == 2)
  {
    while (av[1][i])
      i++;
    while (i)
    {
      i--;
      write(1, &av[1][i], 1);
    }
  }
  write(1, "\n", 1);
  return (0);
}
