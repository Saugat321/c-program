
#include<stdio.h>
  int main()
  {
	int i,j,mul,n;
	printf("Enter a number for multiplication table");
	scanf("%d",&n);
	i=1;
	do
	  {
		  j=1;
		  do
		  {
		   mul=(i*j);
		   printf("  %d  ",mul);
		   j++;
	      }  
	   while (j<=10);
	   printf("\n");
	   i++;
      }while(i<=n);
   return 0;
}
