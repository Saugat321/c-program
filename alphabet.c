/*
Student Name:Saugat karki
Subject:Programming fundamentals
Program:WAP to check whether character is an alphabet or not using ternary operator
Roll no,:
Lab no.:16
Date:2017,January 8
*/
     
#include <stdio.h>
 
int main()
{
    char ch;
     
   
    printf("Enter any character: ");
    scanf("%c", &ch);
     
    printf("It is %s", (((ch>='a' && ch<='z') || (ch>='A' && ch<='Z')) ? "ALPHABET" : "NOT APLHABET") );
 
    return 0;
    }

