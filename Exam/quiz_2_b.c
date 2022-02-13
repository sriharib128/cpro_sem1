#include <stdio.h>

int main()
{
    int n,k;
    scanf("%d %d",&n,&k);
    char c[n+2];
    scanf("%s",c);
    int max =-1;
    
    for(int i=0;i<n;i++)
    {   
        int ct=0;
        int own=0;
        
        char f_c[26]={};
        
        for(int j=i;j<n;j++)
        {  
            int x = (int)(c[j]-'a');
            if((f_c[x]==0) && (ct>=k))
            {   break; }
            if(f_c[x]!=0)
            {    own++;}
            if(f_c[x]==0)
            {
                f_c[x]++;
                ct++;
            }
        }
        int sum=0;

        for(int j=0;j<26;j++)
        {   
           sum+=f_c[j];
        }
    
        if((sum+own)>=max)
            max=sum+own;
    }
    printf("%d",max);
}