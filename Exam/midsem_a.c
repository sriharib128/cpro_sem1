#include <stdio.h>

int main(){
    int ct[9];

    for(int i=0;i<=8;i++)
        ct[i]=0;

    for(int i=0;i<100;i++)
        for (int j=0;j<30;j++)
        {   
            int a;
            scanf("%d",&a);
           ct[a]++;
        }
    for(int i=0;i<=8;i++)
        printf("%d\n",ct[i]);
    return 0;    
}
