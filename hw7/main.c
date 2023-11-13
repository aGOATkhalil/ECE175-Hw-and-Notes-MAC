//
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
    int position;
    char fletter_fname;
    int fname_count = 0;
    char state_abbrev[5];
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
/* ------------------------------------------------------------------------------------------------------*/
    //DEBUGGING
    for (int i = 0; i < size; i++) //print names, state, and debt from file.
    {
        printf("%s\t", names[i]);
        printf("%s\t", states[i]);
        printf("%.2lf\n", debts[i]);
    }
    printf("---------------------\n\n");
    /* ------------------------------------------------------------------------------------------------------*/
    
    scanf("%d %c %s", &debt_limit, &fletter_fname, state_abbrev);
    
    for (int i = 0; i < size; i++)
    {
        if (debts[i] > max_debt)
        {
            max_debt = debts[i];
            position = i; //keep track of position to output who has the highest debt.
        }
        
        char *temp; //for comparison of letters done below.
        strncpy(temp, names[i+1], sizeof(names));
        
        if (temp[0] == fletter_fname) //keeps track of num of customers that have fletter_fname.
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

    }
    
    

    printf("%d %c ", debt_limit, fletter_fname); //LOOK AT ME! Why can't I print the string properly with these?
    printf("%s\n", state_abbrev);
    
    printf("U.S. Report\n");
    printf("Customers: %d\n", size);
    printf("Highest debt: %s\n", names[position]);
    printf("Customer names that start with '%c': %d\n", fletter_fname, fname_count);
    printf("Customers with debt over $ %d: %d\n", debt_limit, num_over_limit);
    printf("Customers debt free: %d\n", num_no_debt);
    
    
   return 0;
}
