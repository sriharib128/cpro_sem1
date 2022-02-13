#include <stdio.h>

int main()
{
    int n,k;
    scanf("%d %d",&n,&k);
    char c[n+2];
    scanf("%s",c);
    int max =-1;
    int a[n+1];
    
    int i=0;
    int j=0;
    int ct=0;
        
        int f_c[26]={};
        
        for(j=0;j<n;j++)
        {  
            int x = (int)(c[j]-'a');
            if((f_c[x]==0) && (ct>=k))
            {   break; }
            if(f_c[x]!=0)
            {    f_c[x]++;}
            if(f_c[x]==0)
            {
                f_c[x]++;
                ct++;
            }
        }
        int sum=0;
        for(int k=0;k<26;k++)
           sum+=f_c[k];
        a[i]=sum;
    for(i=1;i<n;i++)
    {
        a[i] = a[i-1]- 1;
        if(c[i-1]!=c[i])
            
        while(j<n && ct<k)
        {
            int x = (int)(c[j]-'a');
        }

    }

}