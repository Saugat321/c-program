/*
Student Name:Saugat karki
Subject:Programming fundamental
Program:WAP to print Name,Address,Age,Gender from user
Roll no.:
Lab sheet no.:14
Date:15 november,2016
*/


   #include<stdio.h>

   int main()
   {
   int i,age;
   char name[20], address[10],gender[10];
   printf("Enter your age: \n");
   scanf("%d",&age);
   printf("Enter your name: \n");
   scanf("%s",name);
   printf("Enter your address: \n");
   scanf("%s",address);
   printf("Enter your gender: \n");
   scanf("%s",gender);

   for(i=0; i<10; i++);
   {

       printf("%s=My name is saugat",name);
       printf("%s=My address is",address);
       printf("%s=My gender is",gender);
       printf("%d=My age is",age);

       }

   return 0;
   }

