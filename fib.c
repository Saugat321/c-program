
#include<stdio.h>
int main()
{
	int i,a=1,b=1,n;
	printf("Enter the number:");
	scanf("%d",&n);
	
	  for(i=1;i<=n/2;i++)
	  {
		  
		  printf("\t%d \t%d",a,b);
		  
		  a+=b;
		  b+=a;
		  
	  }
		  return 0;
	  }
