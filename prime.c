/*
Student Name:Saugat karki
Subject:Programming fundamental
Program:WAP to check whwther the entered number is prime or not using functin
Roll no.:20
Lab no.:31
Date:22 january,2017
*/

#include<stdio.h>
#include<math.h>
int main()
{
    int prime(int x);
    int n,f;
    printf(" ENTER THE ANY NUMBER \n");
    scanf("%d",&n);
    f=prime(n);
    if(f==1)
	printf(" NUMBER IS PRIME \n");
    else
	printf("NUMBER IS NOT PRIME \n");
  
    }
 
int prime(int x)
{
       int i,a;
	a=(x);
       if((x==1)||(x==2))
	  return(0);
       else
       {
	     for(i=2;i<=a;i++)
		if(x%i==0)
		    return(0);
		return(1);
	}
}
