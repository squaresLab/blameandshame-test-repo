#include <stdio.h>

int testfun(int a, int b)
{
  int x;
  x = a + b;
  x *= x;
  return x;
}

int main()
{
  int x;
  x = testfun(3, 4);
  printf("%d\n", x);

  return 0;
}
