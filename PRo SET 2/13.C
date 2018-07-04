#include <stdio.h>
int main()
{
	int n,q,u[10],v[10],arr[10];
	int i,j,k,min=0;
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
	     min=arr[0];
	    for(i=u[k];i<=v[k];i++)
	    {
	       if(arr[i]<min)
	       {
	       min=arr[i];
	       }
	      
	    }
	   printf("%d\n",min);
	}

	    return 0;
}
