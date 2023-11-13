//
//  main.c
//  lab3
//
//  Created by Khalil Gatto on 9/15/23.
//

#include <stdio.h>

int main()
{

    /*
     Write a C program that asks the user to enter three lengths. Check to see if the three lengths
     can be formed into an isosceles triangle, accute triangle, triangle, or no triangle at all. Report
     the results to the user.
     */
    
    double a,b,c;
    
    printf("Enter in three sides of a triangle a,b,c: ");
    scanf("%lf%lf%lf", &a, &b, &c);
    
    
    
    if ((a + b > c) && (b + c > a) && (c + a > b))
    {
        //If true then its a triangle.
        
        if ((a == b) || (a==c) || (a==b))
        {
            printf("\nSides a = %.2lf, b = %.2lf, c = %.2lf will form an isosceles triangle.\n", a, b, c);
            if((a*a + b*b > c*c) && (b*b + c*c > a*a) && (c*c + a*a > b*b))
            {
                printf("\nAlso, sides a = %.2lf, b = %.2lf, c = %.2lf will form an acute triangle.\n", a, b, c);
            }
        }
        
        else if ((a*a + b*b > c*c) && (b*b + c*c > a*a) && (c*c + a*a > b*b))
        {
        printf("\nSides a = %.2lf, b = %.2lf, c = %.2lf will form an acute triangle.\n", a, b, c);
        }
        else
        {
            printf("\nSides a = %.2lf, b = %.2lf, c = %.2lf will form a triangle.\n", a, b, c);
        }
    
    }
    else
    {
        printf("\nSides a = %.2lf, b = %.2lf, c = %.2lf cannot form a triangle.\n", a, b, c);
    }
    
    
    return 0;
}
