// Defines linked_list.h

HTNode *LL_create_LL_node(){
    HTNode *new_HTNode = malloc(sizeof(HTNode));
    check_address(new_HTNode);
    
    new_HTNode->size = 0;
    new_HTNode->head = NULL;
    new_HTNode->tail = NULL;
    
    return new_HTNode;
}

int LL_size(HTNode *nodeptr){
    return nodeptr->size;
}

bool LL_empty(HTNode *nodeptr){
    int is_empty = 0;
    if(nodeptr->size == 0){
        is_empty = 1;
    }
    return is_empty;
}

void LL_push_front(HTNode *nodeptr, int value){
    Node *new_node = malloc(sizeof(Node));
    
    new_node->next = nodeptr->head;
    nodeptr->head = new_node;
    new_node->data = value;
    if(nodeptr->size == 0){
        nodeptr->tail = new_node;
    }
}

int LL_pop_front(HTNode *nodeptr){
    int value;
    Node *next_node = nodeptr->head
    value = next_node->data;
    nodeptr->head = next_node->next;
    free(next_node);
    
    return value;
}

void LL_push_back(HTNode *nodeptr){
           
}

void check_address(void *p){
    if(p==NULL){
        printf("Memory Allocation Error!\n");
        exit(EXIT_FAILURE);
    }
}