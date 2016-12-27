#include<stdio.h>
//#include<conio.h>
 int main()
 {
 int a=1,b=1,sum,i;
 for(i=1;i<9;i++)
 {
 sum=a+b;
 printf("\n %d",sum);
 a=b;
 b=sum;
}
 printf("\n");
return 0;
}
