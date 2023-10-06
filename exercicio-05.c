#include <stdio.h>

int main() {
    double valorEmDolares, taxaDeConversao, valorConvertido;

    //solicita o valor em dólares e a taxa de conversão
    printf("Digite o valor em dólares: ");
    scanf("%lf", &valorEmDolares);

    printf("Digite a taxa de conversão: ");
    scanf("%lf", &taxaDeConversao);

    //calcula o valor convertido
    valorConvertido = valorEmDolares * taxaDeConversao;

    //exibe valor convertido
    printf("O valor convertido é: %.2lf\n", valorConvertido);

    return 0;
}
