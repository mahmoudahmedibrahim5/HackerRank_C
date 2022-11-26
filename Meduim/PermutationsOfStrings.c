#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define SORTED 1
#define NOTSORTED 0

char* temp;
int cntr = 0;

void swap (int a, int b, char **s)
{
    temp = s[a];
    s[a] = s[b];
    s[b] = temp;
}
int check (int a, int b, char **s)
{
    if(strcmp(s[a],s[b]) < 0) return SORTED;
    else return NOTSORTED;
}
void sort(int x, int n, char **s)
{
    /* Bubble Sort */
    for(int j=1; j<x;j++)
    {
        for(int i=1; i<x; i++)
        {
            if(check(n-i-1,n-i,s)==SORTED)
            continue;
            else {
            swap(n-i, n-i-1, s);
            }
        }
    }
}
int next_permutation(int n, char **s)
{
    cntr ++;
    
    int i, j;
    for(i=n-2; i>=0; i--)
    {
        for(j=n-1; j>i; j--)
        {
            //printf("i = %d,  j = %d\n", i, j);
            if(check(i, j, s) == SORTED)
            {
                swap(i, j, s);
                sort(n-i-1, n, s);
                return 1;
            }
        }
    }
    return 0;
}

int main()
{
	char **s;
	int n;
	scanf("%d", &n);
	s = calloc(n, sizeof(char*));
	for (int i = 0; i < n; i++)
	{
		s[i] = calloc(11, sizeof(char));
		scanf("%s", s[i]);
	}
	do
	{
		for (int i = 0; i < n; i++)
			printf("%s%c", s[i], i == n - 1 ? '\n' : ' ');
	} while (next_permutation(n, s));
	for (int i = 0; i < n; i++)
		free(s[i]);
	free(s);
	return 0;
}