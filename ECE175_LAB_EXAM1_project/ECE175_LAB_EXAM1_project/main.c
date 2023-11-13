//
//  main.c
//  ECE175_LAB_EXAM1_project
//
//  Created by Khalil Gatto on 10/13/23.
//

#include <stdio.h>
#include <math.h>

double func(double x, int numterm)
{
    double sum = 0;
    sum = (1/x);
    
    
    for (int i = 1; i < numterm; i++)
    {
        double n = 2*i + 1;
        sum = (1)/(n * pow(x,n)) + sum;
    }
    
    return sum;
    
}


int main()
{
    
    int numterm = 0;
    double x; //initialize and get into second while loop.
    double sum;
    

    printf("Enter a positive integer or -1 to quit: ");
    scanf("%d", &numterm);
    
    while (numterm != -1)
    {
    
        while (x)
        {
            printf("Enter a real number > 1: ");
            scanf("%lf", &x);
            
            if (x > 1)
            {
                sum = func(x, numterm);
                printf("for N = %d and x = %.2lf, sum of series is %.5lf\n", numterm, x, sum);
                break;
            }
        }
        
        printf("Enter a positive integer or -1 to quit: ");
        scanf("%d", &numterm);
        

    }
        
        

    
    
    
    return 0;
}
