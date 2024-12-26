#include "converters.h"
#include <math.h>
double converter_armazenamento(double valor, int tipo_original, int tipo_convertido)
{
    int diferenca;

    // Conversão entre bits e bytes
    if (tipo_original == 1) { // Bits para outras unidades
        valor /= 8;
        tipo_original = 2;
    } else if (tipo_convertido == 1) { // Outras unidades para bits
        tipo_convertido = 2;
        valor *= 8;
    }

    // Calcula a diferença entre os níveis das unidades
    diferenca = tipo_convertido - tipo_original;

    // Realiza a conversão com base em potência de 1024
    if (diferenca > 0) {
        return valor / pow(1024, diferenca);
    } else {
        return valor * pow(1024, -diferenca);
    }
}
