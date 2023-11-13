//
//
//  hw6
//
//  Created by Khalil Gatto on 10/10/23.
//

/*
 
 DONT FORGET TO WRITE COMMENTS!
 
 */

#include <stdio.h>

char getMenu()
{
    
    char menu_choice;
    const int NUM_CHOICES = 5;
    char arr_selection[NUM_CHOICES] =  {'u', 'a', 'r', 'o', 'q'};
    
    printf("\nMENU\n");
    
    printf("%c - Update player rating\n", arr_selection[0]);
    printf("%c - Output players above a rating\n", arr_selection[1]);
    printf("%c - Replace player\n", arr_selection[2]);
    printf("%c - Output roster\n", arr_selection[3]);
    printf("%c - Quit\n", arr_selection[4]);
    
    printf("Choose an option:\n");
    scanf("%c%*c", &menu_choice);
    
    return menu_choice;
    
}


int main()
{
    
 /*
  (1) Prompt the user to input five pairs of numbers: A player's jersey number (0 - 99) and the player's rating (1 - 9). Store the jersey numbers in one int array and the ratings in another int array. Output these arrays (i.e., output the roster).
  */
    
    char menu_choice;
    
    const int INDEX_VALS = 5;
    int jersey_numbers[INDEX_VALS];
    int player_rating[INDEX_VALS];
    
    for (int i = 0; i < INDEX_VALS; i++) //collect player rating and jersey
    {
        printf("Enter player %d's jersey number:\n", i+1);
        scanf("%d", &jersey_numbers[i]);
        
        printf("Enter player %d's rating:\n", i+1);
        scanf("%d", &player_rating[i]);
        
    }
    
    printf("\nROSTER\n");

    for (int i  = 0; i < INDEX_VALS; i++)
    {
        printf("Player %d -- Jersey number: %d , Rating: %d\n", i+1, jersey_numbers[i], player_rating[i]);
    }
    
    getMenu();
    
    printf("choice: %c\n", menu_choice);
    
    
    return 0;
}
