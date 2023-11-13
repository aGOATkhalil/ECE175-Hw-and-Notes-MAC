//
//  main.c
//  LAB_EXAM_1_PART2
//
//  Created by Khalil Gatto on 10/13/23.
//

#include <stdio.h>

int main()
{
    FILE *inp;
    char file_char;
    int word_count = 1;
    int sentence_count = 0;
    int space_count = 0;
    int max_word_count = 0;
    int count = 0;
    inp = fopen("Gettysburg.txt", "r");
    
    
    if (inp == NULL)
    {
        printf("File not found.");
    }
    else
    {
        while (fscanf(inp, "%c", &file_char) != EOF)
        {
            
            if ((int)file_char == 32 || (int)file_char == 46)
            {
                
                switch((int)file_char)
                {
                    case 32:
                        word_count++;
                        break;
                        
                    case 46:
                        sentence_count++;
                        if (word_count > max_word_count)
                        {
                            max_word_count = word_count;
                        }
                        word_count = 0;
                        break;
                    default:
                        count++;
                        break;
                }
            }

        }
        printf("There are %d sentences in the file.\n", sentence_count);
        printf("The largest sentence contains %d words.\n", max_word_count); //must find which sentence had the greatest number of workds.
        fclose(inp);
    }
    
    
    
    
    return 0;
}
