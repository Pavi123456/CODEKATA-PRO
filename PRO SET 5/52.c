#include<stdio.h>
int main()
{
		int arr[100],c=0,i,j,t;
		  for(i=0;i<8;i++)
		   {
		       scanf("%d",&arr[i]);
		   }
		   
		  for(i=0;i<8;i++)
		  {
		      for(j=i+1;j<8;j++)
		      {
		          if(arr[i]>arr[j])
		          {
		              t=arr[i];
		              arr[i]=arr[j];
		              arr[j]=t;
		          }
		      }
		  }
		  
		   for(i=0;i<4;i++)
		   {
		       if((2*arr[i])==(arr[i+4]))
		       {
		         c++;
		       }
		   }
		   printf(c==4?"yes":"no");
	
}
