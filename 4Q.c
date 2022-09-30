#include<stdio.h>
    int main(){
        int i,j;
        for(i=5;i>0;i--){
            for(j=5-i;j>0;j--){
                printf(" ");
            }
            for(j=i;j>0;j--){
                printf("*");
            }
            printf("\n");
        }
        return 0;
    }
