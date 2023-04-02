//C program for towers of hanoi problem
#include<stdio.h>
void toh(int n,char s[],char d[],char a[]);
int main(void) {
    char s[]="source",d[]="destination",a[]="auxiliary";
    int n;
    printf("Enter the number of disks: ");
    scanf("%d",&n);
    toh(n,s,d,a);
return 0;
}
void toh(int n,char s[],char d[],char a[]) {
    static int step;
    if(n==1) printf("step %d:move disk %d from %s to %s\n",++step,n,s,d);
    else {
        toh(n-1,s,a,d);
        printf("step %d:move disk %d from %s to %s\n",++step,n,s,d);
        toh(n-1,a,d,s);
    }
}