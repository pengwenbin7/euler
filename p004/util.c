#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include "util.h"

/**
 * @version 0.1
 * @author pengwenbin7@126.com
 */

// 整型转字符串，amd64 linux gcc最大整数10位，str[12]可以放置
void itoa(char str[], int n)
{
  int i = 1, j = 1, k = 0, flag = 0;
  char tmp[11];
  str[0] = str[1] = 0;
  if (n < 0) {
    str[0] = '-';
    n = -n;
  }
  
  while(n) {
    i = n / 10;
    j = n % 10;
    n = i;
    tmp[k++] = '0' + j;
  }
  tmp[k] = '\0';

  reverse(tmp);
  strcat(str, tmp);
}

// 反转字符串
void reverse(char src[])
{
  int len, i;
  len = strlen(src);
  char c;
  for (i = 0; i < len / 2; i++) {
    c = src[len - 1 - i];
    src[len - 1 - i] = src[i];
    src[i] = c;
  }
}

// 判断数字是否“回文”
int if_palindrome(int n)
{
  char s[12];
  itoa(s, n);
  char res[12];
  strcpy(res, s);
  reverse(s);
  if (strcmp(s, res) == 0) {
    return 1;
  } else {
    return 0;
  }
}
