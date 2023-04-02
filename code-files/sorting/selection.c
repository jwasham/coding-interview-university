#include<stdio.h>
void readarr(int n[],int size);
void printarr(int n[],int size);
void selection(int n[],int size);
int main(void) {
    int n[100],size;
    printf("Enter array size: ");
    scanf("%d",&size);
    readarr(n,size);
    printf("\nBEFORE SORTING: ");
    printarr(n,size);
    selection(n,size);
    printf("\nAFTER SORTING: ");
    printarr(n,size);
return 0;
}
void readarr(int n[],int size) {
    for(int i=0;i<size;i++) {
        printf("Enter element: ");
        scanf("%d",&n[i]);
    }
    printf("\n");
}
void printarr(int n[],int size) {
    for(int i=0;i<size;i++) {
        printf("%d ",n[i]);
    }
}
void selection(int n[],int size) {
    int sei,temp;
    for(int i=0;i<size;i++) {
            sei=i;
        for(int j=i+1;j<size;j++) {
            if(n[sei]>n[j]) sei=j;
        }
        temp=n[i];
        n[i]=n[sei];
        n[sei]=temp;
        printf("\n");
        printarr(n,size);
    }
}
