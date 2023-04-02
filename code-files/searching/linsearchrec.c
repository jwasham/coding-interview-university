#include<stdio.h>
void readarr(int n[],int size);
int linsearchrec(int n[],int size,int sele);
int main(void) {
    int n[100],size,sele,pos;
    printf("Enter array size: ");
    scanf("%d",&size);
    readarr(n,size);
    printf("\nEnter the element to search: ");
    scanf("%d",&sele);
    pos=linsearchrec(n,size,sele);
    
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
int linsearchrec(int n[],int size,int sele) {
    static int i;
    if(i>=size) return -1;
    else if(sele==n[i++]) return i-1;
    else return linsearchrec(n,size,sele);
}
