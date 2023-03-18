#ifndef LINKEDLIST_H
#define LINKEDLIST_H

#include <stdlib.h>

typedef struct Node {
    int data;
    struct Node *next;
} Node;

typedef struct LinkedList {
    Node *head;
    int size;
} LinkedList;

LinkedList *createLinkedList() {
    LinkedList *list = (LinkedList *) malloc(sizeof(LinkedList));
    list->head = NULL;
    list->size = 0;
    return list;
}

void addFirst(LinkedList *list, int data) {
    Node *node = (Node *) malloc(sizeof(Node));
    node->data = data;
    node->next = list->head;
    list->head = node;
    list->size++;
}

void deleteFirst(LinkedList *list) {
    if (list->head != NULL) {
        Node *temp = list->head;
        list->head = list->head->next;
        free(temp);
        list->size--;
    }
}

void addRandom(LinkedList *list, int data) {
    int index = rand() % (list->size + 1);
    if (index == 0) {
        addFirst(list, data);
    } else {
        Node *prev = NULL;
        Node *curr = list->head;
        for (int i = 0; i < index; i++) {
            prev = curr;
            curr = curr->next;
        }
        Node *node = (Node *) malloc(sizeof(Node));
        node->data = data;
        node->next = curr;
        prev->next = node;
        list->size++;
    }
}

void deleteRandom(LinkedList *list, int data) {
    if (list->size == 0) {
        return;
    }
    if (list->head->data == data) {
        deleteFirst(list);
    } else {
        Node *prev = NULL;
        Node *curr = list->head;
        while (curr != NULL && curr->data != data) {
            prev = curr;
            curr = curr->next;
        }
        if (curr != NULL) {
            prev->next = curr->next;
            free(curr);
            list->size--;
        }
    }
}

void addEnd(LinkedList *list, int data) {
    Node *node = (Node *) malloc(sizeof(Node));
    node->data = data;
    node->next = NULL;
    if (list->head == NULL) {
        list->head = node;
    } else {
        Node *temp = list->head;
        while (temp->next != NULL) {
            temp = temp->next;
        }
        temp->next = node;
    }
    list->size++;
}

void deleteEnd(LinkedList *list) {
    if (list->size == 0) {
        return;
    }
    if (list->head->next == NULL) {
        free(list->head);
        list->head = NULL;
    } else {
        Node *prev = NULL;
        Node *curr = list->head;
        while (curr->next != NULL) {
            prev = curr;
            curr = curr->next;
        }
        free(curr);
        prev->next = NULL;
    }
    list->size--;
}

int peek(LinkedList *list) {
    if (list->head != NULL) {
        return list->head->data;
    } else {
        return -1;
    }
}

#endif
