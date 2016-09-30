/*
Name:Saugat Karki
Subject:Programming Fundamental
Program:WAP to find out marks obtain by the student in percentage
Lab No.:05
Roll:
Date:30/09/2016
*/


#include<stdio.h>
#include<conio.h>

   void main(){

   char name[20];
   float I,D,F,A,C,O,P,percentage,total;

    printf("enter your name: \n");
    scanf("%s",&name);

   printf("Enter the marks of interactive skills: \n");
   scanf("%f",&I);
   printf("Enter the marks of discrete structure: \n");
   scanf("%f",&D);
   printf("Enter the marks of fundamental of software engineering: \n");
   scanf("%f",&F);
   printf("Enter the marks of algebra: \n");
   scanf("%f",&A);
   printf("Enter the marks of computer architecture: \n");
   scanf("%f",&C);
   printf("Enter the marks of organization management: \n");
   scanf("%f",&O);
   printf("Enter the marks of programming fundamental: \n");
   scanf("%f",&P);

   total=(I+D+F+A+C+O+P);
   printf("Total marks of the student %s is %f:",name,total);

   percentage=total/7;
   printf("Total percentage of student %s is %f:",name,percentage);
   getch();
   }



