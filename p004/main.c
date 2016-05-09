#include <stdio.h>
#include "util.h"

#define MAX_COUNT 100000

/**
 * @author pengwenbin7@126.com
 * @version 0.1
 * 找出3位数相乘得到的最大回文正整数
 */

int main(int argc, char *argv[])
{
  struct factor {
    int a;
    int b;
  } fs[MAX_COUNT];
  
  int palindrome[MAX_COUNT];
  int i, j, k, p = 0, max_p = 0, result;
  for (i = 999; i > 0; i--) {
    for (j = 999; j > 0; j--) {
      k = i * j;
      if (if_palindrome(k)) {
	palindrome[p] = k;
	fs[p].a = i;
	fs[p].b = j;
	p++;
	break;
      }
    }
  }

  // find the largest palindrome
  result = palindrome[0];
  for (i = 1; i < p; i++) {
    if (palindrome[i] > result) {
      result = palindrome[i];
      max_p = i;
    }
  }

  char formula[9];
  sprintf(formula, "%d x %d", fs[max_p].a, fs[max_p].b);
  printf("MAX: %d = %s, at: %d\n", result, formula, max_p);
  return 0;
}
