#include<stdio.h>
void readmatrix(int m[][10],int rows,int cols);
void printmatrix(int m[][10],int rows,int cols);
void sum(int m1[][10],int m2[][10],int m3[][10],int r1,int c1);
void product(int m1[][10],int m2[][10],int pro[][10],int r1,int c1, int c2);
int main(void) {
    int m1[10][10],m2[10][10],m3[10][10],pro[10][10]={0},r1,c1,r2,c2;
    printf("Enter no.of rows in matrix 1: ");
    scanf("%d",&r1);
    printf("Enter no.of cols in matrix 1: ");
    scanf("%d",&c1);
    printf("Enter no.of rows in matrix 2: ");
    scanf("%d",&r2);
    printf("Enter no.of cols in matrix 2: ");
    scanf("%d",&c2);
    printf("MATRIX 1:\n");
    readmatrix(m1,r1,c1);
    printf("MATRIX 2:\n");
    readmatrix(m2,r2,c2);
    if(r1==r2 && c1==c2) {
        printf("\nsum of matrices: \n");
        sum(m1,m2,m3,r1,c1);
        printmatrix(m3,r1,c1);
    } else {
        printf("\nsum not possible\n");
    }
    if(r2==c1) {
        printf("\nproduct of matrices: \n");
        product(m1,m2,pro,r1,c1,c2);
        printmatrix(pro,r1,c2);
    } else {
        printf("\nproduct not possible\n");
    }
return 0;
}
void readmatrix(int m[][10],int rows,int cols) {
    for(int i=0;i<rows;i++) {
        for(int j=0;j<cols;j++) {
            printf("Enter element of row %d,col %d: ",i+1,j+1);
            scanf("%d",&m[i][j]);
        }
    }
}
void printmatrix(int m[][10],int rows,int cols) {
    for(int i=0;i<rows;i++) {
        printf("\n");
        for(int j=0;j<cols;j++) {
           printf("%d ",m[i][j]);
        }
    }
}
void sum(int m1[][10],int m2[][10],int m3[][10],int r1,int c1) {
    for(int i=0;i<r1;i++){
        for(int j=0;j<c1;j++) {
            m3[i][j]=m1[i][j]+m2[i][j];
        }
    }
}
void product(int m1[][10],int m2[][10],int pro[][10],int r1,int c1, int c2) {
    for(int i=0;i<r1;i++) {
        for(int j=0;j<c2;j++) {
            for(int k=0;k<c1;k++) {
                pro[i][j] += m1[i][k]*m2[k][j];
            }
        }
    }
}
