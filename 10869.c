#include <stdio.h>
int main(){
    int a, b;
    int div;
   
    scanf("%d %d", &a, &b);
    div = a / b;
    printf("%d\n", a+b);
    printf("%d\n", a-b);
    printf("%d\n", a*b);
    printf("%d\n", div);
    printf("%d\n", a%b);

    return 0;
}