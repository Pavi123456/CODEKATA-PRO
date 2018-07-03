#include <stdio.h>
#include<string.h>
int main() 
{
	int len1,len2,max=0,i;
	char a1[100],b1[100];
	
	scanf("%s",a1);

	scanf("%s",b1);
	len1=strlen(a1);
	len2=strlen(b1);
	if(len1>len2)
	{
		max=len1;
	}
	else
	{
		max=len2;
	}
	for(i=0;i<max;i++)
	{
		if(a1[i]==b1[i])
		{
			printf("%c",a1[i]);
		}
		else
		{
			break;
		}
	}
	return 0;
}
