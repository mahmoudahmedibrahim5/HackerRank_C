#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int v1,v2;
    float v3,v4;
    scanf("%d %d", &v1, &v2);
    scanf("%f %f", &v3, &v4);
    printf("%d %d\n", v1+v2, v1-v2);
    printf("%.1f %.1f\n", v3+v4, v3-v4);
    return 0;
}
