//
//  main.c
//  nov2_activity
//
//  Created by Khalil Gatto on 11/2/23.
//

#include <stdio.h>
#include <stdlib.h>
#include <string.h>


typedef struct node_s
{
    char name[20];
    int age;
    struct node_s* next;
} node;

int main(void)
{
    node* n1, * n2, * temp;

    n1 = (node*)malloc(sizeof(node));
    
    strcpy(n1->name, "Abby");

    n1->age = 34;
    n1->next = NULL;
    temp = (node*)malloc(sizeof(node));

    strcpy(temp->name, "Ben");

    temp->age = 18;
    temp->next = NULL;

    n1->next = temp;
    temp = (node*)malloc(sizeof(node));

    strcpy(temp->name, "Charlie");

    temp->age = 25;
    temp->next = NULL;
    n1->next->next = temp;

    node* current = n1;

    while (current != NULL)
    {
        printf("%s, %d\n", current->name, current->age);

        current = current->next;
    }

    return 0;
}

