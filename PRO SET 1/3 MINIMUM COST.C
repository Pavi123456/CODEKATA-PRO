#include<stdio.h>
#include<string.h>
int main()
{
 char s1[100],s2[100];
 int cost=0;
int i,j;

scanf("%s %s",s1,s2);
int n=strlen(s1);
int m=strlen(s2);
if(n<=m)
{
for(i=0,j=0;i<n,j<m;i++,j++)
{
if(s1[i]!=s2[j])
{
cost++;
}
else if(s1[i]==s2[j])
{
continue;
}
}

printf("%d",cost);
}
else
{

for(i=0,j=0;i<m,j<n;i++,j++)
{
if(s1[i]==s2[j])
{
continue;
}
else if(s1[i]!=s2[j])
{
cost++;
}
}
printf("%d",cost);
}
return 0;
}



