//
//  main.c
//  lab0_p2
//
//  Created by Khalil Gatto on 9/1/23.
//

/*
 
Problem 2 (18 points): Write a program that
- reads in a three-digit integer number from the keyboard and keeps the value in 1 integer (int) variable, then
- prints out the product of all three digits.
Note: The number entered by the user is guaranteed to be a three-digit number and its hundredth digit will never be 0.
Hint: Use division by 10 or 100 and/or modulo (% operator) by 10 or 100 to isolate each of the digits.
Sample code execution 1: bold entered by a user
Enter an integer: 358
The product of 3, 5, 8 is 120
 
 */

#include <stdio.h>

int main() {
    
    int input_num;
    
    printf("Enter an integer: ");
    scanf("%d", &input_num);
    
    int num1 = (input_num % 1000) / 100; //fascinating
    int num2 = (input_num % 100) / 10;
    int num3 = input_num % 10;
    
    
    int product_of = num1 * num2 * num3;
    printf("The product of %d, %d, %d is %d\n", num1, num2, num3, product_of);

    
    
    return 0;
}
