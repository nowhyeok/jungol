#include <stdio.h>
int main(){
    int a, b, c, d, e;
    scanf("%d %d", &a, &b);
    c= a*(b%10);
    d= a*(b%100/10);
    e= a*(b/100);
    if (a, b >= 100 && a, b <= 999){
        printf("%d\n", c);
        printf("%d\n", d);
        printf("%d\n", e);
        printf("%d", c+(d*10)+(e*100));
    }

return 0;
}