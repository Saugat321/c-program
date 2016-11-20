/*
Student Name:Saugat karki
Subject:Programming Fundamental
Program:WAP to find area,perimeter of rectangle & area of trapezium
Roll No.:
Lab No.:15
Date:November 20,2016
*/


#include<stdio.h>
#include<stdlib.h>
int main()
{
  int a,l=0,b=0,height=0;
  float area=0,perimeter=0;
  x:
  printf("--------------Menu-------------: \n");
  printf("-------------------Choose anyone------------ :/n");
  printf("Enter 1 for the length of rectangle :\n");
  printf("Enter 2 for the perimeter of rectangle :\n");
  printf("Enter 3 for area of trapezium :\n");
  printf("Enter 4 for Exit: \n");
  
  printf("----------Enter your choice-----------: \n");
  
  
  
  scanf("%d",&a);
  
  switch(a){
	  
	  case 1:
	           printf("Enter the length of rectangle: \n");
	           scanf("%d",&l);
	           printf("Enter the base of rectangle: \n");
	           scanf("%d",&b);
	           area=l*b;
	           printf("area of rectangle of %f",area);
	           goto x;
	           break;
	           
	           
	   case 2:
				printf("Enter the length of rectangle: \n");
				scanf("%d",&l);
				printf("Enter the base of rectangle: \n");
				scanf("%d",&b);
	           perimeter=2*(l+b);
	           printf("perimeter of rectangle of %f",perimeter);
	           goto x;
	           break;
	   
	   case 3:
	            printf("Enter the base of trapezium: \n");
	            scanf("%d",&a);
	            printf("Enter the length of trapezium: \n");
	            scanf("%d",&l);
	            printf("Enter the height of trapezium: \n");
	            scanf("%d",&height);
	            area= 0.5*(a+l)*height;
	            printf(" area of trapezium of %f",area);
	            goto x;
	            break;
	            
	     case 4:
	            exit (0);       
	            
	   
   }
   
   return 0;
   }        
	     
	            
  
