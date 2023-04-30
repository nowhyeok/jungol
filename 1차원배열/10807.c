#include <stdio.h>

int main(){
    int a, v, n=0;
    scanf("%d", &a);
    int str[a];
    for(int i=0; i<a; i++){
        scanf("%d", &str[i]);
    }
    scanf("%d", &v);
    for(int i=0; i<a; i++){
        if(str[i]==v){
            n++;
        }
    }
    printf("%d\n", n);

    return 0;
}