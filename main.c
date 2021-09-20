#include <stdio.h>
#include <stdlib.h>


#include "isempty.h"
#include "deletion.h"
#include "insertion.h"
#include "linkedlist.h"
#include "modify.h"
#include "print.h"
#include "search.h"


int print_menu(void) {
    int choice = 0;
    printf("Do you want to : \n");
    printf("1 : Add element to start of LinkedList\n");
    printf("2 : Add element after an element of LinkedList\n");
    printf("3 : Add element to end of LinkedList\n");
    printf("4 : Delete element from LinkedList\n");
    printf("5 : Delete LinkedList\n");
    printf("6 : Modify element in LinkedList\n");
    printf("7 : Print LinkedList\n");
    printf("8 : Search element in LinkedList\n");
    printf("9 : Get element in LinkedList\n");
    printf("10 : Get LinkedList's length\n");
    printf("11 : Check if LinkedList is empty\n");
    fflush(stdout);
    scanf("%d",&choice);
    if (choice == 0 || choice > 11) {
        return 0;
    }
    return choice;
}

int main(void) {
    int menu = 0;
    while (menu == 0) {
        menu = print_menu();
    }
    Node* head = NULL;
    head = (Node*)malloc(sizeof(Node));
    head -> data = 1;
    head -> next_node = NULL;
    return 0;
}