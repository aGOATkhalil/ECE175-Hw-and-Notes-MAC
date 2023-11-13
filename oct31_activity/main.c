//
//  main.c
//  oct31_activity
//
//  Created by Khalil Gatto on 10/31/23.
//


#include <stdio.h>
#include <string.h>
#include <stdlib.h>


//1) include the header file that let you use malloc and calloc.... DONE
typedef struct book_struct {
    
    char* title;//book title
    int code;//id
    double price;
    
} book;


int main(void)
{
    book* books_ptr;
    char str[100];
    int i, num = 0, code_entered = 0;
    char ans = 'y';
    char temp;

    FILE* inp = fopen("book_database.txt", "r");
    if (inp == NULL)
    {
        printf("file not found\n");
        return -1;
    }
    
    printf("Enter number of books: ");
    scanf("%d", &num);

    //2) allocate memory for the array with num elements. num is entered by a user
    books_ptr = (book*)malloc(num * sizeof(book));

    for (i = 0; i < num; i++)
    {
        //3) read a title from the text file and keep it in str
        fgets(str, 100, inp);

        if (str[strlen(str) - 1] == '\n') {
            str[strlen(str) - 1] = 0;
        }
        
        //4) allocate memory for the string (str above) for the book title
        books_ptr[i].title = (char*)calloc(sizeof(char),strlen(str) + 1);
        strcpy(books_ptr[i].title, str);
        
        //5) read the code from the text file and keep it in the "code" member of the array at element index i
        fscanf(inp, "%d", &books_ptr[i].code);
        
        //6) read the price from the text file and keep it in the “price" member of the array at element index i
        fscanf(inp, "%lf", &books_ptr[i].price);
        
        //7) add a C statement such that it can read in the following book info correctly
        char tt[5];
        fgets(tt, 5,inp );
        
    }
    for (i = 0; i < num; i++)
    {
        printf("%s\ncode:%d, price %.2lf\n", books_ptr[i].title, books_ptr[i].code, books_ptr[i].price);
        while (1)
        {
            printf("\nEnter code to search: ");
            scanf("%d", &code_entered);
            
            //compare whether the entered code is in database, if yes, print title and price
            for (i = 0; i < num; i++)
            {
                if (books_ptr[i].code == code_entered) {
                    printf("%s, $%.2lf\n", books_ptr[i].title , books_ptr[i].price);
                    break; //found it, get out of for loop
                }
                
                if (i == num - 1) {
                    printf("Code %d is not in the database\n", code_entered);
                }
            }
            //10) write the condition when the code is not in the database

            
            printf("\nSearch again (q to quit)?: ");
            scanf(" %c", &ans);
            
            if (ans == 'q' || ans == 'Q')
            {
                break;
            }
        }
    }
//DE-allocate the memory
    for (i = 0; i < num; i++)
    {
        free(books_ptr[i].title);
    }
    free(books_ptr);
    return 0;
}
