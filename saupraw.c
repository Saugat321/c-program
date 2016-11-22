/*
Student Name:Saugat karki
Subject:Programming Fundamental
Program:WAP to find sum of first 'n' natural number
Roll No.:
Lab sheet no.:16
Date:22 november,2016
*/

#include<stdio.h>

    int main()
    {
		int i,sum=0,n;
		printf("Enter any number: \n");
		scanf("%d",&n);
		
		
		for (i=0;i<=n;i++){
			sum=sum+i;
			printf("The sum is: %d %d : \n",i,sum);
			
		}
		
		
		
		
		
		
		
	return 0;	
	}
