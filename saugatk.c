/*
Student Name:Saugat karki
Subject:Programming Fundamental
Program:WAP
Roll no.:
Lab no:
Date:24 october,2016
*/

    #include<stdio.h>
    #include<conio.h>
       int main()
       {
        int i=0,sum=0,n;

        printf("Enter n numbers");
        scanf("%d",&n);

        do{
                sum+=i;
        printf("sum of numbers is: %d",sum);
        i++;
        }
        while(i<=n);
        return 0;
       }


