//
//  main.c
//  nov7_class_activity
//
//  Created by Khalil Gatto on 11/7/23.
//

#include <stdio.h>
#include <stdlib.h>
#include <string.h>


typedef struct node_s {
    char name[20];
    int age;
    struct node_s* next;
} node;

void Node_Create (node* thisNode, char name_init [], int age_init, node* nextLoc) {
    thisNode->age = age_init;
    strcpy(thisNode->name, name_init);
    thisNode->next = nextLoc;
}

node* Node_GetNext(node* thisNode) {
    return thisNode->next;
}

void Node_InsertAfter(node* thisNode, node* newNode) {
    node* tmpNext = NULL;
    tmpNext = thisNode->next; // Remember next
    thisNode->next = newNode; // this -- new -- ?
    newNode->next = tmpNext;  // this -- new -- next
}

void Node_PrintNodeData(node* thisNode)
{
    printf("%s %d\n", thisNode->name, thisNode->age);
}


void print_list (node *headObj) {
    
    node* curr = Node_GetNext(headObj);
    Node_PrintNodeData(headObj);
    curr = Node_GetNext(headObj);
}


int main(void) {
    node* headObj = NULL; // Create intNode objects
    node* currObj = NULL;
    node* lastObj = NULL;
    FILE* inp = fopen("database.txt", "r");
    char tempname[20];
    int tempage;

    headObj = (node*)malloc(sizeof(node)); // Front of nodes list
    Node_Create(headObj, "none", - 1, NULL);
    lastObj = headObj;
    
    while(fscanf(inp, "%s %d", tempname, &tempage)!= EOF)
    {
        headObj = (node*)malloc(sizeof(node));
        Node_Create(lastObj, tempname, tempage, NULL);
        currObj = Node_GetNext(headObj);
        Node_InsertAfter(currObj, headObj);
        lastObj = currObj;
        currObj = Node_GetNext(headObj);
                    
    }
    

    while (currObj != NULL) {
        print_list(currObj);
    }
    
    
    return 0;
}

