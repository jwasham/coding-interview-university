#include<stdio.h>
void readarr(int n[],int size);
void bubble(int n[],int size);
int binsearch(int n[],int size,int sele);
int main(void) {
    int n[100],size,sele,pos;
    printf("Enter array size: ");
    scanf("%d",&size);
    readarr(n,size);
    printf("\nEnter the element to search: ");
    scanf("%d",&sele);
    bubble(n,size);
    pos=binsearch(n,size,sele);
    if(pos==-1) printf("\nElement not found\n");
    else printf("\nElement found at index %d\n",pos);
return 0;
}
void readarr(int n[],int size) {
    for(int i=0;i<size;i++) {
        printf("Enter element: ");
        scanf("%d",&n[i]);
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
int binsearch(int n[],int size,int sele) {
    int left=0,right=size-1,mid;
    while(left<=right) {
        mid=(left+right)/2;
        if(sele==n[mid]) return mid;
        else if(sele<n[mid]) right=mid-1;
        else left=mid+1;
    }
    return -1;
}