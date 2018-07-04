#include <stdio.h>
int main() {
	int n,k,i,flag=0;
	int arr[100];
    scanf("%d %d",&n,&k);
    
	for(i=0;i<n;i++)
	{
	scanf("%d",&arr[i]);
	}
int j;
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            
            if(arr[i]+arr[j]==k)
            flag=1;
        }
    }
    if(flag==1)
    printf("yes");
    else
    printf("no");
    return 0;
    
}
	

