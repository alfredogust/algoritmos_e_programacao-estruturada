#include <stdio.h>

int main() {
    double nota1, nota2, nota3, media;

    //solicita ao usuário as três notas
    printf("Digite a primeira nota: ");
    scanf("%lf", &nota1);

    printf("Digite a segunda nota: ");
    scanf("%lf", &nota2);

    printf("Digite a terceira nota: ");
    scanf("%lf", &nota3);

    //calcula a média das notas
    media = (nota1 + nota2 + nota3) / 3;

    //exibe a média
    printf("A média das notas é: %.2lf\n", media);

    return 0;
}
