#include<stdio.h>
    int main(){
        int i,j,n=5,k=n-1;
        for(i=0;i<n;i++){
            for(j=0;j<k-i;j++){
                printf("  ");
            }
            for(j=0;j<1+i;j++){
                printf("%c ",'A'+j);
            }
            for(j=j-2;j>=0;j--){
                printf("%c ",'A'+j);
            }
            printf("\n");
        }
        return 0;
    }
