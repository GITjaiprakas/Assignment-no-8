#include<stdio.h>
    int main(){
        int i,j,n=5;
        for(i=0;i<n;i++){
            for(j=1;j<=n-i;j++){
                printf("*");
            }
            for(j=1;j<=2*i;j++){
                printf(" ");
            }
            for(j=i;j<n;j++){
                printf("*");
            }
            printf("\n");
        }
        return 0;
    }
