#include<stdio.h>
void main()
{
	int k;
	int i,n=1,rem,base,bin,b;

	scanf("%d",&k);
	for(i=0;i<k;i++)
	{
		n=n*2;
	}
	
	for(i=0;i<n;i++)
	{
		b=i;
		rem=0,base=1,bin=0;
		while(b!=0)
		{
			rem=b%2;
			bin=bin+rem*base;
			base=base*10;
			b=b/2;
		}
		printf("%d \n",bin);
	}
}
