#include <stdio.h>

int main(){
    int ct[100][1];

    for(int i=0;i<100;i++)
        ct[i][0]=0;
    int maxf=-1;
    int maxn=0;
    for(int i=0;i<100;i++)
    {
        for (int j=0;j<30;j++)
        {   
            int a;
            scanf("%d",&a);
            if(a==0)
                ct[i][0]++;
        }
        if(maxn<ct[i][0])
            {maxn=ct[i][0];
            maxf=i;}
    }
    printf("%d",maxf);
    return 0;    
}
