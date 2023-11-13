//
//  main.c
//  activity_sept26
//
//  Created by Khalil Gatto on 9/26/23.
//


//--// READ ME //--//

//First step of Acitvity, write all the functions (skip main for now). Start on line 51

//Second step, write the main function

#include <stdio.h>

int col_to_num(char color, int choice);
int main(void)
{
    char col1, col2, col3;
    int val1, val2, val3;
    
    FILE *inp;
    inp = fopen("resistorcolor.txt", "r");
    if (inp == NULL)
    {
        printf("file not open.");
        return 0;
    }
    while(fscanf(inp, "%c %d %c %d %c %d%*c", &col1, &val1, &col2, &val2, &col3, &val3) != EOF)
    {
        printf("%c%d%c%d%c%d\n", col1, val1, col2, val2, col3, val3);
    }
    fclose(inp);

    return 0;
}

int col_to_num(char color, int choice) {
    int num;
    switch (color) {
    case 'B':
    case 'b':      //Complvalete this part stated in 2) on page 5
            break;
    case 'G':
    case 'g':    if (choice == 1) num = 5;        //Green
            else if (choice == 2) num = 8;    //Grey
            else if (choice == 3) num = -1;    //Gold (see 3rd band)
            else num = 100; //return num = 100 for wrong choice
        break;
    case 'R':
    case 'r':        num = 2; break;

        //Complete this part for other colors used in Figure 1

    default:        num = 100;    //return num = 100 for wrong color
        break;
    }
    return num;
}

