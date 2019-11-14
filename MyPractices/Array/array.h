#ifndef PROJECT_ARRAY_H
#define PROJECT_ARRAY_H

#include <assert.h>
#include <stdbool.h>

const int kMinCapacity = 16;
const int kGrowthFactor = 2;
const int kShrinkFactor = 4;

typedef struct JWImplementationArray {
  int size;
  int capacity;
  int *data;
} JArray;

// array functions

// Creates a new JArray (vector in our case) to accommodate
// the given initial capacity.
JArray *jarray_new(int capacity);
void jarray_destroy(JArray *arrptr);

// Checks to see if resizing is needed to support the candidate_size
// and resizes to accommodate.
void jarray_resize_for_size(JArray *arrptr, int candidate_size);
// Determines the actual capacity (in terms of the power of growth factor)
// required to accomodate a given capacity.
int jarray_determine_capacity(int capacity);
// Increases the array size to size determined by growth factor
void jarray_upsize(JArray *arrptr);
// Decreases the array size to size determined by growth factor
void jarray_downsize(JArray *arrptr);
// Returns the number of elements managed in the array.
int jarray_size(JArray *arrptr);
// Appends the given item to the end of the array.
void jarray_push(JArray *arrptr, int item);
// Prints public information about the array for debug purposes.
void jarray_print(JArray *arrptr);
// Returns the actual capacity the array can accommodate.
int jarray_capacity(JArray *arrptr);
// Returns the value stored at the given index.
int jarray_at(JArray *arrptr, int index);
// Returns true if array is empty.
bool jarray_is_empty(JArray *arrptr);
// Inserts the given value at the given index, shifting
// current and trailing elements to the right.
void jarray_insert(JArray *arrptr, int index, int value);
// Prepends the given value to the array, shifting trailing
// elements to the right.
void jarray_prepend(JArray *arrptr, int value);
// Removes the last item from the array and returns its value.
int jarray_pop(JArray *arrptr);
// Deletes the item stored at the given index, shifting trailing
// elements to the left.
void jarray_delete(JArray *arrptr, int index);
// Removes the given value from the array, even if it appears more than once.
void jarray_remove(JArray *arrptr, int value);
// Returns the index of the first occurrence of the given value in the array.
int jarray_find(JArray *arrptr, int value);
// Checks to see if given value is valid for memory, and exits if so
void check_address(void *p);

// tests

void run_all_tests();

void test_append();
void test_size_init();
void test_append_past_capacity();
void test_capacity();
void test_empty();
void test_resize();
void test_at();
void test_insert();
void test_prepend();
void test_pop();
void test_remove();
void test_find_exists();
void test_find_not_exists();

#endif  // PROJECT_ARRAY_H