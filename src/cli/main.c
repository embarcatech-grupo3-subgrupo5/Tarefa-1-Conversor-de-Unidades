#include <stdio.h>
#include "../converters/converters.h"

int main() {
    int categoria, continuar;

    do {
        printf("Bem-vindo ao Conversor de Unidades!\n\n");
        printf("Escolha uma categoria para converter:\n");
        printf("1. Comprimento\n");
        printf("2. Massa\n");
        printf("3. Volume\n");
        printf("4. Temperatura\n");
        printf("5. Velocidade\n");
        printf("6. Energia e Potencia\n");
        printf("7. Area\n");
        printf("8. Tempo\n");
        printf("9. Armazenamento\n");
        printf("Escolha: ");
        scanf("%d", &categoria);

        switch (categoria) {
            case 4:
                menu_temperatura();
                break;
            default:
                printf("Esta categoria ainda nao foi implementada.\n");
        }

        printf("\nDeseja fazer outra conversao? (1-Sim / 0-Nao): ");
        scanf("%d", &continuar);

    } while (continuar == 1);

    printf("Obrigado por usar o conversor. Ate mais!\n");

    return 0;
}

void menu_temperatura() {
    int opcao;
    double entrada, resultado;

    printf("\nEscolha a conversao de temperatura:\n");
    printf("1. Celsius para Fahrenheit\n");
    printf("2. Celsius para Kelvin\n");
    printf("3. Fahrenheit para Celsius\n");
    printf("4. Fahrenheit para Kelvin\n");
    printf("5. Kelvin para Celsius\n");
    printf("6. Kelvin para Fahrenheit\n");
    printf("Escolha: ");
    scanf("%d", &opcao);

    printf("Digite o valor a ser convertido: ");
    scanf("%lf", &entrada);

    switch (opcao) {
        case 1:
            resultado = celsius_para_fahrenheit(entrada);
            printf("Resultado: %.2lf Fahrenheit\n", resultado);
            break;
        case 2:
            resultado = celsius_para_kelvin(entrada);
            printf("Resultado: %.2lf Kelvin\n", resultado);
            break;
        case 3:
            resultado = fahrenheit_para_celsius(entrada);
            printf("Resultado: %.2lf Celsius\n", resultado);
            break;
        case 4:
            resultado = fahrenheit_para_kelvin(entrada);
            printf("Resultado: %.2lf Kelvin\n", resultado);
            break;
        case 5:
            resultado = kelvin_para_celsius(entrada);
            printf("Resultado: %.2lf Celsius\n", resultado);
            break;
        case 6:
            resultado = kelvin_para_fahrenheit(entrada);
            printf("Resultado: %.2lf Fahrenheit\n", resultado);
            break;
        default:
            printf("Opcao invalida.\n");
    }
}

