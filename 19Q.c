#include<stdio.h>
int main(){
    int i,j;
    for(i=0;i<3;i++){
        for(j=0;j<2-i;j++)
            printf(" ");
        for(j=0;j<5+2*i;j++)
        printf("*");
        for(j=0;j<5-2*i;j++)
            printf(" ");
        for(j=0;j<5+2*i;j++)
            printf("*");
        printf("\n");
    }
    for(j=0;j<6;j++)
        printf("*");
    printf("MySirG");
    for(j=0;j<7;j++)
        printf("*");
        printf("\n");
    for(i=9;i>0;i--){
        for(j=0;j<10-i;j++)
            printf(" ");
        for(j=0;j<2*i-1;j++)
            printf("*");
        printf("\n");
    }
}
     

