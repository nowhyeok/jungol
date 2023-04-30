#include <stdio.h>
int main(){
    int H, M, m;
    scanf("%d %d\n%d", &H, &M, &m);
    if(M+m < 60){
        printf("%d %d", H, M+m);
    }
    else if(M+m > 0 && H+(M+m)/60 < 24){
        printf("%d %d", H+(M+m)/60, (M+m)%60);
    }
    else if(M+m > 0 && H+(M+m)/60 >= 24){
        printf("%d %d", H+(M+m)/60-24, (M+m)%60);
    }
    return 0;
}