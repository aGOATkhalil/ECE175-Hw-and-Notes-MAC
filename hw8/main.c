/*

    Written by Khalil Gatto
    10/27/2023

    ECE175, Hw8

    DESCRIPTION OF ALGORITHM

*/



#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

#define _CRT_SECURE_NO_WARNINGS
#define SIZE 15
#define HW_SIZE 5
#define EXAM_SIZE 3


typedef struct student_struct {

    char Student_Name[100];
    double Homework[5]; //each one is from 0 - 100
    double Exam[3]; //each one is from 0 - 100
    double Grade_Prcnt; //your program calculates this
    char Letter_Grade; //your program determines this

}student_info;


void read_function(FILE* inp, student_info myclass[])
{
    //reading the information from the text file pointed to by inp to populate the array myclass.

    for (int i = 0; i < SIZE; i++) //num of different data sets (names, hw score, exam scores).
    {
        fgets(myclass[i].Student_Name, sizeof(myclass[i].Student_Name), inp);
        size_t length = strlen(myclass[i].Student_Name);

        if (length > 0 && myclass[i].Student_Name[length - 1] == '\n') //if a newline is detected from fgets(), then read the next lines.
        {
            myclass[i].Student_Name[length - 1] = '\0';
            
            for (int j = 0; j < HW_SIZE; j++)
            {
                fscanf(inp, "%lf", &myclass[i].Homework[j]); //store each hw score in array of iteration j
            }

            for (int j = 0; j < EXAM_SIZE; j++)
            {
                fscanf(inp, "%lf", &myclass[i].Exam[j]);
            }
        }
        else
        {
            continue;
        }
        
        char newline[50];
        fgets(newline, sizeof(newline), inp); //reads newline so that the next iteration "i" doesnt read Homework to be "\r\0\0\0\0".
    }
    
    fclose(inp);
}

void compute_grade(student_info myclass[]) //FIX ME!
{
    double hw_weight = 0.20;
    double exam1_weight = 0.25;
    double exam3_weight = 0.30;
    double hw_sum = 0;
    double exam_sum = 0;

    for (int i = 0; i < SIZE; i++)
    {
        for (int j = 0; j < HW_SIZE; j++) //find sum of var for grade
        {
            hw_sum += myclass[i].Homework[j];
        }
        
        exam_sum = exam1_weight * myclass[i].Exam[0] + exam1_weight * myclass[i].Exam[1] + exam3_weight * myclass[i].Exam[2];
        myclass[i].Grade_Prcnt = (((hw_weight * hw_sum)/5 + exam_sum)); //no need for weight in exam_sum since it was used in the for loop.

        hw_sum = 0; //reset vars
        exam_sum = 0;
    }

    for (int i = 0; i < SIZE; i++) //determine letter grade. if-direct is the fastest method.
    {
        if (myclass[i].Grade_Prcnt >= 90)
        {
            myclass[i].Letter_Grade = 'A';
        }
        else if (myclass[i].Grade_Prcnt >= 80 && myclass[i].Grade_Prcnt < 90)
        {
            myclass[i].Letter_Grade = 'B';
        }
        else if (myclass[i].Grade_Prcnt >= 70 && myclass[i].Grade_Prcnt < 80)
        {
            myclass[i].Letter_Grade = 'C';
        }
        else if (myclass[i].Grade_Prcnt >= 60 && myclass[i].Grade_Prcnt < 70)
        {
            myclass[i].Letter_Grade = 'D';
        }
        else
        {
            myclass[i].Letter_Grade = 'E';
        }
    }

}

int search_menu(int get_option, student_info myclass[])
{
    char inp_name[100];
    int student_pos = 0;
    int same_name_count = 0; //for if there are more than two names.

    if (get_option == 1) //user selected search for name
    {
        printf("\nEnter name: ");
        fflush(stdin);
        scanf("%[^\n]", inp_name);

        char lower_case_str[100];
        char temp[100];
        strcpy(temp, inp_name);

        for (int i = 0; i < SIZE; i++)
        {
            strcpy(lower_case_str, myclass[i].Student_Name);

            for (int j = 0; j < strlen(myclass[i].Student_Name); j++)
            {
                lower_case_str[j] = tolower(lower_case_str[j]);

            }
            for (int j = 0; j < strlen(inp_name); j++)
            {
                temp[j] = tolower(temp[j]); //convert input to lowercase for comparison
            }

            const char* position = lower_case_str;
            position = strstr(position, temp);
            
            if (position != NULL) //the name exists then
            {
                same_name_count++;
                printf("%d\n", same_name_count);
                student_pos = i;
                
            }
            else if (i == SIZE - 1 && same_name_count == 0) //if at the end of loop and nothing was found
            {
                printf("%s does not exist.\n", inp_name);
                break;
            }
        }
    }
    else if (get_option == 2)
    {
         //implement grade menu.
    }
    else
    {
         //implement catch.
    }
    
    return student_pos;
}

void print_student(student_info student)
{
    printf("%s\n", student.Student_Name);

    printf("Homework score = {");
    for (int i = 0; i < HW_SIZE; i++)
    {
        printf("%.2lf, ", student.Homework[i]);

        if (i == HW_SIZE - 2)
        {
            printf("%.2lf}\n", student.Homework[i + 1]);
            break;
        }
    }

    printf("Exam score = {");
    for (int i = 0; i < EXAM_SIZE; i++)
    {
        printf("%.2lf, ", student.Exam[i]);

        if (i == EXAM_SIZE - 2)
        {
            printf("%.2lf}\n", student.Exam[i+1]);
            break;
        }
    }

    printf("Final percentage: %.2lf\n", student.Grade_Prcnt);
    printf("Final grade: %c\n\n", student.Letter_Grade);

}

int main(void)
{
    student_info myclass[SIZE];

    int get_option = 0;
    char get_validation = 'a'; //some var
    int student_position = 0;

    FILE* inp;
    inp = fopen("ClassData.txt", "r");


    if (inp == NULL)
    {
        printf("This file cannot be opened.\n");
    }
    else
    {
        do
        {
            while (get_option != 1 && get_option != 2)
            {
                printf("\n1 Search by name\n");
                printf("2 Search by grade\n");
                printf("Enter an option (1,2): ");
                scanf("%d", &get_option);
                
                if (get_option == 1 || get_option == 2)
                {
                    break;
                }
            }

            read_function(inp, myclass); //collect data from file
            compute_grade(myclass);

            student_position = search_menu(get_option, myclass);

            if (student_position >= 0)
            {
                print_student(myclass[student_position]);
            }
            

            get_option = 0;
            printf("Continue (Q/q to quit)? ");
            scanf(" %c", &get_validation);


        } while (get_validation != 'Q' && get_validation != 'q');
    }
    return 0;
}
