#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    char *s;
    s = malloc(1024 * sizeof(char));
    scanf("%[^\n]", s);
    s = realloc(s, strlen(s) + 1);
    int f[10]={0,0,0,0,0,0,0,0,0,0}, i, j;
    for(i=0; i<strlen(s); i++)
    {
        if(s[i] == '0'){f[0]++;}
        if(s[i] == '1'){f[1]++;}
        if(s[i] == '2'){f[2]++;}
        if(s[i] == '3'){f[3]++;}
        if(s[i] == '4'){f[4]++;}
        if(s[i] == '5'){f[5]++;}
        if(s[i] == '6'){f[6]++;}
        if(s[i] == '7'){f[7]++;}
        if(s[i] == '8'){f[8]++;}
        if(s[i] == '9'){f[9]++;}
    }
    for(i=0; i<10; i++)
    {
    printf("%d ", f[i]);
    }
    return 0;
}
