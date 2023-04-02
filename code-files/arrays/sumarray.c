#include<stdio.h>
int main(void) {
    int n[100],size,sum=0;
    printf("enter array size: ");
    scanf("%d",&size);
    for(int i=0;i<size;i++) {
        printf("enter element: ");
        scanf("%d",&n[i]);
    }
    for(int i=0;i<size;i++) { sum+=n[i]; }
    printf("Sum of the elements of array is: %d\n",sum);
return 0;
}