/*
Student Name:Saugat karki
Subject:Programming Fundamental
Program:WAP that takes three inputs as integer from keyboard then print sum the average the product the smallest &n largest of three numbers
Roll no.:
Lab no:
Date:24 october,2016
*/

    #include<stdio.h>

       int main()
       {
             int a,b,c,smallest,largest,sum,product,average;

             printf("Enter the first number :\n");
             scanf("%d",&a);
             printf("Enter the second number :\n");
             scanf("%d",&b);
             printf("Enter the third number :\n");
             scanf("%d",&c);

             sum=a+b+c;
             printf("\nThe sum of three numbers is: %d",sum);

             product=a*b*c;
             printf("\nThe product of three numbers is: %d",product);

             average=(a+b+c)/3;
             printf("\nThe average of three numbers is: %d",average);

             if(a>b&&a>c)
             printf("\nlargest number is :%d",a);
             if(b>a&&b>c)
             printf("\nlargest number is :%d",b);
             if(c>a&&c>b)
             printf("\nlargest number is:%d",c);

             getch();
       }




