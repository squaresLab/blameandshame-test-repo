#include <stdio.h>

int testfun(int a, int b)
{
  int x;
  x = a + b;
  x *= x;
  return x;
}

int testfun2(int a, int b)
{
  int x;
  x = testfun(a, b);
  x -= x;
  return x;
}

int main()
{
  int x;
  int y;
  x = testfun(3, 4);
  y = testfun2(3, 4);
  printf("%d\n", x);

  return 0;
}
