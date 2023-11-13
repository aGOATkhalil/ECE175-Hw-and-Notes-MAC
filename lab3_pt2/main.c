//
//  main.c
//  lab3_pt2
//
//  Created by Khalil Gatto on 9/15/23.
//

#include <stdio.h>

int main()
{
    /*
     Develop a C program that
     - Asks the user to enter a value of N
     - Finds and displays all positive integers from 1 to N that end in 6
     - Finds and displays the total number of values ending in 6 that are found.
     - Finds and displays the total sum of values ending in 6 that are found.
     */
    
    int n = 0;
    int num_of_six = 0;
    int i = 1;
    int sum = 0;
    
    
    printf("Enter an integer n: ");
    scanf("%d", &n);

    
    for (i = 1; i <= n; i++)
    {
        //check if num ends in 6.
        int check_six = i % 10;
        
        if (check_six == 6)
        {
            printf("%d ", i);
            num_of_six += 1;
            sum += i;
        }

    }

    printf("\nTotal numbers found that end in six: %d\n", num_of_six);
    printf("Total sum: %d\n", sum);
    
    
    return 0;
}
