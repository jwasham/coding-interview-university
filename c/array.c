#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#define N_SIZE 10
typedef struct Array
{
    int *array;
    size_t used;
    size_t capacity;
} Array;

void toString(Array *d_arr);
void init_array(Array *d_arr, size_t n);
void insertArr(Array *a, int data);
int find(Array *a, int item);
int get_capacity(Array *a);
int get_length(Array *a);
int find(Array *a, int item);
int pop(Array *a);
int main(int argc, char **argv)
{
    Array *a;
    int i = 0;
    int w;
    init_array(a, N_SIZE);
    printf("1: %d", a->capacity);

    for (i = 0; i < 50; i++)
    {
        insertArr(a, i);
    }
    int *arr;
    arr = a->array;

    w = pop(a);
    toString(a);
    printf("value popped %d\n", w);
    free(a->array);
    return 0;
}

void init_array(Array *d_arr, size_t n)
{
    d_arr->array = (int *)malloc(sizeof(int) * n);
    d_arr->used = 0;
    d_arr->capacity = n;
}

void insertArr(Array *a, int data)
{
    // check if the capacity is smaller or equal to the size of the array if so we need to expand it.
    int *arr = a->array;
    // printf("3");
    if (a->used >= a->capacity)
    {
        printf("Capacity is fulled, expand array is needed\n");
        a->capacity *= 2;

        if (!(a->array = (int *)realloc(a->array, a->capacity * sizeof(int))))
        {
            fprintf(stderr, "error: unable to expand the array.\n");
            exit(EXIT_FAILURE);
        }
    }
    arr[a->used] = data;
    a->used++;
}

void toString(Array *d_arr)
{
    int *arr;
    int i;
    arr = d_arr->array;
    printf("[");
    for (i = 0; i < d_arr->used; i++)
    {
        if (i != d_arr->used - 1)
        {
            printf("%d,", arr[i]);
        }
        else
        {
            printf("%d", arr[i]);
        }
    }
    printf("]");
}

int get_capacity(Array *a)
{
    return a->capacity;
}
int get_length(Array *a)
{
    return a->used;
}
void delete (Array *a, int n)
{
}

int pop(Array *a)
{
    int n;
    n = a->array[a->used - 1];
    a->array[--a->used] = 0;
    return n;
}

int is_empty(Array *a)
{
    if (!a->array)
        return 0;
    return 1;
}

int find(Array *a, int item)
{
    int *arr;
    int i;
    arr = a->array;
    for (i = 0; i < a->used; i++)
    {
        if (arr[i] == item)
            return 1;
    }
    return 0;
}