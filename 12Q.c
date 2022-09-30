#include<stdio.h>
    int main(){
        int i,j,n=4,k=n-1;
        for(i=0;i<n;i++){
            for(j=0;j<i;j++){
                printf("  ");
            }
            for(j=0;j<n-i;j++){
                printf("%c ",'A'+j);
            }
            for(j=j-2;j>=0;j--){
                printf("%c ",'A'+j);
            }
            printf("\n");
        }
        return 0;
    }
