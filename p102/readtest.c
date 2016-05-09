#include <stdio.h>

int main(int argc, char *argv[])
{
  FILE *fp = fopen("data.txt", "r");
  int c = 0, i, j = 0;
  char s[100];
  i = 0;
  while (1) {
    c = fgetc(fp);
    if (c == EOF) {
      break;
    }
    if (c != 0x0a) {
      s[i++] = c;
    } else {
      s[i] = '\0';
      break;
    }
  }

  printf("s: %s\n", s);
  return 0;
}
