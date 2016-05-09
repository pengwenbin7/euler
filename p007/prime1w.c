#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <sys/types.h>

#define LEN 10001
typedef long long unsigned int bigint;

int notprime(bigint n, int p);
int main(int argc, char *argv[])
{
  bigint prime[LEN] = {
    2, 3, 5, 7, 11, 13, 17, 19,
    23, 29, 31, 37, 41, 43, 47,
    53, 59, 61, 67, 71, 73, 79,
    83, 89, 97
  };
  int p = 25;
  while (p < LEN) {
    p = add_prime(prime, p);
  }
  
  printf("%llu\n", prime[--p]);
}  

int add_prime(bigint prime[], int p)
{
  bigint next = prime[p - 1] + 2, rem;
  int i;
  while (1) {
    for (i = 0; i < p; i++) {
      rem = next % prime[i];
      if (!rem) {
	break;
      }
    }

    if (i == p) {
      break;
    } else {
      next += 2;
    }
  }

  prime[p] = next;
  return ++p;
}
