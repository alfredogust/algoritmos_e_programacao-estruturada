#include <stdio.h>

int main() {
    double medidaEmPolegadas, medidaEmCentimetros;

    //solicita a medida em polegadas
    printf("Digite a medida em polegadas: ");
    scanf("%lf", &medidaEmPolegadas);

    //converte a medidda para centímentros
    medidaEmCentimetros = medidaEmPolegadas * 2.54;

    //exibe a medida em centímetros
    printf("A medida em centímetros é: %.2lf\n", medidaEmCentimetros);

    return 0;
}
