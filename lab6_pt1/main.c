//
//  main.c
//  lab6_pt1
//
//  Created by Khalil Gatto on 10/6/23.
//

/*
    Then
    • Prints the array
    • Find the minimum value from all elements in the array and its location (index). Recall that the
    index of the first array element is 0.
    • Find the mean or average of all elements in the array
    • Find the standard deviation from all elements in the array which is defined as
 */

#include <stdio.h>
#include <math.h>
#define SIZE 14


int main(void)
{
    //Student: declare more variables as needed.
    double myarray[SIZE];
    int i;
    int count = 0;
    double min_value;
    int index;
    double sum, mean, std_dev;
    
    FILE* inp = fopen("Lab5_Fridata.txt", "r");
    
    if (inp == NULL)
    {
        printf("file does not exist\n");
    }
    else
    {
        while (!feof(inp))
        {
            //this loop is to read the data in and keep it in the array
            for (i = 0; i < SIZE; i++)
            {
                fscanf(inp, "%lf", &myarray[i]);
            }
            
            min_value = myarray[0];
            sum = 0;
            
            for (i = 0; i < SIZE; i++)
            {
                sum = myarray[i] + sum;
            
                if (min_value > myarray[i])
                {
                    min_value = myarray[i];
                    index = i;
                }
                
                printf("%.4lf ", myarray[i]);
                
            }
            
            mean = sum / 14.0;
            std_dev = 0;
        
            for (i = 0; i < SIZE; i++)
            {
                std_dev = ((myarray[i] - mean) * (myarray[i] - mean)) + std_dev;
            }
            
            std_dev = sqrt(std_dev / 14.0);

            printf("\nThe minimum value is %.4lf at index %d", min_value, index);
            printf("\nMean is %.4lf", mean);
            printf("\nStandard deviation is %.4lf", std_dev);
           
            printf("\n\n"); // seperates the 14 values.
            
        
            
            
        }
        
        fclose(inp); //done using the file
    }
    return 0;
}



//
//            if (count == 1)
//            {
//                printf("The first 14-element array is ");
//                for (i = 0; i < SIZE; i++)
//                {
//                    printf("%.3lf ", myarray[i]);
//                }
//
//            }
//            else if (count == 2)
//            {
//                printf("The second 14-element array is ");
//                for (i = 0; i < SIZE; i++)
//                {
//                    printf("%.3lf ", myarray[i]);
//                }
//            }
//            else if (count == 3)
//            {
//                printf("The third 14-element array is ");
//                for (i = 0; i < SIZE; i++)
//                {
//                    printf("%.3lf ", myarray[i]);
//                }
//
//            }
//            else
//            {
//                printf("Something went wrong.");
//            }
