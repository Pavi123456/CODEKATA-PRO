#include<stdio.h>
int main()
{
    char s[100];
    int i,u[26]={0},total=0;
    gets(s);
     
    for(i=0;s[i]!='\0';i++)
    {
        if('a'<=s[i] && s[i]<='z')
        {
            total=total+(!u[s[i]-'a']);
            u[s[i]-'a']=1;
        }
        else if('A'<=s[i] && s[i]<='Z')
        {
            total=total+(!u[s[i]-'A']);
            u[s[i]-'A']=1;
        }
    }
     
    if(total==26)
    {
        printf("yes");
    }
    else
    {
        printf("no");
    }
}
