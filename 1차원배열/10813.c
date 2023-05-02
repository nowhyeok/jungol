#include <stdio.h>
int main(){
    int n=0, m=0, i=0, j=0, temp = 0;
    scanf("%d %d", &n, &m);
    int arr[n];
    for(int l=1;l<=n;l++){
        arr[l-1]=l;
    }
    for(int k=1;k<=m;k++){
        scanf("%d %d", &i, &j);
        temp = arr[i-1];
        arr[i-1] = arr[j-1];
        arr[j-1] = temp;
    }
    for(int l=0;l<n;l++){
        printf("%d ", arr[l]);
    }
    
    return 0;
}