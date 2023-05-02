#include <stdio.h>
int main(){
    int n=0, m=0, i=0, j=0, k=0;
    scanf("%d %d", &n, &m);
    int arr[n-1];
    for(int l=0;l<n;l++){
        arr[l]=0;
    }
    
    for(int l=0;l<m;l++){
        scanf("%d %d %d", &i, &j, &k);
        for(int l=0;l<j-i+1;l++){
            arr[i+l-1]=k;
        }
    }
    for(int l=0;l<n-1;l++){
        printf("%d ", arr[l]);
    }
    printf("%d", arr[n-1]);
    return 0;
}