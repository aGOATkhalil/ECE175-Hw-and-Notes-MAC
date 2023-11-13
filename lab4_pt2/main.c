//
//  main.c
//  lab4_pt2
//
//  Created by Khalil Gatto on 9/22/23.
//



/*
 Write a C program that reads values of time in seconds from a file called “time.txt” and
 convert it to hours, mins, and secs (in this order).
 */

#include <stdio.h>

int main()
{
    int seconds, minutes, hours;
    FILE* text_file;
    
    text_file = fopen("time.txt", "r");
    
    if(text_file == NULL)
    {
        printf("Cannot read file.\n");
    }
    else
    {
        while (fscanf(text_file,"%d", &seconds) != EOF)
        {
            printf("%9d\t", seconds);
            printf("Time: ");
            // now convert the seconds to hour:minutes:seconds
        
            hours = seconds / 3600;
            minutes = (seconds / 60) % 60;
            seconds = seconds % 60;
            printf("%d hours ", hours);
            printf("%d minutes ",minutes);
            printf("%d seconds\n",seconds);
             
            
        }
        
    }
    
    


    
    
    return 0;
}
