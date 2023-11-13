//
//  main.c
//  lab9
//
//  Created by Khalil Gatto on 11/3/23.
//

#include <stdio.h>
#include <string.h>
#include <stdlib.h>



typedef struct Wimbledon_s {
    int year;
    char Won_Name[50];
    char Won_Country[50];
    char Lost_Name[50];
    char Lost_Country[50];
}Wimbledon;


void Load_Struct(Wimbledon* P, FILE* fid) { //this function is to load data of one winner. Use in a loop to load the data

    //read the data from the text file (Wimbledon_Tennis_Data.txt) to initialize the array above
    char firstname[50];
    char lastname[50];
    char lost_first_name[50];
    char lost_last_name[50];
    
    fscanf(fid, "%d %s %s %s %s %s %s", &P->year, firstname, lastname, P->Won_Country, lost_first_name, lost_last_name, P->Lost_Country);
    
    strcpy(P->Won_Name, strcat(firstname,lastname));
    strcat(P->Won_Name, lastname);
    strcpy(P->Lost_Name, lost_first_name);
    strcat(P->Lost_Name, lost_last_name);

}

void print_winner(Wimbledon* P) { //this function is to print the data of one winner.
    
    printf("%d\t%s\t%s", P->year, P->Won_Country, P->Lost_Country);
    printf("\n");
}



int main(void) {
    
    Wimbledon *allwinners;
    int num_players;
    char get_consent = 'a';
    char get_country[20];
    int count = 0;
    FILE *inp = fopen("Wimbledon_Tennis_Data.txt","r");
    
    if (inp == NULL)
    {
        printf("File not found.\n");
        return 0;
    }
    
    do {
        
        printf("Enter number of players: ");  //ask a user  to enter the number of winners, num
        scanf("%d", &num_players);
        
        allwinners = (Wimbledon*)malloc(num_players * sizeof(Wimbledon));  //dynamically allocate memory for an array of winners of the appropriate size
        for (int i = 0; i < num_players + 1; i++)
        {
            Load_Struct(&allwinners[i], inp);
        }
        
        printf("Which country would you like to see?: "); //Once the data has been successfully loaded into an array, ask the user which country
        scanf("%s", get_country);
        
        
        for (int i = 0; i < num_players + 1; i++)
        {
            if (strcmp(allwinners[i].Won_Country, get_country) == 0) {
                count++;
            }
            
            if (strcmp(allwinners[i].Lost_Country, get_country) == 0)
            {
                count++;
            }

        }
        if (count == 0) {
            printf("\n\n%s has not played\n", get_country);
        }
        else {
            printf("\n\n%s has played %d times\n", get_country, count);
            count = 0; //reset count for next iteration.
        }

        printf("Year\tWon\t\tLost\n");

        
        for (int i = 0; i < num_players + 1; i++)
        {
            if (strcmp(allwinners[i].Won_Country, get_country) == 0) {
                print_winner(&allwinners[i]);
            }
            
            if (strcmp(allwinners[i].Lost_Country, get_country) == 0)
            {
                print_winner(&allwinners[i]);
            }

        }
        
        printf("\nContinue or quit (Q)? ");
        scanf(" %c", &get_consent);

        
    } while (get_consent != 'q' || get_consent != 'Q'); //make it interactive (Q to quit)

    fclose(inp);
    free(allwinners);
    return 0;
    
}
