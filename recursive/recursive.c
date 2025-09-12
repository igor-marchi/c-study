#include <stdio.h>

int fatorial(int n)
{
  if (n <= 1)
    return 1;

  return n * fatorial(n - 1);
}

int main()
{
  int num = 5;
  int result = fatorial(num);
  printf("Fatorial de %d é %d\n", num, result);
  return 0;
}