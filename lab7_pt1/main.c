//
//  main.c
//  lab7_pt1
//
//  Created by Khalil Gatto on 10/20/23.
//


/*
 
 You are given a two-dimensional array of size 7x7 that contains only binary values. You are to
 compute the “parity” values of this array.
 
 For a given row (column) of the array, the corresponding parity bit is equal to 1 if the number of
 ones in that row (column) is odd, and 0 otherwise.
 
 The total parity bit is 1 if the number of ones in the entire 2D array is odd, and 0 otherwise.
 
 Develop a C program that:
 • Reads a 7x7 two-dimensional array from the file array.txt (array2.txt). Use the following
   function prototype for reading the array.
 • Computes the horizontal and vertical parity bit
 • Computes the total parity bit.
 • Prints the result to the screen as shown in the sample code execution
 
 */

#include <stdio.h>

#define SIZE 7


void read_ar(FILE *in, int x[][7])
{
    // If x[row][col] has a odd number of 1s, then partity_bit = 1.
    // Otherwise, parity_bit = 0.
    
    int file_data;
    int row = 0;
    
    for (int i = 0; i < SIZE; i++)
    {
        for (int j = 0; j < 7; j++)
        {
            fscanf(in, "%d", &x[i][j]);
        }
    }
    
//    for (int i = 0; i < SIZE; i++) //DEBUGGING.
//    {
//        for (int j = 0; j < 7; j++)
//        {
//            printf("%d", x[i][j]);
//
//            if (j == 6)
//            {
//                printf("\n");
//            }
//        }
//    }
}



int main()
{
    
    FILE *inp;
    int x[SIZE][7];
    int num_ones = 0;
    int parity_bit_row[7];
    int parity_bit_col[7];
    int total_parity_count = 0;
    int total_parity_bit;
    
    inp = fopen("array2.txt","r"); //FIX ME! This only includes 1 file. MUST INCLUDE BOTH.
    
    if (inp == NULL)
    {
        printf("This file is not available.\n");
    }
    else
    {
        
        read_ar(inp, x);
        /*------------------------------------------------------------------------------- */
        for (int i = 0; i < SIZE; i++) //ROW
        {
            for (int j = 0; j < 7; j++)
            {
                if (x[i][j] == 1)
                {
                    num_ones++;
                }
            }
            if (num_ones % 2 == 1) //if odd, parity bit is 1 for [i] row.
            {
                parity_bit_row[i] = 1; //stores bit in array.
            }
            else
            {
                parity_bit_row[i] = 0;
            }
            num_ones = 0; //reset var after each scan of a row.
        }
        /*------------------------------------------------------------------------------- */
        for (int i = 0; i < SIZE; i++) //COLUMN
        {
            for (int j = 0; j < 7; j++)
            {
                if (x[j][i] == 1) //switched j and i. so, itll loop through rows then switch to next column and repeat.
                {
                    num_ones++;
                    total_parity_count++;
                }
            }
            
            if (num_ones % 2 == 1) //if odd, parity bit is 1 for [i] row.
            {
                parity_bit_col[i] = 1;
            }
            else
            {
                parity_bit_col[i] = 0;
            }
            num_ones = 0;
        }
    }
    /*------------------------------------------------------------------------------- */
    printf("Horizontal Partiy: ");
    for (int i = 0; i < 7; i++)
    {
        printf("%d ", parity_bit_row[i]);
    }
    printf("\nVertical Partiy: ");
    for (int i = 0; i < 7; i++)
    {
        printf("%d ", parity_bit_col[i]);

    }
//    printf("\ntotal_partity_count = %d", total_parity_count); //DEBUGGING
    if (total_parity_count % 2 == 1)
    {
        total_parity_bit = 1;
    }
    else
    {
        total_parity_bit = 0;
    }
    printf("\nTotal Parity bit: %d", total_parity_bit);
    printf("\n");
    
    
    return 0;
}
