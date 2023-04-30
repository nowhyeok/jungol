#include <stdio.h>
int main(){
    int X, N, a, b, c;
    a=0;
    b=0;
    c=a*b;
    scanf("%d\n%d", &X, &N);
    for(int i=1;i<=N;i++){
        scanf("%d %d", &a, &b);
        c=c+(a*b);
    }
    if(X==c){
        printf("Yes");
    }
    else{
        printf("No");
    }
}