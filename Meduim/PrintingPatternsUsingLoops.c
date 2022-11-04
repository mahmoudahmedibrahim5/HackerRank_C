#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    int n;
    scanf("%d", &n);
    int i, j, k, cs;
    for(i=0; i<2*n-1; i++)
    {
        k = n;
        cs = 0;
        /*
        There are 3 cases
        case 1 : Decrement (Default case)
        case 2 : constant
        case 3 : Decrement
        */
        for(j=0; j<2*n-1; j++)
        {
            if(i == j || i+j == 2*n-2)
            {cs++;}
            if(k == 1)
            {cs = 2;}
            switch(cs)
            {
                case 0:
                    printf("%d ", k);
                    k--;
                    break;
                case 1:
                    printf("%d ", k);
                    break;
                case 2:
                    printf("%d ", k);
                    k++;
                    break;
            }
        }
        printf("\n");
    }
    return 0;
}
