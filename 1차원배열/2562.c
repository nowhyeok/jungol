#include <stdio.h>
int main(){
    int i, n=1, max=0;

    int str[9];
    for(i=0;i<9;i++){
        scanf("%d", &str[i]);
    }
    max= str[0];
    for(int j=1;j<9;j++){
        if(max<str[j]){
            max=str[j];
            n=j+1;
        }
    }
    
    printf("%d\n%d", max, n);

    return 0;
}