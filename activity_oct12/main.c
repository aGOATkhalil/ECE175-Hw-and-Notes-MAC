//
//  main.c
//  activity_oct12
//
//  Created by Khalil Gatto on 10/12/23.
//

#include<stdio.h>
#define SIZE 50

void init(int x[], int size)
{
    int i;
    for (i=0; i<size; ++i)
    {
        x[i]=0;
    }
}

void print_nonzero(int x[], int size)
{
    int i;
    for (i = 0; i < size; ++i)
    {
        if (x[i] != 0)
        {
            printf("%d", x[i]);
        }
    }
}


int findCode(int x[],int code, int size)
{
    int flag = 0;
    int i;
    for (i = 0; i < size; ++i)
    {
        if (x[i] == code)
        {
            flag = 1;
            break;
        }
        else
        {
            flag = 0;
            
        }
    }
    // return flag = 0, if code is NOT found
    // size keeps numbers of unique //codes
    //found so far(and stored in array x)
    // return flag = 1, if code is found in the
    //array x
    return flag;
}



int main()
{
    int flag;
    int index_sofar = 0, code;
    int productCodes[SIZE];
    
    
    FILE *inp = fopen("codes.txt", "r");
    
    init(productCodes, SIZE);
    
    if (inp == NULL)
        
    {
        printf("file does not exist");
    }
    else
    {
        
        // read file one integer at a time until EOF or as long as index_sofar is less than 50
        while (fscanf(inp, "%d", &code) != EOF)
        {
            
            if (findCode(productCodes, code, index_sofar))
            {
                productCodes[index_sofar] = code;
                index_sofar++;
            }
            
            
        }
        printf("\n");
        
        // call a function to find whether the code is unique
        // if it is (or flag return from the function is 0), add it to the array
        //call a function to print the unique codes
        //in the array
        print_nonzero(productCodes, SIZE);
        fclose(inp);
    }
    

    
    
    
    return 0;
}
