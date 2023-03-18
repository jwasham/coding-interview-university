#include <stdio.h>
#include <stdlib.h>
#include "LinkedList.h"

int main() {
    LinkedList *list = createLinkedList();

    addFirst(list, 10);
    addFirst(list, 20);
    addFirst(list, 30);

    printf("List after adding 3 elements at first:\n");
    peek(list);

    deleteFirst(list);

    printf("List after deleting first element:\n");
    peek(list);

    addRandom(list, 40);

    printf("List after adding element at random:\n");
    peek(list);

    deleteRandom(list, 20);

    printf("List after deleting element at random:\n");
    peek(list);

    addEnd(list, 50);

    printf("List after adding element at end:\n");
    peek(list);

    deleteEnd(list);

    printf("List after deleting element at end:\n");
    peek(list);

    printf("Peek element of the list: %d\n", peek(list));

    return 0;
}
