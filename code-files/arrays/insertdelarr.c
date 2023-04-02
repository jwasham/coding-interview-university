#include <stdio.h>
void insert(int *num,int *size);
void delete(int *num,int *size);
int main(void) {
    int num[100],size,choice;
    printf("Enter the size of array: ");
    scanf("%d",&size);
    for(int i=0;i<size;i++) {
        printf("Enter element: ");
        scanf("%d",&num[i]);
    }
    printf("\nOriginal array: \n");
    for(int i=0;i<size;i++) {
        printf("%d ",num[i]);
    }
    printf("\nEnter 1 for insertion or 2 for deletion of an element: ");
    scanf("%d",&choice);
    if(choice==1) insert(num,&size);
    else if(choice==2) delete(num,&size);
return 0;
}
void insert(int *num,int *size) {
    int ele,pos;
    printf("Enter the element to insert: ");
    scanf("%d",&ele);
    printf("Enter index to insert the element at: ");
    scanf("%d",&pos);
    for(int i=*(size)-1;i>=pos;i--) {
        *(num+i+1)= *(num+i);
    }
    *(num+pos)=ele;
    *(size)=*(size)+1;
    printf("\narray after inserting the element: \n");
    for(int i=0;i<*(size);i++) {
        printf("%d ",*(num+i));
    }
}
void delete(int *num,int *size) {
    int ele;
    printf("Enter the element to delete: ");
    scanf("%d",&ele);
    for (int i = 0; i <*(size); i++) {
        if(*(num+i)==ele) {
            for(int j=i;j<*(size)-1;j++) {
                *(num+j) = *(num+j+1);
            }
            *(size)=*(size)-1;
            break;
        }
		//*(num+i) = *(num+i+1);
    }
    printf("\narray after deleting the element: \n");
    for(int i=0;i<*(size);i++) {
        printf("%d ",*(num+i));
    }
}