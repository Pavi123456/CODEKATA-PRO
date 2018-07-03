#include<stdio.h>
#include<string.h>
int main()
{
char s1[100],s2[100];
scanf("%s %s",s1,s2);
int cost=0,i,j;
int n = strlen(s1);
int m= strlen(s2);

for(i=0,j=0;i<n,j<m;i++,j++)
{
       if(s1[i]!=s2[j])
       {
          if(s2[j]>s1[i])
             cost=cost+(s2[j]-s1[i]);  
          else
             cost=cost+(s1[i]-s2[j]);
       }
       else if(s1[i]==s2[j])
       {
           continue;
       }
    }
    printf("%d",cost);
    return 0;
}
