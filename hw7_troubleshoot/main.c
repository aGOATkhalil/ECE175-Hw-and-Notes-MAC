
//  main.c
//  hw7
//
//  Created by Khalil Gatto on 10/19/23.
//

#include <stdio.h>
#include <string.h>

// Fill arrays with data from external file (described in another section. DO NOT MODIFY.)
void ReadCustomerData(char names[][25], char states[][25], double debts[], int size)
{
    int n;
    FILE* dataFile = NULL;
    char dataFileName[25] = "CustomerData.tsv";
    // Open the data file
    dataFile = fopen(dataFileName, "r");
    if (dataFile == NULL)
    {
        printf("Could not open file %s for reading.\n", dataFileName);
        return;
    }
    // Read the customer information
    for (n = 0; n < size; n++)
    {
        fscanf(dataFile, "%s %s %lf", names[n], states[n], &debts[n]);
    }
    
 
    // Close the data file
    fclose(dataFile);
    
}

int main(void)
{

    int size;
    int debt_limit;
    double max_debt = 0;
    int position = 0;
    char fletter_fname;
    int fname_count = 0;
    char state_abbrev[5];
    int count = 0;
    int num_no_debt = 0;
    int num_over_limit = 0;

    
    // Input # of customers and create parallel arrays
    scanf("%d", &size);
    char names[size][25];
    char states[size][25];
    double debts[size];

    // Fill arrays with data from external file (described in another section. DO NOT MODIFY.)
    ReadCustomerData(names, states, debts, size);

    /* Type your code here */
    // Input debt limit, search phrase, and state

    scanf("%d%s%s", &debt_limit, &fletter_fname, state_abbrev);
    
    for (int i = 0; i < size; i++)
    {
        if (debts[i] > max_debt)
        {
            max_debt = debts[i];
            position = i; //keep track of position to output who has the highest debt.
        }
        
        if (names[i][0] == fletter_fname) //keeps track of num of customers that have fletter_fname.
        {
            fname_count++;
        }
    
    }

    for (int i = 0; i < size; i++) //STRANGE. I had to make another for loop otherwise my code would exit with a bad thread. 
    {
        
        if(debts[i] == 0) //for no debt and for max limit.
        {
            num_no_debt++;
        }
        
        if (debts[i] > debt_limit)
        {
            num_over_limit++;
            
        }
        
        if (strcmp(state_abbrev, states[i]) == 1)
        {
            count++;
        }
        
    }

    
    printf("U.S. Report\n");
    printf("Customers: %d\n", size);
    printf("Highest debt: %s\n", names[position]);
    printf("Customer names that start with '%c': %d\n", fletter_fname, fname_count);
    printf("Customers with debt over $%d: %d\n", debt_limit, num_over_limit);
    printf("Customers debt free: %d\n", num_no_debt);
    //Now do the same but only for the state....
    
    
    fname_count = 0; //reset vars.
    max_debt = 0;
    num_no_debt = 0;
    num_over_limit = 0;
    count = 0;
    int state_count = 0;
    
    for (int i = 0; i < size; i++) //do it again for other state.
    {
        
        if (strcmp(states[i], state_abbrev) == 0)
        {
            state_count++;
            
            if (debts[i] > max_debt)
            {
                max_debt = debts[i];
                position = i; //keep track of position to output who has the highest debt.
            }
            
            if (names[i][0] == fletter_fname) //keeps track of num of customers that have fletter_fname.
            {
                fname_count++;
            }
            
            if(debts[i] == 0) //for no debt and for max limit.
            {
                num_no_debt++;
            }
            
            if (debts[i] > debt_limit)
            {
                num_over_limit++;
                
            }
            
            if (strcmp(state_abbrev, states[i]) == 1)
            {
                count++;
            }
        }
    }

    printf("\n%s Report\n", states[position]);
    printf("Customers: %d\n", state_count);
    printf("Highest debt: %s\n", names[position]);
    printf("Customer names that start with '%c': %d\n", fletter_fname, fname_count);
    printf("Customers with debt over $%d: %d\n", debt_limit, num_over_limit);
    printf("Customers debt free: %d\n", num_no_debt);

   return 0;
}

