#include <stdio.h>
int main(){
    int a, n;
    a=0;
    scanf("%d", &n);   
    for(int i=0;i<=n;i++){
        a=a+i;
    }
    printf("%d", a);
    return 0;
}