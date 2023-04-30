#include <stdio.h>
int main(){
    int T, a, b, i;
    scanf("%d\n", &T);

    for(i=1;i<=T;i++){
        scanf("%d %d", &a, &b);
        printf("%d\n",a+b);
    }

     return 0;
}