#include<stdio.h>
#include<conio.h>
void swap(int *xp,int *yp)
{
 int temp=*xp;
 *xp=*yp;
 *yp=temp;
}
void bubblesort(int arr[],int n)
{
 int i,int j;
 for(i=0;i<n-1;i++)
  for(j=0;j<n-i-1;j++)
   if(arr[j]>arr[j+1])
    swap(&arr[j],&arr[j+1]);
}
void printArrray(int arr[],int size)
{
 int i;
 for(i=0;i<size;i++)
  printf("%d" arr[i]);
 printf("\n");
}
void main()
{int arr[]={64,34,25,12,55,99};
int n=sizeof(arr)/sizeof(arr[0]);
bubblesort(arr,n);
printf("\n Sorted array: ");
printArray(arr,n);
getch();
}