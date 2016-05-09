#include "util.h"

/**
 * read a line (end with '\n') from stream, store in buf
 * return character number of the line
 */
int read_line(FILE *stream, char buf[])
{
  int c, i = 0;
  while (1) {
    c = fgetc(stream);
    if (c == EOF) {
      return -1;
    } else if (c == 0x0a) {
      break;
    } else {
      buf[i++] = c;
    }
  }

  return i;
}
