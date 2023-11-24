#include<stdio.h>
void main() {
    int n,i;
    printf("enter a number: ");
    scanf("%d",&n);
    int a=4;
    for(i=1; i<=n; i++){
        printf("%d ",a);
        a=a+3;
    }
}