#include <stdio.h>

int testfun(int a, int b)
{
  int c;
  c = a + b;
  return c;
}

int main()
{
  int x;
  x = testfun(3, 4);
  printf("%d\n", x);

  return 0;
}
