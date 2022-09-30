#include<stdio.h>
    int main(){
        int i,j,n=5,temp=n;
        for(i=1;i<n+1;i++){
            for(j=1;j<temp;j++){
                printf(" ");
            }
            temp--;
            for(j=1;j<=2*i-1;j++){
                printf("*");
            }
            printf("\n");
        }
        return 0;
    }
