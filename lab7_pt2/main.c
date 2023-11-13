//
//  main.c
//  lab7_pt2
//
//  Created by Khalil Gatto on 10/20/23.
//

#include <stdio.h>
#include <string.h>


int main()
{
    char user_inp = 'y';
    char word[50];
    int count = 0;
    
    
    printf("Enter a word: ");
    scanf("%s", word);
    
    while (1)
    {

        for (int i = 0 ; i < strlen(word) / 2; i++)
        {
            if (word[strlen(word) - i - 1] != word[i])
            {
                printf("%s is NOT a palindrome\n\n", word);
                count = 1;
                break;
            }
        }
    
        if (count == 1)
        {
            printf("Press q/Q to quit. Other to continue: ");
            scanf(" %c", &user_inp);
            count = 0;
        }
        else
        {
            printf("%s is a palindrome\n\n", word);
            printf("Press q/Q to quit. Other to continue: ");
            scanf(" %c", &user_inp);
        }
        
        if (user_inp == 'q' || user_inp == 'Q')
        {
            printf("Goodbye.\n");
            break;
        }
        else
        {
            printf("Enter a word:");
            scanf("%s", word);
        }

    }


    
    return 0;
}

