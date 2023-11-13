//
//  main.c
//  arrays
//
//  Created by Khalil Gatto on 10/17/23.
//

#include <stdio.h>

int main()
{
    /*
         
    You can declare n-dimension arrays. For example:
     
    int 2_dimension[4][4] = {{0,1,2,3}, {0,1,2,3}};
     
    You are allowed to omit only the first array size declaration....
     
    float cells[][2]={ {0.0, 1}, {1.5, 2}, {0.3, 2}, {0, 0}}
    
     
    */
    
    
    /** ARRAY ex. */
    
    int myarray[70][50];
    
    for (int i = 0; i < 70; i++) //fill array with 0s
    {
        for (int j = 0; j < 50; j++)
        {
            myarray[i][j] = 0;
        }
        
    }
    
    for (int i = 0; i < 70; i++) //print the array
    {
        for (int j = 0; j < 50; j++)
        {
            printf("%d ", myarray[i][j]);
            if (j == 20)
            {
                printf("\n");
            }
        }

        
    }
    
    
    printf("\n\n\n\n");
    
    /** Another example.... */
    
    int table[4][4]={ {0,0,0,0},{0,0,0,0},{0,0,0,0}, {0,0,0,0} };
    int i,j;
    for (i=0; i <4; i++)
    {
        for (j=0; j <4; j++)
        {
            if (i >= j)
            {
                table[i][j]=(i+1)*(j+1);
            }
        }
    }
        
    for (int i = 0; i < 4; i++) //print the array
    {
        for (int j = 0; j < 4; j++)
        {
            printf("%d ", table[i][j]);
        }
            
    }
    
    printf("\n\n\n\n");
    
    
    return 0;
}
