#include<stdio.h>
    int main(){
        int i,j,n=5;
        for(i=n;i>0;i--){
            for(j=n;j>i;j--){
                printf(" ");
            }
            for(j=1;j<2*i;j++){
                printf("*");
            }
            printf("\n");
        }
        return 0;
    }
