#include <stdio.h>
#include <math.h>

int main() {
    float valor, novo_valor;
    int tipo_original, tipo_convertido;
    int diferenca;

    // Nomes das unidades
    const char *unidades[] = {"Bits", "Bytes", "Kilobytes", "Megabytes", "Gigabytes", "Terabytes"};

    printf("Insira a quantidade de dados que deseja converter:\n");
    scanf("%f", &valor);
    printf("Insira o tipo de dado original:\n");
    printf("1 - Bits\n2 - Bytes\n3 - Kilobytes (KB)\n4 - Megabytes\n5 - Gigabytes\n6 - Terabytes\n");
    scanf("%d", &tipo_original);
    printf("Insira o tipo de dado para o qual sera feita a conversao:\n");
    printf("1 - Bits\n2 - Bytes\n3 - Kilobytes (KB)\n4 - Megabytes\n5 - Gigabytes\n6 - Terabytes\n");
    scanf("%d", &tipo_convertido);

    // Validação de entrada
    if (tipo_original < 1 || tipo_original > 6 || tipo_convertido < 1 || tipo_convertido > 6) {
        printf("Erro: Tipo de dado invalido!\n");
        return 1;
    }

    // Caso o tipo seja o mesmo
    if (tipo_original == tipo_convertido) { 
        printf("O valor após a conversao eh: %.2f\n", valor);
        return 0;
    }

    // Conversão entre bits e outras unidades
    if (tipo_original == 1) { // Bits para outras unidades
        valor /= 8; // Converte para bytes
        tipo_original = 2; // Agora trata como bytes
    } else if (tipo_convertido == 1) { // Outras unidades para bits
        tipo_convertido = 2; // Trata como bytes
        valor *= 8; // Converte para bits no final
    }

    // Conversão geral com base em potência de 1024
    diferenca = tipo_convertido - tipo_original;

    if (diferenca > 0) {
        novo_valor = valor / pow(1024, diferenca); // Divisão para conversão "para cima"
    } else {
        novo_valor = valor * pow(1024, -diferenca); // Multiplicação para conversão "para baixo"
    }

    printf("O valor apos a conversao eh: %f %s\n", novo_valor, unidades[tipo_convertido - 1]);
    return 0;
}
