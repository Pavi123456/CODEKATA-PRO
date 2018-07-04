#include<stdio.h>
int main()
{
int num[30];
int t,j,a,n;

scanf("%d", &n);

for(t=0;t<n;++t)
scanf("%d",&num[t]);
for(t=0;t<n;++t)
{
for(j=t+1;j<n;++j)
{
if(num[t]<num[j])
{
a=num[t];
num[t]=num[j];
num[j]=a;
}
}
}

for(t=0;t<n;++t)
{
printf("%d\n",num[t]);
}
}
