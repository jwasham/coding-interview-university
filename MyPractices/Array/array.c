// ARRAY: contiguous area of memory consisting of equal-size elements; 
//        constant-time access to any elements

// add/remove at the end: O(1) 
// add/remove at arbitrary location: O(n)

// single-row arrays:
// array_addr + elem_size * (index - first_index) 

// multi-row arrays: 
// array_addr + elem_size * ((#_of_rows - 1 * #_of_columns) + (#_of_columns - 1))

// => addr where i index value is held

JArray *jarray_new(int capacity){
    JArray *arr = malloc(sizeof(JArray));
    check_address(arr);
    int true_capacity = jarray_determine_capacity(capacity);
    arr->size = 0;
    arr->capacity = true_capacity;
    arr->data = (int*)malloc(sizeof(int) * true_capacity);
    check_address(arr->data);
    return arr;
}

void jarray_destroy(JArray *arrptr){
    free(arrptr->data);
    free(arrptr);
}

void jarray_resize_for_size(JArray *arrptr, int candidate_size){
    if(arrptr->size < candidate_size){
        if(arrptr->size == arrptr->capacity){
            jarray_upsize(arrptr);
        }
    } else if(arrptr->size > candidate_size){
        if(arrptr->size < arrptr->capacity / kShrinkFactor){
            jarray_downsize(arrptr);
        }
    }
}

void jarray_upsize(JArray *arrptr){
    int old_capacity = arrptr->capacity;
    int new_capacity = jarray_determine_capacity(old_capacity);
    
    int *new_data = (int*)malloc(sizeof(arrptr->data));
    check_address(new_data);
    
    for(int i = 0; i < old_capacity; ++i){
        *(new_data + i) = *(arrptr->data + i);
    }
    
    free(arrptr->data);
    arrptr->data = new_data;
    arrptr->capacity = new_capacity;
}

// In "jarray_resize_for_size" if the size of jarray becomes less then 1/4 of the jarray capacity
// it shrinks the capacity of the jarray to half of original size
void jarray_downsize(JArray *arrptr){
    int old_capacity = arrptr->capacity;
    int new_capacity = arrptr->capacity / kGrowthFactor;
    
    // if shrunk size is less than Min set capacity
    if(new_capacity < kMinCapacity){
        new_capacity = kMinCapacity;
    }
    
    // if shurnk size is not Minimum capacity value, it allocates new array for
    // resizing the capacity. Because size of jarray is 1/4 of the total capacity, 
    // it doens't matter if we re-size the jarray->capacity to 1/2 of original capacity
    if(new_capacity != old_capacity){
        int *new_data = (int*)malloc(sizeof(int) * new_capacity);
        check_address(new_data);
        
        for(int i = 0; i < arrptr->size; ++i){
            *(new_data + i) = *(arrptr->data + i);
        }
        
        free(arrptr->data);
        arrptr->data = new_data;
        arrptr->capacity = new_capacity;
    }
}

int jarray_size(JArray *arrptr){
    return arrptr->size;
}

void jarray_push(JArray *arrptr, int item){
    jarray_resize_for_size(arrptr, arrptr->size + 1);
    *(arrptr->data + arrptr->size) = item;
    ++(arrptr->size);
}

void jarray_print(JArray *arrptr){
    printf("Size: %d\n", arrptr->size);
    printf("Capacity: %d\n", arrptr->capacity);
    
    printf("Items: \n");
    for(int i = 0; i < arrptr->size; ++i){
        printf("%d\n ", *(arrptr->data + i));
    }
}

int jarray_capacity(JArray *arrptr){
    return arrptr->capacity;
}

int jarray_at(JArray *arrptr, int index){
    if(index > arrptr->size || index < 0){
        exit(EXIT_FAILURE);
    }
    return *(arrptr->data + index);
}

bool jarray_is_empty(JArray *arrptr){
    int is_empty = 1;
    if(arrptr->size != 0){
        is_empty = 0;
    }
    return is_empty;
}

void jarray_insert(JArray *arrptr, int index, int item){
    if(index < 0 || index > arrptr->size){
        printf("Invalid Index!\n");
        exit(EXIT_FAILURE);
    }
    
    jarray_resize_for_size(arrptr, arrptr->size + 1);
    for(int i = arrptr->size; i > index; --i){
        *(arrptr->data + i) =  *(arrptr->data + i - 1);
    }
    
    *(arrptr->data + index) = item;
    
    arrptr->size += 1;
}

void jarray_prepend(JArray *arrptr, int value){
    jarray_insert(arrptr, 0, value);
}

int jarray_pop(JArray *arrptr){
    int popped_value;
    if(arrptr->size == 0){
        printf("Uable to pop(). Empty array.\n");
        exit(EXIT_FAILURE);
    }
    jarray_resize_for_size(arrptr, arrptr->size-1);
    popped_value = *(arrptr->data + arrptr->size);
    arrptr->size -= 1;
    return popped_value;
}

void jarray_delete(JArray *arrptr, int index){
    if(index < 0 || index > arrptr->size){
        exit(EXIT_FAILURE);
    }
    
    jarray_resize_for_size(arrptr, arrptr->size - 1);
    for(int i = index + 1; i < arrptr->size; ++i){
        *(arrptr->data + index) = *(arrptr->data + i);
    }

    arrptr->size -= 1; 
}

void jarray_remove(JArray *arrptr, int value){
    for(int i = 0; i < arrptr->size; ++i){
        if(*(arrptr->data + i) == value){
            jarray_delete(arrptr, i);
            --i;
        }
    }
}

