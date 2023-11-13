//
//  main.c
//  lab5_pt1
//
//  Created by Khalil Gatto on 9/29/23.
//


/*
 
 We would like to find sum of all integers greater than or equal to a given value.
 Write a C program that searches the file for integers that are greater than or equal to the integer entered by the user.
 
 Your main function should call a C function that receives as input a file pointer and a target integer, and returns the sum of all
 integers >= the target value.
 
 */

#include <stdio.h>


int SumInts(FILE *inp, int target);


int main()
{
    
    FILE *inp;
    int target;

    
    printf("Find the sum of all values above what threshold? ");
    scanf("%d", &target);
    
    inp = fopen("MyDataF.dat","r");
    
    int sum = SumInts(inp, target);
    
    printf("The sum of all values >= %d was found to be %d\n",target, sum);

    
    return 0;
}

int SumInts(FILE *inp, int target)
{

    int file_data;
    int sum = 0;
    
    if(inp == NULL)
    {
        printf("Cannot read file.\n");
    }
    else
    {
        while (fscanf(inp,"%d", &file_data) != EOF)
        {
            if (file_data >= target)
            {
                sum += file_data;

            }
            else
            {
                continue;
            }
        }
    }
    
    return sum;
}
