#include <unistd.h>

int main(int argc, char **argv)
{
  if (argc == 2)
  {
    int i;

    i = 0;
    while (argv[1][i])
    {
      int count;

      count = 0;
      if (argv[1][i] >= 'a' && argv[1][i] <= 'z')
        count = argv[1][i] - 'a';
      if (argv[1][i] >= 'A' && argv[1][i] <= 'Z')
        count = argv[1][i] - 'A';
      while (count > 0)
      {
        write(1, &argv[1][i], 1);
        count--;
      }
      write(1, &argv[1][i], 1);
      i++;
    }
  }
  write(1, "\n", 1);
  return (0);
}
