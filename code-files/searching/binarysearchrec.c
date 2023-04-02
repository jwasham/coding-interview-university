#include<stdio.h>
void readarr(int n[],int size);
void bubble(int n[],int size);
int binsearchrec(int n[],int left,int right,int sele);
int main(void) {
    int n[100],size,sele,pos;
    printf("Enter array size: ");
    scanf("%d",&size);
    readarr(n,size);
    printf("\nEnter the element to search: ");
    scanf("%d",&sele);
    bubble(n,size);
    pos=binsearchrec(n,0,size-1,sele);
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
int binsearchrec(int n[],int left,int right,int sele) {
    static int mid;
    mid=(left+right)/2;
    if(left>right) return -1;
    else if(sele==n[mid]) return mid;
    else if(sele<n[mid]) return binsearchrec(n,left,mid-1,sele);
    else return binsearchrec(n,mid+1,right,sele);
}