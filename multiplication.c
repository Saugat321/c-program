
#include<stdio.h>
  int main()
  {
	int i,j,mul,n;
	printf("Enter a number for multiplication table");
	scanf("%d",&n);
	  for(i=1;i<=n;i++)
	  {
	  for(j=1;j<=10;j++)
	  {
		  mul = i*j;
		  printf("%d \t", mul);
	  }
	  printf("\n");
	  }
	  return 0;
}
