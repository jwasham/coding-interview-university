#include<stdio.h>
int main(void) {
    int n[10][10],rows,cols;
    printf("Enter no.of rows: ");
    scanf("%d",&rows);
    printf("Enter no.of cols: ");
    scanf("%d",&cols);
    for(int i=0;i<rows;i++) {
        for(int j=0;j<cols;j++) {
            printf("Enter element of row %d,col %d: ",i+1,j+1);
            scanf("%d",&n[i][j]);
        }
    }
    printf("\nOriginal matrix: \n");
    for(int i=0;i<rows;i++) {
        for(int j=0;j<cols;j++) {
            printf("%d ",n[i][j]);
        }
        printf("\n");
    }
    printf("\nTranspose of the matrix: \n");
    for(int i=0;i<cols;i++) {
        for(int j=0;j<rows;j++) {
            printf("%d ",n[j][i]);
        }
        printf("\n");
    }
return 0;
}