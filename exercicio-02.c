#include <stdio.h>
#include <locale.h>

int main() {

    setlocale(LC_ALL, "pt_BR");
    double celsius, fahrenheit;

    //solicita a temperatura em celsius para o usuário
    printf("Digite a temperatura em Celsius: ");
    scanf("%lf", &celsius);

    //calcula a temperatura em fahrenheit
    fahrenheit = (celsius * 9 / 5) + 32;

    //exibe a temperatura em fahrenheit
    printf("A temperatura em fahrenheit é: %.2lf\n", fahrenheit);

    return 0;
}