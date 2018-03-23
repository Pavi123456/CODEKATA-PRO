#include <stdio.h>
#include<string.h>
int main(void) 
{
	int len1,len2,max=0,i;
	char a[100],b[100];
	printf("\nEnter the first string:  ");
	scanf("%s",a);
	printf("\nEnter the second string:  ");
	scanf("%s",b);
	len1=strlen(a);
	len2=strlen(b);
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
		if(a[i]==b[i])
		{
			printf("%c",a[i]);
		}
		else
		{
			break;
		}
	}
	return 0;
}
