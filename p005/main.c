#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  int smart = 2520, i, rem = 1;
  while (rem) {
    rem = 0;
    smart += 20;
    for (i = 11; i < 20; i++) {
      rem += (smart % i);
    } 
  }

  printf("smart: %d\n", smart);
  return 0;
}
