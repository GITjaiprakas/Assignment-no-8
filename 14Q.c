#include<stdio.h>
int main(){
    int i,j,n=5;
    for(i=0;i<n-1;i++){
        printf("* ");
        for(j=0;j<i-1;j++){
            printf("  ");
        }
        if(i>0){
            for(j=i;j>=i;j--){
            printf("*");
        }
        }
        printf("\n");
    }
    for(i=0;i<n;i++){
        printf("* ");
    }
    return 0;
}
