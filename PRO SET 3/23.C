#include <stdio.h>
int main(void)
{
	int c=0,j=1,check=0,i;
	char str[100];
	scanf("%s",&str);
	
	if(strlen(str)>=8)
	{
	for(i=0;str[i]!='\0';i++)
	{
		if(str[i]=='L')
		{
			c--;
			if(c==4||c==-4)
			{
				
				j++;
				c=0;
				check++;
			}
		}
		else if(str[i]=='R')
		{
			c++;
			if(c==4||c==-4)
			{
				
				j++;
				c=0;
				check++;
			}
		}
	}
	}
	if(check>0)
	{
		printf("YES");
	}
	else
	{
		printf("NO");
	}
	return 0;
}
