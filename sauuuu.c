/*
Student Name:Saugat karki
Subject:Programming Fundamental
Roll:
Lab No.:04
Program:To calculate the area of trangle
Date:28/09/2016
*/

#include<stdio.h>
#include<conio.h>
#include<math.h>

    void main(){
    float a,b,c,S=0,A=0,d=0;
    printf("enter the first number: ");
    scanf("%f",&a);
    printf("enter the second number:");
    scanf("%f",&b);
    printf("enter the third number: ");
    scanf("%f",&c);
    S=(a+b+c)/2;
    d=S*(S-a)*(S-b)*(S-c);
    printf("side of trangle= %f",S);
    A= pow(d,0.5);
    printf("area= %f",A);
    getch();
    }
