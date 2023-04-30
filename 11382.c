#include <stdio.h>
int main(){
    long a, b, c;
    scanf("%ld %ld %ld", &a, &b, &c);
    printf("%ld", a+b+c);
    //자료형마다 저장할 수 있는 값의 범위
    //char : 1 byte, -128 ~ 127 또는 0 ~ 255 (부호 있는 경우와 없는 경우가 있음)
    //short : 2 bytes, -32,768 ~ 32,767
    //int : 4 bytes, -2,147,483,648 ~ 2,147,483,647
    //long : 4 bytes or 8 bytes, -2,147,483,648 ~ 2,147,483,647 또는 -9,223,372,036,854,775,808 ~ 9,223,372,036,854,775,807
    //float : 4 bytes, 1.2 x 10^-38 ~ 3.4 x 10^38
    //double : 8 bytes, 2.2 x 10^-308 ~ 1.8 x 10^308

    

    return 0;
}