#include<stdio.h>
    int main(){
        int i,j,n=7,k=n-1,c;
        for(i=0;i<n;i++){
            c=0;
            for(j=0;j<n-i;j++){
                printf("%c ",'A'+j);
                c++;
            }
            c-=2;
            for(j=0;j<2*i-1;j++)
                printf("  ");
            if(i>0)
                c=c+1;
            for(j=c;j>=0;j--)
                printf("%c ",'A'+j);
            printf("\n");
        }
        return 0;
    }
