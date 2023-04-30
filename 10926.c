#include <stdio.h>
int main(){
    char a[50];
    scanf("%s", &a); //문자열 입력은 %s
                     //문자열은 여러 개의 문자가 합쳐진 문자열이므로, 입력받을 때 주의해야 할 점이 있습니다. %s 서식 지정자는 공백 전까지의 문자열만 입력받습니다.
                     //만약 문자열에 공백이 포함되어 있을 경우, 공백 이전까지만 입력받고 그 이후의 문자는 무시됩니다.
                     //따라서 공백을 포함한 문자열을 입력받으려면 fgets() 함수를 사용해야 합니다. 
                     //scanf는 자동으로 개행이 되기 때문에 버퍼에 개행문자가 남아있음 따라서 fgets()함수가 실행되지 않음.
    printf("%s??!\n", a);
    return 0;

}