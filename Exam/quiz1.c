#include <stdio.h>
#include <math.h>

int main()
{
	long int n,k;
	scanf("%ld %ld",&n,&k);
	long int ans = 1;
	while(n--)
	{
		for(long int i=ans+1;i<=100000;i++)
		{	
			int fact =0;
			for(long int j = 1 ; j<=i;j++)
			{
				// if(j*j == i)
				// 	fact+=1;
				// else if(i%j == 0)
				// 	fact+=2;
				if(i%j==0)
					fact+=1;
			}

			if(fact == k) 
				{ans =i ; break;}
		}
	}
	printf("%ld",ans);
	return 0;
}