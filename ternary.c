/*
Student Name:Saugat karki
Subject:Programming fundamentals
Program:WAP to check whether year is leap year or not using ternary operator
Roll no,:
Lab no.:16
Date:2017,January 8
*/
#include<stdio.h>
int main(){


	int year;
	
        printf("Enter any year");
        scanf("%d",&year);

         (year%4==0 && year%100!=0) ? printf("Leap Year"): printf("Common year");
	  
	
return 0;	
}
