#include <string.h>
#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    int *array;
    size_t used;
    size_t size;
} Array;

int *sortedSquares(int *nums, int numsSize, int *returnSize);
int main(int argc, char **argv)
{
    return 0;
}

int *sortedSquares(int *nums, int numsSize, int *returnSize)
{
    /*For array that is non-decreasing order, return an array of the squares of each number sorted in non-decreasing order.*/
    int i = numsSize - 1;
    int *retarr = (int *)malloc(numsSize * sizeof(int));
    int *p, *q;
    p = nums;
    q = nums + (numsSize - 1);
    // printf("p: %p, q:%p\n", p, q);
    while (p <= q)
    {
        *p = *p > 0 ? *p : *p * -1;
        *q = *q > 0 ? *q : *q * -1;
        printf("*p: %d *q: %d \n", *p, *q);
        if (*p > *q)
        {
            retarr[i--] = *p * (*p);
            p++;
        }
        else
        {
            retarr[i--] = *q * (*q);
            q--;
        }
    }

    return retarr;
}