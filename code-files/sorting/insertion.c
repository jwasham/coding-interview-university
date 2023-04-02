#include<stdio.h>
#include<stdbool.h>
void readarr(int n[],int size);
void printarr(int n[],int size);
void insertion(int n[],int size);
int main(void) {
    int n[100],size;
    printf("Enter array size: ");
    scanf("%d",&size);
    readarr(n,size);
    printf("\nBEFORE SORTING: ");
    printarr(n,size);
    insertion(n,size);
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
void insertion(int n[],int size) {
    int i,j,temp;
    bool islocated;
    for(i=1;i<size;i++) {
        islocated=false;
        temp=n[i];
        for(j=i-1;j>=0 && !islocated;) {
            if(temp<n[j]) {
                n[j+1]=n[j];
                --j;
            }
            else {
                islocated=true;
            }
        }
        n[j+1]=temp;
    }
}
