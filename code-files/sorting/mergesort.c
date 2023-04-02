#include<stdio.h>
void printarray(int n[],int size);
void msort(int n[],int temp[],int left,int right);
void merge(int n[],int temp[],int left,int mid,int right);
int main(void) {
    int n[50],temp[50],size;
    printf("Enter array size: ");
    scanf("%d",&size);
    for(int i=0;i<size;i++) {
        printf("Enter element: ");
        scanf("%d",&n[i]);
    }
    printf("\nBefore sorting: \n");
    printarray(n,size);
    msort(n,temp,0,size-1);
    printf("\nAfter sorting: \n");
    printarray(n,size);
return 0;
}
void printarray(int n[],int size) {
    for(int i=0;i<size;i++) {
        printf("%d ",n[i]);
    }
}
void msort(int n[],int temp[],int left,int right) {
    int mid;
    if(left<right) {
        mid=(left+right)/2;
        msort(n,temp,left,mid);
        msort(n,temp,mid+1,right);
        merge(n,temp,left,mid+1,right);
    }
}

void merge(int n[],int temp[],int left,int mid,int right) {
    int leftend=mid-1,tempindex=left,cnt,noofele=right-left+1;
    while(left<=leftend && mid<=right) {
        if(n[left]<=n[mid]) {
            temp[tempindex] = n[left];
            ++left;
            ++tempindex;
        } else {
            temp[tempindex] = n[mid];
            ++mid;
            ++tempindex;
        }
    }
    while(left<=leftend) {
        temp[tempindex] = n[left];
        ++left;
        ++tempindex;
    }
    while(mid<=right) {
        temp[tempindex] = n[mid];
        ++mid;
        ++tempindex;
    }
    for(cnt=1;cnt<=noofele;++cnt) {
        n[right] = temp[right];
        --right;
    }
}