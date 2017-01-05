
#include<stdio.h>
  int main()
  {
	int i,j,mul,n;
	printf("Enter a number for multiplication table");
	scanf("%d",&n);
	i=1;
	  while(i<=n)
	  {
		  j=1;
		  while (j<=10)
		  {
		   mul=(i*j);
		   printf("  %d  ",mul);
		   j++;
	   }
	   printf("\n");
	   i++;
   }
   return 0;
}
