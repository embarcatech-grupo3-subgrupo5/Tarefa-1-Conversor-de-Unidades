#include "converters.h"

// Segundos para outras unidades
double segundos_para_minutos(double segundos) {
    return segundos / 60.0;
}

double segundos_para_horas(double segundos) {
    return segundos_para_minutos(segundos) / 60.0;
}

// Minutos para outras unidades
double minutos_para_segundos(double minutos) {
    return minutos * 60.0;
}

double minutos_para_horas(double minutos) {
    return minutos / 60.0;
}

// Horas para outras unidades
double horas_para_segundos(double horas) {
    return minutos_para_segundos(horas_para_minutos(horas));
}

double horas_para_minutos(double horas) {
    return horas * 60.0;
}