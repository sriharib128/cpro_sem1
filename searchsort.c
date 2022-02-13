/* bsearch.c -- program calls bsearch() to search for a given value */
/* in the sorted array */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
 
#define NOSTRINGS 5
#define SIZE 26
 
int string_compare(void const *, void const *);
 
int main(void)
{
    int i;
    char strings[NOSTRINGS][SIZE];
    char search_str[SIZE];
    char *status;
 
    /* read strings from the user */
    printf("User, write in %d character strings...\n", NOSTRINGS);
    for (i= 0; i < NOSTRINGS; i++)
        scanf("%s",strings[i]);

 
    printf("\n\n");
 
    /* display array of unsorted strings */
    printf("Before Sorting:\n");
    for (i = 0; i < NOSTRINGS; i++)
        printf("%s\n",strings[i]);
 
    /* sort the array */
    qsort(strings, NOSTRINGS, SIZE, string_compare);
    printf("\n");
 
    /* array of sorted strings */
    printf("After Sorting:\n");
    for (i = 0; i < NOSTRINGS; i++)
        printf("%s\n",strings[i]);
 
    printf("\n\n");
 
    /* read the string to be searched for */
    printf("User, write in string you wish to search for...\n");
    scanf("%s",search_str);
    printf("\n");
 
    /* calling bsearch() to locate given string in the array */
    status = bsearch(search_str, strings, NOSTRINGS, SIZE, 
                       string_compare);
 
    /* verify if given value is found */
    printf("desired string is found at %p and %p\n",strings[0],status);
    long int a=0,b=0;
    if(status != NULL) 
    {
        a = (int)(status - strings[0]);
        b = a/SIZE;
    }

    printf("a=%ld b=%ld  string = %s",a,b,status);
    return 0;
}

int string_compare(void const *str1, void const *str2)
{
    return strcmp((char *)str1, (char *)str2);
}
