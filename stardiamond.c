#include<stdio.h>
int main(){
    int a=1,i;
    for(int i=1; i<=4; i++){
        for(int j=1; j<=4-i; j++){
            printf(" ");
        }
        for(int k=1; k<=a; k++){
            printf("*");
        }
    a=a+2;
    printf("\n");
    }
    int s=5;
    for(int m=1; m<=5; m++){
        for(int n=1; n<=m; n++){
            printf(" ");
        }
        for(int o=1;  o<=s; o++){
            printf("*");
        }
        s=s-2;
        printf("\n");

    }
}
            


