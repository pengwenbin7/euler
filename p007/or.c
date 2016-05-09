#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main(int argc, char **argv)
{
  int a = 0, b = atoi(argv[1]);
  a |= b;
  printf("%d\n", a);

  return 0;
}
