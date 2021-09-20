// Preprocessor :
// standards library imports
#include <stdio.h>
#include <stdlib.h>

// custom imports

#include "linkedlist.h"



inline void printLL(Node *node) {
    while( node != NULL ) {
        printf("%d\n", node -> data);
        node = node -> next_node;
    }
}