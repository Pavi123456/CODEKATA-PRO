#include<stdio.h>
int main()
{
int num[30];
int t,j,arr,n;

scanf("%d", &n);

for(t=0;t<n;++t)
scanf("%d",&num[t]);
for(t=0;t<n;++t)
{
for(j=t+1;j<n;++j)
{
if(num[t]<num[j])
{
arr=num[t];
num[t]=num[j];
num[j]=arr;
}
}
}

for(t=0;t<n;++t)
{
printf("%d\n",num[t]);
}
}
