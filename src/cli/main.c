#include <stdio.h>

int main() {
    printf("Bem-vindo ao Conversor de Unidades!\n");
    printf("Escolha uma opção para continuar:\n");
    printf("1. Comprimento\n");
    printf("2. Massa\n");
    printf("3. Temperatura\n");
    
    
    return 0;
}

//Função para converter massa, dados de entrada valor em numero real, unidade origem ("g","kg","t")
//unidade destino ("g","kg","t"). Gramas, kilo e tonelada.
double converter_massa(double valor, char unidade_origem[], char unidade_destino[]) {
    double valor_convertido = valor;

    // Converter para quilogramas
    if (strcmp(unidade_origem, "kg") == 0) {
        if (strcmp(unidade_destino, "g") == 0) {
            valor_convertido = valor * 1000; // 1 kg = 1000 g
        } else if (strcmp(unidade_destino, "t") == 0) {
            valor_convertido = valor / 1000; // 1 t = 1000 kg
        }
    } 
    // Converter para gramas
    else if (strcmp(unidade_origem, "g") == 0) {
        if (strcmp(unidade_destino, "kg") == 0) {
            valor_convertido = valor / 1000; // 1 kg = 1000 g
        } else if (strcmp(unidade_destino, "t") == 0) {
            valor_convertido = valor / 1000000; // 1 t = 1.000.000 g
        }
    }
    // Converter para toneladas
    else if (strcmp(unidade_origem, "t") == 0) {
        if (strcmp(unidade_destino, "kg") == 0) {
            valor_convertido = valor * 1000; // 1 t = 1000 kg
        } else if (strcmp(unidade_destino, "g") == 0) {
            valor_convertido = valor * 1000000; // 1 t = 1.000.000 g
        }
    }

    return valor_convertido;
}