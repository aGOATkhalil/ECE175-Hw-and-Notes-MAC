//
//  main.c
//  malloc_notes
//
//  Created by Khalil Gatto on 10/31/23.
//

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int* myp;
    myp = (int*)malloc(sizeof(int));
    
    if (myp != NULL) { //check if pc has room to store
        
        
        
    }
    else
    {
        printf("memory cannot be allocated.\n");
    }
    
    
    return 0;
}


