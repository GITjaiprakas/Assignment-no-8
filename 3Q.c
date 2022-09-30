#include<stdio.h>
    int main(){
        int i=5,j;
        while(i>-1){
            for(j=1;j<=i;j++){
                printf("*");
            }
            printf("\n");
            i--;
        } 
        return 0;
    }
