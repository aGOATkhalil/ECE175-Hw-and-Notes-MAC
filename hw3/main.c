/*
 
  Created by Khalil Gatto on 9/8/23.
  This program does FIXME
 
*/

#include <stdio.h>

int main() {

    /*
     
     Write a C program that takes in an integer in the range 10-99 (inclusive) as input.
     The outputs are 1) a countdown starting from the integer, and stopping when both output digits are odd and
     2) average from all count-down numbers.
    
     */
    
    int num1;
    scanf("%d", &num1);
    
    if ((num1 >= 10) && (num1 <= 99 ))
    {
        //main code.
        int tenths_digit = (num1 % 100) / 10;
        int first_digit = (num1 % 10);
//        printf("%d\n",tenths_digit);
//        printf("%d\n",first_digit);
        
        
            
    
    }
    
    
    return 0;
}
