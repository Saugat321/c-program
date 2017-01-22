/*
Student Name:Saugat karki
Subject:Programming fundamental 
Program:WAP to find reverse of a given number 
Roll no.:20
Lab no.:31
Date:22 january,2017
*/

#include<stdio.h>
int main(){
    int num,r,reverse=0;

    printf("Enter any number: ");
    scanf("%d",&num);

    while(num){
         r=num%10;
         reverse=reverse*10+r;
         num=num/10;
    }

    printf("Reversed of number: %d",reverse);
    return 0;
}
