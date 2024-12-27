#include <stdio.h>
#include "../converters/converters.h"

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

void menu_massa() {
    int opcao;
    double entrada, resultado;

    printf("\nEscolha a conversao de massa:\n");
    printf("1. Grama para Quilograma\n");
    printf("2. Quilograma para Grama\n");
    printf("3. Quilograma para Tonelada\n");
    printf("4. Tonelada para Quilograma\n");
    printf("5. Grama para Tonelada\n");
    printf("6. Tonelada para Grama\n");
    printf("Escolha: ");
    scanf("%d", &opcao);

    printf("Digite o valor a ser convertido: ");
    scanf("%lf", &entrada);

    switch (opcao) {
        case 1:
            resultado = grama_para_quilograma(entrada);
            printf("Resultado: %.2lf Quilograma\n", resultado);
            break;
        case 2:
            resultado = quilograma_para_grama(entrada);
            printf("Resultado: %.2lf Grama\n", resultado);
            break;
        case 3:
            resultado = quilograma_para_tonelada(entrada);
            printf("Resultado: %.2lf Tonelada\n", resultado);
            break;
        case 4:
            resultado = tonelada_para_quilograma(entrada);
            printf("Resultado: %.2lf Quilograma\n", resultado);
            break;
        case 5:
            resultado = grama_para_tonelada(entrada);
            printf("Resultado: %.2lf Tonelada\n", resultado);
            break;
        case 6:
            resultado = tonelada_para_grama(entrada);
            printf("Resultado: %.2lf Grama\n", resultado);
            break;
        default:
            printf("Opcao invalida.\n");
    }
}

void menu_tempo() {

    int opcao;
    double entrada, resultado;

    printf("\nEscolha a conversao de tempo:\n");
    printf("1. Segundos para Minutos\n");
    printf("2. Segundos para Horas\n");
    printf("3. Minutos para Segundos\n");
    printf("4. Minutos para Horas\n");
    printf("5. Horas para Segundos\n");
    printf("6. Horas para Minutos\n");
    printf("Escolha: ");
    scanf("%d", &opcao);

    printf("Digite o valor a ser convertido: ");
    scanf("%lf", &entrada);

    switch (opcao) {
        case 1:
            resultado = segundos_para_minutos(entrada);
            printf("Resultado: %.2lf Minutos\n", resultado);
            break;
        case 2:
            resultado = segundos_para_horas(entrada);
            printf("Resultado: %.2lf Horas\n", resultado);
            break;
        case 3:
            resultado = minutos_para_segundos(entrada);
            printf("Resultado: %.2lf Segundos\n", resultado);
            break;
        case 4:
            resultado = minutos_para_horas(entrada);
            printf("Resultado: %.2lf Horas\n", resultado);
            break;
        case 5:
            resultado = horas_para_segundos(entrada);
            printf("Resultado: %.2lf Segundos\n", resultado);
            break;
        case 6:
            resultado = horas_para_minutos(entrada);
            printf("Resultado: %.2lf Minutos\n", resultado);
            break;
        default:
            printf("Opcao invalida.\n");
    }
}

void menu_comprimento() {
    int opcao;
    double entrada, resultado;

    printf("\nEscolha a conversao de comprimento:\n");
    printf("1. Metro para Centimetro\n");
    printf("2. Metro para Milimetro\n");
    printf("3. Centimetro para Metro\n");
    printf("4. Centimetro para Milimetro\n");
    printf("5. Milimetro para Metro\n");
    printf("6. Milimetro para Centimetro\n");
    printf("Escolha: ");
    scanf("%d", &opcao);

    printf("Digite o valor a ser convertido: ");
    scanf("%lf", &entrada);

    switch (opcao) {
        case 1:
            resultado = metro_para_centimetro(entrada);
            printf("Resultado: %.2lf Centimetro\n", resultado);
            break;
        case 2:
            resultado = metro_para_milimetro(entrada);
            printf("Resultado: %.2lf Milimetro\n", resultado);
            break;
        case 3:
            resultado = centimetro_para_metro(entrada);
            printf("Resultado: %.2lf Metro\n", resultado);
            break;
        case 4:
            resultado = centimetro_para_milimetro(entrada);
            printf("Resultado: %.2lf Milimetro\n", resultado);
            break;
        case 5:
            resultado = milimetro_para_metro(entrada);
            printf("Resultado: %.2lf Metro\n", resultado);
            break;
        case 6:
            resultado = milimetro_para_centimetro(entrada);
            printf("Resultado: %.2lf Centimetro\n", resultado);
            break;
        default:
            printf("Opcao invalida.\n");
    }
}

void menu_armazenamento() {
    int tipo_original, tipo_convertido;
    double valor, resultado;

    printf("\nEscolha a unidade de armazenamento de origem:\n");
    printf("1. Bits\n");
    printf("2. Bytes\n");
    printf("3. Kilobytes (KB)\n");
    printf("4. Megabytes (MB)\n");
    printf("5. Gigabytes (GB)\n");
    printf("6. Terabytes (TB)\n");
    printf("Escolha: ");
    scanf("%d", &tipo_original);

    printf("\nEscolha a unidade de armazenamento para conversao:\n");
    printf("1. Bits\n");
    printf("2. Bytes\n");
    printf("3. Kilobytes (KB)\n");
    printf("4. Megabytes (MB)\n");
    printf("5. Gigabytes (GB)\n");
    printf("6. Terabytes (TB)\n");
    printf("Escolha: ");
    scanf("%d", &tipo_convertido);

    printf("\nDigite o valor a ser convertido: ");
    scanf("%lf", &valor);

    resultado = converter_armazenamento(valor, tipo_original, tipo_convertido);

    printf("\nResultado: %.10lf na unidade escolhida.\n", resultado);
}

int main() {
    int categoria, continuar;

    do {
        printf("Bem-vindo ao Conversor de Unidades!\n\n");
        printf("Escolha uma categoria para converter:\n");
        printf("1. Comprimento\n");
        printf("2. Massa\n");
        printf("3. Temperatura\n");
        printf("4. Tempo\n");
        printf("5. Armazenamento\n");
        printf("6. Velocidade\n"); // Ainda nao implementada
        printf("Escolha: ");
        scanf("%d", &categoria);

        switch (categoria) {
            case 1:
                menu_comprimento();
                break;
            case 2:
                menu_massa();
                break;
            case 3:
                menu_temperatura();
                break;
            case 4:
                menu_tempo();
                break;
            case 5:
                menu_armazenamento();
                break;
            case 6:
                printf("Esta categoria ainda nao foi implementada.\n");
                break;
            default:
                printf("Categoria invalida. Tente novamente.\n");
        }

        printf("\nDeseja fazer outra conversao? (1-Sim / 0-Nao): ");
        scanf("%d", &continuar);

    } while (continuar == 1);

    printf("Obrigado por usar o conversor. Ate mais!\n");

    return 0;
}