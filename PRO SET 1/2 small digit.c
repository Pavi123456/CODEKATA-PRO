#include <stdio.h>
int main()
{
    long int n;
    int k=0,i,rem,n1,a[6],c=0;
	scanf("%ld %d\n",&n,&n1);
	while(n!=0)
	{
	    rem=n%10;
	    a[k]=rem;
	    k++;
	    n=n/10;
	}
	for(i=k-1;i>=0;i--)
    {
       c++;
       if(c<=n1)
       {
           continue;
       }
       else{
           printf("%d ",b[i]);
       }
    }
	return 0;
}
