#include<stdio.h>
void readarray(int n[],int size);
int minarray(int n[],int size);
int maxarray(int n[],int size);
int main(void) {
    int n[100],size;
    printf("Enter array size: ");
    scanf("%d",&size);
    readarray(n,size);
    printf("\n%d is the minimum value",minarray(n,size));
    printf("\n%d is the maximum value",maxarray(n,size));
return 0;
}
void readarray(int n[],int size) {
    for(int i=0;i<size;i++) {
        printf("Enter element: ");
        scanf("%d",&n[i]);
    }
}
int minarray(int n[],int size) {
   int min=n[0];
    for(int i=1;i<size;i++){
        if(min>n[i]){
            min=n[i];
        }
    }
    return min;
}
int maxarray(int n[],int size) {
   int max=n[0];
    for(int j=1;j<size;j++){
        if(n[j]>max){
            max=n[j];
        }
    }
    return max;
}