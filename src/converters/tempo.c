#include <string.h>
#include "converters.h"

// os valores que podem ser passados na origem e destino são: ms, s, min, h, d
double converter_tempo(double valor, char unidade_origem[], char unidade_destino[]) {
    double valor_convertido = valor;

    if (strcmp(unidade_origem, "ms") == 0) {
        valor_convertido = valor / 1000; 
    } else if (strcmp(unidade_origem, "s") == 0) {
        valor_convertido = valor;
    } else if (strcmp(unidade_origem, "min") == 0) {
        valor_convertido = valor * 60;
    } else if (strcmp(unidade_origem, "h") == 0) {
        valor_convertido = valor * 3600;
    } else if (strcmp(unidade_origem, "d") == 0) {
        valor_convertido = valor * 86400; 
    }

    if (strcmp(unidade_destino, "ms") == 0) {
        valor_convertido = valor_convertido * 1000; 
    } else if (strcmp(unidade_destino, "s") == 0) {
        valor_convertido = valor_convertido; 
    } else if (strcmp(unidade_destino, "min") == 0) {
        valor_convertido = valor_convertido / 60; 
    } else if (strcmp(unidade_destino, "h") == 0) {
        valor_convertido = valor_convertido / 3600;
    } else if (strcmp(unidade_destino, "d") == 0) {
        valor_convertido = valor_convertido / 86400; 
    }

    return valor_convertido;
}