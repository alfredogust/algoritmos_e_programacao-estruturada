#include <stdio.h>

int main() {
    double nota1, nota2, nota3, peso1, peso2, peso3, mediaPonderada;

    //solicita notas e  os respectivos pesos
    printf("Digite a primeira nota: ");
    scanf("%lf", &nota1);

    printf("Digite o peso da primeira nota: ");
    scanf("%lf", &peso1);

    printf("Digite a segunda nota: ");
    scanf("%lf", &nota2);

    printf("Digite o peso da segunda nota: ");
    scanf("%lf", &peso2);

    printf("Digite a terceira nota: ");
    scanf("%lf", &nota3);

    printf("Digite o peso da terceira nota: ");
    scanf("%lf", &peso3);

    //calcula a média ponderada
    mediaPonderada = (nota1 * peso1 + nota2 * peso2 + nota3 * peso3) / (peso1 + peso2 + peso3);

    //exibe a média ponderada
    printf("A média ponderada das notas é: %.2lf\n", mediaPonderada);

    return 0;
}
