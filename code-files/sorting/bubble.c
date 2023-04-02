#include<stdio.h>
void readarr(int n[],int size);
void printarr(int n[],int size);
void bubble(int n[],int size);
int main(void) {
    int n[100],size;
    printf("Enter array size: ");
    scanf("%d",&size);
    readarr(n,size);
    printf("\nBEFORE SORTING: ");
    printarr(n,size);
    bubble(n,size);
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
void bubble(int n[],int size) {
    int temp;
    for(int i=0;i<size;i++) {
        for(int j=size-1;j>i;j--) {
            if(n[j]<n[j-1]) {
                temp=n[j];
                n[j]=n[j-1];
                n[j-1]=temp;
            }
        }
    }
}
