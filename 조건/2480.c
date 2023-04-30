#include <stdio.h>
int main(){
    int a, b, c, max;
    scanf("%d %d %d", &a, &b, &c);
    if(a==b && a==c && b==c){
        printf("%d", 10000+(a*1000));
    }
    else if(a!=b && a!=c && b!=c){
        max = a;
        if (b>max){
            max=b;
        }
        if (c>max){
            max=c;
        }
        printf("%d", max*100);
    }
    else{
        if(a==b){
            printf("%d", 1000+(a*100));
        }
        if(b==c){
            printf("%d", 1000+(b*100));
        }
        if(c==a){
            printf("%d", 1000+(c*100));
        }        
    }
    
    
    return 0;
}