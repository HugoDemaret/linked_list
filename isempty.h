// Preprocessor :
// standards library imports
#include <stdio.h>
#include <stdlib.h>

// custom imports

#include "linkedlist.h"


inline int is_empty(Node *node) {
    int B = 0;
    if (node == NULL) {
        B = 1;
    }
    return B;
}