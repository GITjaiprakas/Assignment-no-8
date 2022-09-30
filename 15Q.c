#include<stdio.h>
int main(){
    int i,j,n=5,k=n-1;;
    for(i=0;i<n-1;i++){
        for(j=0;j<k-i;j++)
            printf("  ");
        for(j=1;j<2;j++)
            printf("* ");
        for(j=1;j<i;j++)
            printf("  ");
        if(i>0){
            for(j=0;j<1;j++)
                printf("* ");
        }
        printf("\n");
    }
    for(i=0;i<n;i++)
        printf("* ");
    return 0;
}
