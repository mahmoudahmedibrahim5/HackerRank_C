#include <stdio.h>

int max_of_four(int a, int b, int c, int d)
{
    int tmp, arr[4] = {a, b, c, d};
    for(int j=0; j<3 ; j++)
    {
        for(int i=0; i<3-j ; i++)
        {
            if (arr[i]>arr[i+1])
            {
                tmp = arr[i];
                arr[i] = arr[i+1];
                arr[i+1] = tmp;
            }
        }
    }
    return arr[3];
}

int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);
    
    return 0;
}
