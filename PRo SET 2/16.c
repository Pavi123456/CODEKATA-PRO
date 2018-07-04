#include <stdio.h>
int main() {
	int n,a[100],i,j;
	int arr[100],count=0;
    scanf("%d",&n);
	for(i=0;i<n;i++)
	{
	scanf("%d",&arr[i]);
	arr[i]=1;
	}
	for(i=1;i<n;i++)
	{
	    if(arr[i]>arr[i-1])
	   arr[i]=arr[i-1]+1;
	}
	for(i=0;i<n;i++)
	count=count+arr[i];
	printf("%d",count);
	return 0;
}
