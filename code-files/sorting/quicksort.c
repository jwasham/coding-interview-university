#include<stdio.h>
void printarray(int n[],int size);
void qsort(int n[],int left,int right);
int main(void) {
    int n[50],size;
    printf("Enter array size: ");
    scanf("%d",&size);
    for(int i=0;i<size;i++) {
        printf("Enter element: ");
        scanf("%d",&n[i]);
    }
    printf("\nBefore sorting: \n");
    printarray(n,size);
    qsort(n,0,size-1);
    printf("\nAfter sorting: \n");
    printarray(n,size);
return 0;
}
void printarray(int n[],int size) {
    for(int i=0;i<size;i++) {
        printf("%d ",n[i]);
    }
}
void qsort(int n[],int left,int right) {
    int pivotelement=n[left],pivotindex,leftcopy=left,rightcopy=right;
    while(left<right) {
        while(n[right]>=pivotelement && (left<right)) 
         --right;
    
        if(left!=right) {
            n[left]=n[right];
            ++left;
        }
        while(n[left]<=pivotelement && (left<right)) 
            ++left; 
        if(left!=right) {
            n[right]=n[left];
            --right;
        }
    }
    pivotindex=left;
    n[pivotindex]=pivotelement;
    left=leftcopy;
    right=rightcopy;
    if(right>pivotindex) qsort(n,pivotindex+1,right);
    if(left<pivotindex) qsort(n,left,pivotindex-1);
}
