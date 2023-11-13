/*

    main.c
    hw9

    Created by Khalil Gatto on 10/31/23.
 
 
    DESCRIPTION OF ALGORITHM
 
*/




#include <stdio.h>
#include <strings.h>
#include <stdlib.h>

typedef struct movie_s {
    
    char title[100];
    double rating; //rating from 1 - 10
    int duration; //in minutes
    int year;
    
}movies;


//Modify these functions to use variables of type movies and to make it sort by the “rating” member of movies.

void swap(int *x, int *y) { //FUNCTION TO BE MODIFIED
    
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
    
}


void selection_sort(int x[], int size) { //FUNCTION TO BE MODIFIED
    
    int i, j, max;
    for (i = 0; i < size; i++) {
        max = i;// start searching from currently unsorted
        for (j = i; j<size; j++) {
            if (x[j] > x[max]) //change it to use “rating” member of movies
                max = j; //if found a larger element, move it to the front
        }
        swap(&x[i], &x[max]);
    }
}


int main()
{
   /** # UNDERSTANDING THE ASSIGNMENT
        
       ## Characteristics of the program:
                  * Must have dynamic arrays. The size is adjusted and filled.
            * Interactive. (q/Q to quit).
    
       ## Algorithm Steps:
            1) Ask user to enter a num to get num movies to read in.
         2)
            
        
    
    */
    
    
    return 0;
}
