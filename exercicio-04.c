#include <stdio.h>

int main() {
    double capital, taxaDeJuros, tempo, juros;

    //solicita ao user inserir capital, taxa de juros e tempo
    printf("Digite o capital: ");
    scanf("%lf", &capital);

    printf("Digite a taxa de juros (em porcentagem): ");
    scanf("%lf", &taxaDeJuros);

    printf("Digite o tempo (em anos): ");
    scanf("%lf", &tempo);

    //calcula os juros simples
    juros = (capital * taxaDeJuros * tempo) / 100;

    //exibe os valores dos juros
    printf("O valor dos juros simples é: %.2lf\n", juros);

    return 0;
}