#include <stdio.h>


int main()
{	
	int n,m,k;
	scanf("%d %d %d",&n,&m,&k);

	char e[1001];//tichnas
	char s[1001];//gona check	

	scanf("%s",e);
	scanf("%s",s);

	int ct =0;
	for(int i=0;i<n;i++)
	{	int p=i;
		int flag =1;
		for(int j=0;j<m;j++)
		{
			if( ((e[p]-s[j]) != k) && ((s[j]-e[p]) != k) )
				flag=0;
			p++;
		}
		if(flag==1)
			ct++;
	}
	printf("%d",ct);
	
	return 0;
}