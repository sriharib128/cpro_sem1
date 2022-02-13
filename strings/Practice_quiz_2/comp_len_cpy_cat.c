#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int str_len(char *c)
{
    int ct=0;
    while(*c != '\0')
    {
        ct++;
        c++;
    }
    return ct;
}

int str_comp (char *a , char *b)
{
    while((*a!='\0') && (*b!='\0'))
    {
        if(*a>*b)
            return 1;
        else if(*a<*b)
            return -1;
        a++;b++;
    }
    if ((*a=='\0') && (*b != '\0'))
        return -1;
    else if ((*a !='\0') && (*b == '\0'))
        return 1;
    else 
        return 0;
}
void str_cpy(char *dest , char * source)
{   
    int x = strlen(source)+1;
    // dest = (char*)malloc(x);
    while(x--)
    {
        *dest = *source;
        dest++;
        source++;
    }
}

char* str_cat(char *dest,char *source)
{
    char *ans = (char*)malloc(strlen(dest)+strlen(source)+1);
    char * temp = ans;
    while(*dest != '\0')
    {
        *ans = *dest;
        ans++;dest++;
    }
    while(*source != '\0')
    {
        *ans = *source;
        ans++;source++;
    }
    *ans = '\0';
    return temp;
}
int main()
{
    char * a = "SRI";
    char * b = "HARI";
    
    printf("string_comp==>%d  and strcmp==>%d\n",str_comp(a,b),strcmp(a,b));
    
    printf("string_len==>%d  and strlen==>%ld\n",str_len(a),strlen(a));
    
    char *c = str_cat(a,b);
    char *d = str_cat(a,b);
    printf("str_cat==>%s and strcat==>%s\n",c,d);
    
    str_cpy(c,b);strcpy(d,b);
    printf("str_cpy==>%s and strcpy==>%s\n",c,d);
    
    return 0;
}

