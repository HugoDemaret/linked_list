// Preprocessor :
#ifndef SEARCH_H_
#define SEARCH_H_

// standards library imports
#include <stdio.h>
#include <stdlib.h>

// custom imports

#include "linkedlist.h"


inline int get_elem(Node *head, int index) {
    int counter = 0;
    Node* position = head;
    while (position != NULL) {
        if (counter == index) {
            return position -> data;
        } else {
            counter++;
            position = position->next_node;
        }
    }
    return 0;
}
inline int list_search(Node *head, int value) {
    Node* position = head;
    while( position != NULL ){
        if (position->data == value) {
            return 1;
        } else {
            position = position -> next_node;
        }
    }
    return 0;
}

inline int list_length(Node* head) {
    int counter = 0;
    Node* position = head;
    while (position !=NULL) {
        counter++;
        position = position->next_node;
    }
    return counter;
}

#endif