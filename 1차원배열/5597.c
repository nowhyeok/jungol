#include <stdio.h>
int main(){
    int n=0;
    for(int i=0;i<n;i++){

    }
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