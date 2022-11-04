#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    char *s;
    s = malloc(1024 * sizeof(char));
    scanf("%[^\n]", s);
    s = realloc(s, strlen(s) + 1);
    int space = 0;
    for(int i=0; i<strlen(s); i++)
    {
        if(s[i] == ' ')
        {
            for(int j=space; j<i; j++)
            {
                printf("%c", s[j]);
            }
            printf("\n");
            space = i+1;
        }
    }
    for(int k = space; k<strlen(s); k++)
    {
    printf("%c", s[k]);
    }
    return 0;
}
