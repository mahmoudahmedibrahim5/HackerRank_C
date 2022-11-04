#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
//Complete the following function.

int find_nth_term(int n, int a, int b, int c) {
  int arr[n];
  arr[0] = a;
  arr[1] = b;
  arr[2] = c;
  for(int i=3; i<n; i++)
  {
      arr[i] = arr[i-1] + arr[i-2] + arr[i-3];
  }
  return arr[n-1];
  /*
  if(n == 3)
  {return c;}
  return find_nth_term(n-1, b, c, a+b+c);
  */
}

int main() {
    int n, a, b, c;
  
    scanf("%d %d %d %d", &n, &a, &b, &c);
    int ans = find_nth_term(n, a, b, c);
 
    printf("%d", ans); 
    return 0;
}
