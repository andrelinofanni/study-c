#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int opcao, num1, num2;

    do {
        printf("\nEscolha qual operacao voce dedseja utilizar: \n1 - Soma\n2 - Subtracao\n3 - Multiplicacao\n4 - Divisao\nOu pressione 0 para sair\n");
        scanf("%d", &opcao);

        if(opcao > 0 && opcao < 5){
            printf("Digite dois valores: ");
            scanf("%d%d",&num1, &num2);
        }

        switch(opcao) {
        case 1:
            printf("Soma: %d\n", num1 + num2);
            break;
        case 2:
            printf("Subtracao: %d\n", num1 - num2);
            break;
        case 3:
            printf("Multiplicacao: %d\n", num1 * num2);
            break;
        case 4:
            while(num2 == 0) {
                printf("Digite outro valor: \n");
                scanf("%d", &num2);
            }
            printf("Divisao: %d\n", num1 / num2);
            break;
        default:
            printf("\nSaindo...\n ");
        }
    } while(opcao != 0);

    return 0;
}
