#include <stdio.h>
int main(){
    int a, n;
    int arr[31]={0};
    
    for(int i=0;i<28;i++){
        scanf("%d", &a);
        arr[a] = 1;
    }
    for(int i=1;i<31;i++){
        if(arr[i]==0){
            printf("%d\n", i);
        }
    }
    return 0;
}