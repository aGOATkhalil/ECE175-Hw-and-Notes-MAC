//
//  main.c
//  lab0
//
//  Created by Khalil Gatto on 9/1/23.
//

/*
 PROBLEM 1
 ------------------------
 Write a C program that reads two integers and displays their average and the result of their division.
 Sample code execution 1: bold entered by a user
 Enter two integers: 100 7
 average of 100 and 7 is 53.50
 100/7 is 14.29
 ------------------------
 
 */


/*
 PROBLEM 2
 ------------------------
 Problem 2 (18 points): Write a program that
 - reads in a three-digit integer number from the keyboard and keeps the value in 1 integer (int) variable, then
 - prints out the product of all three digits.
 Note: The number entered by the user is guaranteed to be a three-digit number and its hundredth digit will never be 0.
 Hint: Use division by 10 or 100 and/or modulo (% operator) by 10 or 100 to isolate each of the digits.
 Sample code execution 1: bold entered by a user
 Enter an integer: 358
 The product of 3, 5, 8 is 120
 ------------------------
 
 */

#include <stdio.h>

int main()
{
    
    int num1, num2;
    printf("Enter integer 2 integers: ");
    scanf("%d%d", &num1, &num2);

    double average_of = 1.0 * num1 + num2 / 2.0;
    double div_nums = 1.0 * num1/num2;
    
    printf("Average of %d and %d is %.2lf\n", num1, num2, average_of);
    printf("%d/%d is %.2lf\n", num1, num2, div_nums);

    return 0;
}
