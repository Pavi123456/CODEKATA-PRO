#include <stdio.h>
int main()
{
	int n,q,u,v,arr[10],i,j,k;
	scanf("%d %d",&n,&q);
	for(i=1;i<=n;i++)
	{
	    scanf("%d",&arr[i]);
	}
	for(k=1;k<=q;k++)
	{
	    scanf("%d %d",&u[k],&v[k]);
	}
		for(k=1;k<=q;k++)
	{
	     int sum=0;
	    for(i=u[k];i<=v[k];i++)
	    {
	       
	    sum=sum+arr[i];
	    
	    }
	    printf("%d\n",sum);
	}

	    return 0;
}
