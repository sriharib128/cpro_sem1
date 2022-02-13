#include <stdio.h>
#define MAXNAME_LEN 25

int main()
{
    char name[MAXNAME_LEN];
    printf("Enter ur name: ");
    scanf("%s",name); //reads till it encounters a space and then adds a null character at the end

    printf("Hello %s\n", name);

    for(int i=0;name[i]!='\0';i++)
        printf("%c\t", name[i]);

printf("\n");

    for(char *ch = name; *ch!='\0';++ch)
        printf("%3c",*ch);

printf("\n");

    for(char *ch = name,i=0; *ch!='\0';++ch,++i)
        printf("%p<-->%p\n",ch ,&name[i]);

printf("\n");

    for(int i=0;name[i]!='\0';i++)
        printf("%s\n",&name[i]);

    return 0;
}
//character pointer points to an object which holds a character value
//integer pointer points to an object which holds a character value
