#include <stdio.h>
#include <stdlib.h>

int mdc(int num1, int num2) {

    int resto;
    while(num1>0){
        if(num2>num1){
            resto = num1;
            num1 = num2;
            num2 = resto;
        }
        num1 = num1-num2;
    }
    return num2;
}

int main(void) {
    int val1, val2;
    printf("Digite os valores: \n", val1, val2);
    scanf("%d %d", &val1, &val2);

    printf("%d eh o MDC\n",mdc(val1, val2));



    return 0;
}
