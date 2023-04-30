#include <stdio.h>
int main(){
    int a, i;
    char b[]="long";
    scanf("%d", &a);
    for(int i=0;i<a/4;i++){
        printf("%s ", b);
    }
    printf("int");
    return 0;
}