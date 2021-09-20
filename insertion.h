// Preprocessor :
#ifndef INSERTION_H_
#define INSERTION_H_
// standards library imports
#include <stdio.h>
#include <stdlib.h>

// custom imports

#include "linkedlist.h"



inline void insert_end(Node** head_pt, int new_data) {
    Node* new_node = (Node*)malloc(sizeof(Node));
    Node* last = *head_pt;
    new_node -> data = new_data;
    new_node -> next_node = NULL;
    if (*head_pt == NULL) {
        *head_pt = new_node;
        return;
    }
    while (last -> next_node !=NULL){
        last = last->next_node;
    }
    last->next_node=new_node;
    return;
}

inline void insert_elem(Node* prev_node, int new_data) {
    if (prev_node == NULL) {
        printf("No previous node : value of prev_node is NULL\n");
        return;
    }
    Node* new_node = (Node*)malloc(sizeof(Node));
    new_node -> data = new_data;
    new_node -> next_node = prev_node -> next_node;
    prev_node -> next_node = new_node;
}

inline void insert_head(Node** head_pt, int new_data) {
    Node* new_node = (Node*)malloc(sizeof(Node));
    new_node -> data = new_data;
    new_node -> next_node = (*head_pt);
    (*head_pt) = new_node;
}


#endif