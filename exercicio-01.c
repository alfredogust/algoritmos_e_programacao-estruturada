#include <stdio.h>
#include <locale.h>

int main() {

    setlocale(LC_ALL, "pt_BR");

    double num1, num2;

    //solicita ao usuário inserir dois números
    printf("Digite o primeiro número: ");
    scanf("%lf", &num1);

    printf("Digite o segundo número: ");
    scanf("%lf", &num2); 

    //realiza operações matemáticas e exibe os resultados
    printf("Soma: %.2lf\n", num1 + num2);
    printf("Subtração: %.2lf\n", num1 - num2);
    printf("Multiplicação: %.2lf\n", num1 * num2);

    //verifica se o segundo número é zero antes de realizar a divisão
    if (num2 != 0) { 
        printf("Divisão: %.2lf\n", num1 / num2);
    } else {
        printf("Divisão por zero não permitida.\n");
    }

    return 0;
}
