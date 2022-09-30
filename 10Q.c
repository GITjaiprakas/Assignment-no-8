#include<stdio.h>
    int main(){
        int i,j,n=4,k;
        for(i=0;i<n;i++){
            k=0;
            for(j=0;j<n-i;j++){
                printf("%d",j+1);
                k++;
            }
            for(j=0;j<2*i-1;j++){
                printf(" ");
            }
            if(i==0){
                k--;
            }
            for(j=k;j>0;j--){
                printf("%d",j);
            }
            printf("\n");
        }
        return 0;
    }
