#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
	
    int n;
    scanf("%d", &n);
    int d[5], sum = 0;
    for(int i=0; i<5; i++)
    {
        d[i] = n % ((int)pow(10,i+1))/((int)pow(10,i));
        sum += d[i];
    }
    printf("%d",sum);
    return 0;
}