int jarray_find(JArray *arrptr, int value){
    for(int i = 0; i < arrptr->size; ++i){
        if(*(arrptr->data + i) == value){
            return i;
        }
    }
    return -1;
}
int jarray_determine_capacity(int capacity){
    const int kInitialCapacity = 1;
    int true_capacity = kMinCapacity;
    if(capacity < kInitialCapacity){
        printf("Invalid Capacity!\n");
        exit(EXIT_FAILURE);
    }
    
    
    while(capacity > true_capacity / kGrowthFactor){
        true_capacity *= kGrowthFactor;
    }
    
    return true_capacity;
}


void check_address(void *p){
    if(p == NULL){
        printf("Unable to allocate memory\n");
        exit(EXIT_FAILURE);
    }
}

//=========== tests ===================================

void run_all_tests() {
  test_size_init();
  test_append();
  test_empty();
  test_resize();
  test_at();
  test_insert();
  test_prepend();
  test_pop();
  test_remove();
  test_find_exists();
  test_find_not_exists();
}

void test_size_init() {
    printf("test_size_init\n");
  JArray *aptr = jarray_new(5);
  int initial_size = jarray_size(aptr);
  assert(initial_size == 0);
  jarray_destroy(aptr);
}

void test_append() {
    printf("test_append\n");
  JArray *aptr = jarray_new(2);
  printf("CAPACITY: %d, SIZE: %d \n", jarray_capacity(aptr), jarray_size(aptr));
  printf("Created new JArray\n");
  jarray_push(aptr, 2);
  printf("pushed 2\n");
  jarray_push(aptr, 12);
  printf("pushed 2\n");
  int new_size = jarray_size(aptr);
  assert(new_size == 2);
  jarray_destroy(aptr);
}

void test_resize() {
    printf("test_resize\n");
  JArray *aptr = jarray_new(2);

  int old_capacity = jarray_capacity(aptr);
  assert(old_capacity == 16);

  // forces a resize up
  for (int i = 0; i < 18; ++i) {
    jarray_push(aptr, i + 1);
  }

  assert(jarray_capacity(aptr) == 32);

  // forces a resize down
  for (int j = 0; j < 15; ++j) {
    jarray_pop(aptr);
  }

  assert(jarray_capacity(aptr) == 16);

  jarray_destroy(aptr);
}

void test_empty() {
    printf("test_empty\n");
  JArray *aptr = jarray_new(2);
  bool empty = jarray_is_empty(aptr);
  assert(empty == 1);
  jarray_push(aptr, 1);
  empty = jarray_is_empty(aptr);
  assert(empty == 0);
  jarray_destroy(aptr);
}

void test_at() {
    printf("test_at\n");
  JArray *aptr = jarray_new(12);
  for (int i = 0; i < 12; ++i) {
    jarray_push(aptr, i + 3);
  }
  assert(jarray_at(aptr, 6) == 9);
  jarray_destroy(aptr);
}

void test_insert() {
    printf("test_insert\n");
  JArray *aptr = jarray_new(5);
  for (int i = 0; i < 5; ++i) {
    jarray_push(aptr, i + 5);
  }
  jarray_insert(aptr, 2, 47);
  assert(jarray_at(aptr, 2) == 47);
  assert(jarray_at(aptr, 3) == 7);
  jarray_destroy(aptr);
}

void test_prepend() {
    printf("test_prepend\n");
  JArray *aptr = jarray_new(5);
  for (int i = 0; i < 3; ++i) {
    jarray_push(aptr, i + 1);
  }
  jarray_prepend(aptr, 15);
  assert(jarray_at(aptr, 0) == 15);
  assert(jarray_at(aptr, 1) == 1);
  jarray_destroy(aptr);
}

void test_pop() {
    printf("test_pop\n");
  JArray *aptr = jarray_new(5);
  for (int i = 0; i < 3; ++i) {
    jarray_push(aptr, i + 1);
  }
  assert(aptr->size == 3);
  for (int j = 0; j < 3; ++j) {
    jarray_pop(aptr);
  }
  assert(jarray_is_empty(aptr) == 1);
  jarray_destroy(aptr);
}

void test_remove() {
    printf("test_remove\n");
  JArray *aptr = jarray_new(5);
  
  jarray_push(aptr, 12);
  jarray_push(aptr, 3);
  jarray_push(aptr, 41);
  jarray_push(aptr, 12);
  jarray_push(aptr, 12);
  printf("ALL PUSHED \n");
  jarray_remove(aptr, 12);
  printf("REMOVED\n");
  assert(jarray_size(aptr) == 2);
  jarray_destroy(aptr);
}

void test_find_exists() {
    printf("test_find_exists\n");
  JArray *aptr = jarray_new(5);
  jarray_push(aptr, 1);
  jarray_push(aptr, 2);
  jarray_push(aptr, 3);
  jarray_push(aptr, 4);
  jarray_push(aptr, 5);
  printf("ALL PUSHED\n");
  assert(jarray_find(aptr, 1) == 0);
  assert(jarray_find(aptr, 4) == 3);
  assert(jarray_find(aptr, 5) == 4);
  jarray_destroy(aptr);
}

void test_find_not_exists() {
    printf("test_find_not_exists\n");
  JArray *aptr = jarray_new(3);
  jarray_push(aptr, 1);
  jarray_push(aptr, 2);
  jarray_push(aptr, 3);
  assert(jarray_find(aptr, 7) == -1);
  jarray_destroy(aptr);
}