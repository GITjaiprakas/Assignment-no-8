#include<stdio.h>
int main(){
    int i,j,n=5,k=n-1;
    for(i=0;i<2*n-1;i++)
        printf("*");
        printf("\n");
    for(i=k-1;i>=0;i--){
        for(j=k;j>i;j--)
            printf(" ");
        for(j=1;j<2;j++)
            printf("*");
        for(j=1;j<=2*i-1;j++)
            printf(" ");
        if(i>0){
            for(j=0;j<1;j++)
                printf("*");
        }
        printf("\n");
    }
    return 0;
}
