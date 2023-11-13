//
//  main.c
//  activitySept14
//
//  Created by Khalil Gatto on 9/14/23.
//

#include <stdio.h>

int main() {
    
    /*
     ACTIVITY 8
     
     *
     **
     ***
     ****
     
     
     */
    
    //    int height, i ,j;
    //
    //    printf("Enter pyramid height as integer: ");
    //    scanf("%d", &height);
    //
    //
    //    for (i = 0; i <= height; i++)
    //    {
    //        for (j = 0; j<i; j++)
    //        {
    //            printf("*");
    //        }
    //        printf("\n");
    //    }
    //
    
    
    int rows;
    
    printf("Enter the number of rows for the pyramid: ");
    scanf("%d", &rows);
    
    for (int i = 1; i <= rows; i++)
    {
        // Print leading spaces
        for (int space = 1; space <= rows - i; space++)
        {
            printf(" ");
        }
        
        // Print asterisks
        for (int j = 1; j <= 2 * i - 1; j++)
        {
            printf("*");
        }
        
        // Move to the next line
        printf("\n");
    }
}


