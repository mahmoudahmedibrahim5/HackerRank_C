#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
//Complete the following function.


void calculate_the_maximum(int n, int k) {
  int i, j;
  int ANDmax = 0, ORmax = 0, XORmax = 0;
  for(i=1; i<=n; i++)
  {
      for(j=n; j>i; j--)
      {
          if(((i&j) > ANDmax) && ((i&j) < k))
          {
              ANDmax = i & j;
          }
          if(((i|j) > ORmax) && ((i|j) < k))
          {
              ORmax = i | j;
          }
          if(((i^j) > XORmax) && ((i^j) < k))
          {
              XORmax = i ^ j;
          }
      }
  }
  printf("%d\n%d\n%d\n", ANDmax, ORmax, XORmax);
}

int main() {
    int n, k;
  
    scanf("%d %d", &n, &k);
    calculate_the_maximum(n, k);
 
    return 0;
}
