//
//  main.c
//  activity_oct19
//
//  Created by Khalil Gatto on 10/19/23.
//


#include <stdio.h>
#include <string.h>

#define SIZE 100

int main()
{

    char user_inp[SIZE];
    int index = 0;
    int index2 = 0;
    int count = 0;
    int number_count = 0;
    int sym_count = 0;
    
    
    
    
    printf("Enter a string: ");
    fgets(user_inp, SIZE, stdin);
    
    for (int i = 0; i <strlen(user_inp); i++)
    {
        if (user_inp[i] == '*')
        {
            index = i;
            break;
        }
    }

    for (int i = index + 1; i <strlen(user_inp); i++)
    {
        if (user_inp[i] == '*')
        {
            index2 = i;
            break;
        }
    }
    
    for (int i = index+1; i < index2; i++)
    {
        if ((user_inp[i] >= 65 && user_inp[i] <= 90) || (user_inp[i] >= 97 && user_inp[i] <= 122))
        {
            count++;
        }
        else if (user_inp[i] >= 48 && user_inp[i] <= 57)
        {
            number_count++;
        }
        else
        {
            sym_count++;
        }
    }
    
    
    printf("Between two *, there are %d letters, %d digits, %d other symbols\n",count, number_count, sym_count);
    
    
    
    return 0;
}
