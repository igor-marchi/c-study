#include <stdio.h>

int fibo(int n)
{
  if (n <= 1)
    return n;

  return fibo(n - 1) + fibo(n - 2);
}

int main()
{
  int num = 7;
  printf("Cálculo dos primeiros %d números da sequência de Fibonacci:\n", num);
  for (int i = 0; i <= num; i++)
  {
    printf("%d ", fibo(i));
  }
  printf("\n");
  return 0;
}