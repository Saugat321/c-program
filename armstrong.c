/*
Student Name:Saugat karki
Subject:Programming fundamental 
Program:WAP to find armstrong number upto n terms using function
Roll no.:20
Lab no.:31
Date:22 january,2017
*/
 
#include <stdio.h>
 
int main()
{
    int i, n, num, lastDigit, sum = 0;
 
    /* Reads a number from user */
    printf("Enter any number to find Armstrong number upto: ");
    scanf("%d", &n);
 
 
    printf("All Armstrong numbers between 1 to %d:\n", n);
 
    /*
     * Iterates from 1 to n and prints the number if it is armstrong
     */
    for(i=1; i<=n; i++)
    {
        num = i;
        sum = 0;
 
        /* Finds the sum of cube of digits of number */
        while(num!=0)
        {
            lastDigit = num % 10;
            sum += lastDigit * lastDigit * lastDigit;
            num = num / 10;
        }
 
        /*
         * Checks whether the current number is Armstrong number or not
         */
        if(i==sum)
        {
            printf("%d is ARMSTRONG NUMBER\n", i);
        }
    }
 
    return 0;
}
