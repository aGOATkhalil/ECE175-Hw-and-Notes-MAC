//
//  main.c
//  lab2
//
//  Created by Khalil Gatto on 9/8/23.
//


/*
 
 Write a C program that accepts three integers and find the difference
 between the maximum and the minimum.
 
 Sample code executions:
 Enter three integers: 4 7 2
 7 - 2 = 5
 
 Enter three integers: -10 -1 -5
 -1 - -10 = 9
 
 Enter three integers: 109 999 175
 999 - 109 = 890
 
 Enter three integers: 0 -10 -5
 0 - -10 = 10
 
 */


#include <stdio.h>

int main()
{
    int num1, num2, num3, max_num, min_num;
    
    printf("Enter three integers: ");
    scanf("%d%d%d", &num1, &num2, &num3);
    
    //Now determine which number is greater than or less than... Only using what we learned and no arrays or algorithms.
    
    if ((num1 > num2) && (num1 > num3))
    {
        max_num = num1;
        
    }
    else if ((num2 > num1) && (num2 > num3))
    {
        max_num = num2;
    }
    else if ((num3 > num1) && (num3 > num2))
    {
        max_num = num3;
    }
    else
    {
        printf("Something went wrong 1");
    }
    //Determine min value
    if ((num1 < num2) && (num1 < num3))
    {
        min_num = num1;
    }
    else if ((num2 < num1) && (num2 < num3))
    {
        min_num = num2;
    }
    else if ((num3 < num1) && (num3 < num2))
    {
        min_num = num3;
    }
    else
    {
        printf("Something went wrong 1");
    }
    
    int difference_of_values = max_num - min_num;
    
    printf("%d - %d = %d",max_num,min_num,difference_of_values);
    printf("\n");
    //printf("Max val =  %d\nMin val = %d\n",max_num, min_num);
    

    
    
    
    return 0;
}
