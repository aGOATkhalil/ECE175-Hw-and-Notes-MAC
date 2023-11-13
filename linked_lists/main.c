//
//  main.c
//  linked_lists
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

/* Insert newNode after node.
 Before: thisNode -- next
 After:  thisNode -- newNode -- next
 */
void Node_InsertAfter(node* thisNode, node* newNode) {
    node* tmpNext = NULL;

    tmpNext = thisNode->next; // Remember next
    thisNode->next = newNode; // this -- new -- ?
    newNode->next = tmpNext;  // this -- new -- next
}

// Print node data
void Node_PrintNodeData(node* thisNode) {
    printf("%s %d\n", thisNode->name, thisNode->age);
}

// Grab location pointed by nextNodePtr
node* Node_GetNext(node* thisNode) {
    return thisNode->next;
}

  void print_list(node *pt){
    node* currObj = Node_GetNext(pt); //skip dummy head node
    while (currObj != NULL) {
        Node_PrintNodeData(currObj);
        currObj = Node_GetNext(currObj);
    }
}

node* find_name(node* pt, char* query) {
    // finds a name in the list
    // and returns pointer to structure matched or NULL
    
    node* curr = Node_GetNext(pt);
    while (curr != NULL) {
        if (strcmp(curr->name, query) == 0) {
            return curr;
        }
        curr = Node_GetNext(curr);
    }

    return curr;
}


void find_age(node* pt, int min, int max)
{ // Print nodes within the range of ages [min, max]

  // traverse list node by node
  // If age attribute between min and max, print it
    
    node* curr = Node_GetNext(pt);
    while (curr != NULL) {
        if (curr->age >= min && curr->age <= max) {
            Node_PrintNodeData(curr);
        }
        curr = Node_GetNext(curr);
        
    }
    
}

void delete_node(node* pt, char delname[]) {

    node* prev;
    node* target = find_name(pt, delname);
    node* currnode;
    if (target == NULL) {
        printf("no node with name %s\n", delname);
    }
    else {

        //5 min
        //If “target” node is the first node in the list(the one after hedObj)
        //make headObj point to the node after the “target” node.
       
        //10 min
            //If “target” node is the node in the middle of or the last node in the list
            //create another pointer called prev point to a node before the target node
            //If “target” node is the last node in the list(you can check whether targetp->next equals to NULL)
                    //1) if you want to keep lastObj
                    //make the lastObj pointer point to the node pointed to by prev
                    //lastObj->next = NULL
                     //OR
                     //2) If your linked list has NO lastObj pointer,
                     //make the next pointer of prev to NULL
            //else
            //make the next pointer of the node pointed by prev to point to the node after the target node
            //free the target node
       }
}


int main(void) {
    node* headObj = NULL; // Create intNode objects
    node* currObj = NULL;
    node* lastObj = NULL;
    
    FILE* inp = fopen("database.txt", "r");
    char tempname[20];
    int tempage;
    
    if (inp == NULL) {
        printf("This file does not exist.\n");
        return 0;
    }

    headObj = (node*)malloc(sizeof(node)); // Front of nodes list
    Node_Create(headObj, "none", - 1, NULL);
    lastObj = headObj;

    while(fscanf(inp, "%s %d", tempname, &tempage)!= EOF)
    {
        currObj = (node*)malloc(sizeof(node));
        Node_Create(currObj, tempname, tempage, NULL);

        Node_InsertAfter(lastObj, currObj);    // Append curr
        lastObj = currObj;                        // Curr is the new last item
    }
    print_list(headObj);

    printf("\n\nPeople between 13 - 25\n");
    find_age(headObj, 13, 25);

    printf("\n\n");
    //node* target = find_name(headObj, "John");
    node* target = find_name(headObj, "Deb");
    //node* target = find_name(headObj, "Kay");

    if (target != NULL)
        printf("%s, %d\n", target->name, target->age);
    else
        printf("the person is NOT on the list\n");

    return 0;
}


/** NEW SECTION */
// -------------------------------------------------------------------------------------------------------------------------

//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//
//typedef struct node_s {
//    char name[20];
//    int age;
//    struct node_s* next;
//} node;
//
//void Node_Create(node* thisNode, char name_init[], int age_init, node* nextLoc) {
//    thisNode->age = age_init;
//    strcpy(thisNode->name, name_init);
//    thisNode->next = nextLoc;
//}
//
//// Print node data
//void Node_PrintNodeData(node* thisNode) {
//    printf("%s %d\n", thisNode->name, thisNode->age);
//}
//
//// Grab location pointed by next pointer
//node* Node_GetNext(node* thisNode) {
//    return thisNode->next;
//}
//
///*
// Insert newNode after node.
// Before: thisNode -- next
// After:  thisNode -- newNode -- next
//*/
//
//void Node_InsertAfter(node* thisNode, node* newNode) {
//    node* tmpNext = NULL;
//    tmpNext = thisNode->next; // Remember next
//    thisNode->next = newNode; // this -- new -- ?
//    newNode->next = tmpNext;  // this -- new -- next
//}
//
//
//int main() {
//
//    node* headObj;
//    node* temp, *curr;
//    headObj = (node*)malloc(sizeof(node));
//    Node_Create(headObj, "none", -1, NULL);
//
//    temp = (node*)malloc(sizeof(node));
//    //strcpy(temp->name, "Abby");
//    //temp->age = 34;
//    //temp->next = NULL;
//    Node_Create(temp, "Abby", 34, NULL);
//
//    //headObj->next = temp;
//    //insert temp after headObj
//    Node_InsertAfter(headObj, temp);
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//    temp = (node*)malloc(sizeof(node));
//    Node_Create(temp, "Ben", 18, NULL);
//    curr = Node_GetNext(headObj);
//    Node_InsertAfter(curr, temp);
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//    temp = (node*)malloc(sizeof(node)); //Create next node and point curr to the next one....
//    Node_Create(temp, "Charlie", 25, NULL);
//    curr = Node_GetNext(headObj);
//    Node_InsertAfter(curr, temp);
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//    curr = Node_GetNext(headObj);
//
//    while (curr != NULL)
//    {
//        Node_PrintNodeData(curr);
//        curr = curr->next;
//    }
//
//    //////////////////////////////////
//    return 0;
//}

