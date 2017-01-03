/*
Name:Saugat Karki
Subject:Programming fundamental
Lab sheet 
Roll No
program
Date=janaury 3,2017
*/

#include<stdio.h>




 int main()
 {
 int a=1,b=1,n,sum;
 printf("Enter any no.");
 scanf("%d",&n);
 do
 {
	 
	 sum=a+b;
	 printf("  %d     ",a);
	 a=b;
	 b=sum;
	 n--;
 }
 while(n>0);
 return 0;
}
 
