#include <stdio.h>
int main(){
    int n, max=0, min=0;
    scanf("%d", &n);
    int str[n];
    for(int i=0;i<n;i++){
        scanf("%d", &str[i]);
    }
    max= min= str[0];
    for(int i=1;i<n;i++){
        if(max<str[i]){
            max=str[i];
        }
        if(min>str[i]){
            min=str[i];
        }
    }
    printf("%d %d", min, max);

    return 0;
}