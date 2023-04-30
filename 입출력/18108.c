#include <stdio.h>
int main(){
    int a;
    scanf("%d", &a);
    if(a >= 1000 && a<= 3000){
        printf("%d", a-543); //printf 에서 변수의 연산은 오른쪽에서 할 수 있음. 왼쪽은 출력할 문자열이고 콤마 오른쪽은 값이나 변수
    }
    
    return 0;
}