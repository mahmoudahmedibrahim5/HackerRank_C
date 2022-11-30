#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define True 1
#define False 0
/* Sort ascending */
int lexicographic_sort(const char* a, const char* b) {
    if (strcmp(a, b) > 0) {
        return False;
    }
    return True;
}
/* Sort descending */
int lexicographic_sort_reverse(const char* a, const char* b) {
     if (strcmp(a, b) < 0) {
        return False;
    }
    return True;
}
/* Sort ascending by number of distinct_characters */ /* if equal sort ascending */
int sort_by_number_of_distinct_characters(const char* a, const char* b) {
    // numA, numB are number of distinct characters in a and b
    // flag defines wether this character is distinct(0) or repeated(1)
    int numA=0, numB=0, flag = 0;
    for(int k=0; k<strlen(a); k++)
    {
        flag = 0;
        for(int l=0; l<k; l++)
        { // check if this character is found before
            if(*(a+k) == *(a+l))
            {
                flag = 1;
                break;
            }
        }
        if(flag == 0)numA++;
    }
    for(int k=0; k<strlen(b); k++)
    {
        flag = 0;
        for(int l=0; l<k; l++)
        {
            if(*(b+k) == *(b+l))
            {
                 flag = 1;
                 break;
            }
        }
        if(flag == 0)numB++;
    }
    if(numA > numB)
    {
        return False;
    }
    else if (numA == numB)
    {
        if (strcmp(a, b) > 0) 
            return False;
    }
    return True;
}
/* Sort by string length */ /* if equal sort ascending */
int sort_by_length(const char* a, const char* b) {
    if(strlen(a) > strlen(b))
        return False;
    else if (strlen(a) == strlen(b))
        return lexicographic_sort(a, b);
    return True;
}

void string_sort(char** arr,const int len,int (*cmp_func)(const char* a, const char* b)){
    const char* tmp;
    for(int i=0; i<len; i++)
    {
        for(int j=0; j<len-1; j++)
        {
            if(cmp_func(*(arr+j), *(arr+j+1)) == False)
            {
                tmp = *(arr+j);
                *(arr+j)= *(arr+j+1);
                *(arr+j+1) = tmp;
            }
        }
    }
}


int main() 
{
    int n;
    scanf("%d", &n);
  
    char** arr;
	arr = (char**)malloc(n * sizeof(char*));
  
    for(int i = 0; i < n; i++){
        *(arr + i) = malloc(1024 * sizeof(char));
        scanf("%s", *(arr + i));
        *(arr + i) = realloc(*(arr + i), strlen(*(arr + i)) + 1);
    }
  
    string_sort(arr, n, lexicographic_sort);
    for(int i = 0; i < n; i++)
        printf("%s\n", arr[i]);
    printf("\n");

    string_sort(arr, n, lexicographic_sort_reverse);
    for(int i = 0; i < n; i++)
        printf("%s\n", arr[i]); 
    printf("\n");

    string_sort(arr, n, sort_by_length);
    for(int i = 0; i < n; i++)
        printf("%s\n", arr[i]);    
    printf("\n");

    string_sort(arr, n, sort_by_number_of_distinct_characters);
    for(int i = 0; i < n; i++)
        printf("%s\n", arr[i]); 
    printf("\n");
}