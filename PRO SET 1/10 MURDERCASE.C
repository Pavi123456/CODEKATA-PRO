#include<stdio.h>
int main()
{
    int num,a[10],i,sum=0;
    scanf("%d",&num);
    for(i=0;i<num;i++)
    {
        scanf("%d",&a[i]);
    }
      for(i=0;i<num;i++)
        {
            if(a[i]!=num)
    {
      
            sum=sum+a[i];
        }
    }
    printf("%d",sum);
    return 0;
}
