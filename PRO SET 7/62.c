#include <stdio.h>
#include<string.h>
int main() 
{
 char s[10];
 int n,count=0,i,j;
 int a,b;
 scanf("%s",s);
 int len=strlen(s);
 for(i=0;i<len;i++)
 {
     for(j=i+1;j<len;j++)
     {
         if(s[i]==s[j])
         {
             for(a=i,b=j;a<j,b>=i;a++,b--)
             {
                 if(s[i]==s[b])
                 count++;
             }
         }
     }
 }
 n=len-count;
 printf("%d",n);
return 0;
}
