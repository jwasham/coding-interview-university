#ifndef LINKED_LIST_H
#define LINKED_LIST_H
#include <assert.h>
#include <stdbool.h>

typedef struct ImplementLinkedList{
    int data;
    HTNode *next;
}Node;

typedef struct Head_Tail_Node{
    int size;
    Node *head;
    Node *tail;
}HTNode;


HTNode *LL_create_head_node();

// returns number of data elements in list
int LL_size(HTNode *nodeptr);
// bool returnss true if empty
bool LL_empty(HTNode *nodeptr);
// returns the value of the nth item (starting at 0 for first)
int LL_value_at(HTNode *nodeptr, int index);
// adds an item to the front of the list
void LL_push_front(HTNode *nodeptr);
// remove front item and return its value
int LL_pop_front(HTNode *nodeptr);
// adds an item at the end
void LL_push_back(HTNode *nodeptr);
// removes end item and returns its value
int LL_pop_back(HTNode *nodeptr);
// get value of front item
int LL_front(HTNode *nodeptr);
// get value of end item
int LL_back(HTNode *nodeptr);
// insert value at index, so current item at that index is pointed to by new item at index
void LL_insert(HTNode *nodeptr, int index, int value);
// removes node at given index
void LL_erase(HTNode *nodeptr, int index);
// returns the value of the node at nth position from the end of the list
int LL_value_n_from_end(HTNode *nodeptr, int index);
// reverses the list
void LL_revese(HTNode *nodeptr);
// removes the irst item in the list with this value
void LL_remove_value(HTNode *nodeptr, int value);

void check_address(void *p);


#endif LINKED_LIST_H