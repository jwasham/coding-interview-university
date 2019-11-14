#include <stdio.h>
#include <stdlib.h>
#include "array.h"
#include "array.c"

void run_example();

// Implements a vector (called JArray) from a C array.

int main(int argc, char* argv[]) {
  run_all_tests();
  printf("TEST FINISHED\n");
  run_example();

  return EXIT_SUCCESS;
}

void run_example() {
  int capacity = 0;

  printf("Enter many numbers would you like to store: ");
  scanf("%d", &capacity);

  printf("You'll be storing %d numbers.\n", capacity);

  // make it so

  JArray* aptr = jarray_new(capacity);

  for (int d = 1; d <= capacity; ++d) {
    jarray_push(aptr, d);
  }

  int insert_value = 999;
  printf(" - Inserting %d at index %d.\n", insert_value, capacity - 1);
  jarray_insert(aptr, capacity - 1, insert_value);

  printf(" - Prepending %d.\n", 12);
  jarray_prepend(aptr, 12);

  printf(" - Popping an item: %d\n", jarray_pop(aptr));

  jarray_print(aptr);

  int index_to_remove = jarray_size(aptr) - 3;
  printf(" - Deleting from index %d\n", index_to_remove);
  jarray_delete(aptr, index_to_remove);

  jarray_push(aptr, 12);
  jarray_push(aptr, 12);

  jarray_print(aptr);

  printf(" - Deleting 12s\n");

  jarray_remove(aptr, 12);

  jarray_print(aptr);

  jarray_destroy(aptr);
}