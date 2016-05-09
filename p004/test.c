#include <stdio.h>
#include "util.h"

int main(int argc, char **argv)
{
  /*
  int a = -1024, b = 2048;
  char s[12];
  itoa(s, a);
  printf("%s\n", s);

  itoa(s, b);
  printf("%s\n", s);
  */
  
  int c = 2244, d = 42524;
  if (if_palindrome(c)) {
    printf("%d is palindrome\n", c);
  }

  if (if_palindrome(d)) {
    printf("%d is palindrome\n", d);
  }
  
  return 0;
}
