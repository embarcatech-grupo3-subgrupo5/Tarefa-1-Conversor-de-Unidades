#include <stdio.h>

void converterSegundos (int dias, int horas, int minutos, int segundos) {
    int segundosTotais = (dias * 86400) + (horas * 3600) + (minutos * 60) + segundos;
    printf("Tempo total em segundos: %d \n", segundosTotais);
}

void converterHDMS (int segundosTotais) {
    int dias = segundosTotais / 86400;
    int horas = (segundosTotais % 86400) / 3600; 
    int minutos = (segundosTotais % 3600) / 60;
    int segundos = segundosTotais % 60;

    printf("Tempo em DD:HH:MM:SS -> %02d:%02d:%02d:%02d \n", dias, horas, minutos, segundos);
}

int main() {
    int escolha;

    printf("Escolha a opção de conversão: \n");
    printf("1. De DD:HH:MM:SS para segundos totais.\n");
    printf("2. De segundos totais para DD:HH:MM:SS.\n");
    printf("Digite sua escolha (1 ou 2) \n");
    scanf("%d", escolha);

    do {
        printf("Escolha a opção de conversão: \n");
        printf("1. De DD:HH:MM:SS para segundos totais.\n");
        printf("2. De segundos totais para DD:HH:MM:SS.\n");
        printf("Digite sua escolha (1 ou 2) \n");
        scanf("%d", escolha);

        if(escolha != 1 && escolha != 2) {
            printf("Opção inválida! Tente com 1 ou 2. \n");
        }
    } while (escolha != 1 && escolha != 2) 

    if (escolha == 1) {
        int dias, horas, minutos, segundos;
        printf("Insira os dias: ");
        scanf("%d", &dias);
        printf("Insira as horas: ");
        scanf("%d", &horas);
        printf("Insira os minutos: ");
        scanf("%d", &minutos);
        printf("Insira os segundos: ");
        scanf("%d", &segundos);
        converterSegundos(dias, horas, minutos, segundos);
    } else if (escolha == 2) {
        int segundosTotais;

        printf("Digite o número total de segundos: ");
        scanf("%d", &segundosTotais);
        converterHDMS(segundosTotais);
    }

    printf("\n Pressione Enter para sair...");
    getchar();
    getchar();
}