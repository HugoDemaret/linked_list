// Preprocessor :
#ifndef DELETION_H_
#define DELETION_H_

// standards library imports
#include <stdio.h>
#include <stdlib.h>

// custom imports
#include "linkedlist.h"


inline void delete_list(Node** head_pt) {
    Node* next;
    Node* position = *head_pt;
    while (position != NULL) {
        next = position -> next_node;
        free(position);
        position=NULL;
        position=next;
    }
    *head_pt = NULL;
}

inline void delete_node(Node** head_pt, int value) {
    Node *tmp = *head_pt, *prev;
    if (tmp !=NULL && tmp->data == value) {
        *head_pt = tmp->next_node;
        free(tmp);
        tmp=NULL;
        return;
    }
    while(tmp!=NULL && tmp->data !=value){
        prev = tmp;
        tmp = tmp->next_node;
    }
    if (tmp == NULL) {
        return;
    }
    prev->next_node = tmp->next_node;
    free(tmp);
    tmp=NULL; // Avoids double freeing and accessing a dereferenced pointer (causes a SEGFAULT if tried) => less vulnerability to buffer/stack/heap overflow
}

#endif