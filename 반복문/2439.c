#include <stdio.h>
int main(){
    int n, i, j,k;
    scanf("%d", &n);
    for(k=0;k<n;k++){
        for(j=n;j>k+1;j--){
            printf(" ");
        }
        for(i=0;i<k+1;i++){
            printf("*");
        }
        printf("\n");
    }
}