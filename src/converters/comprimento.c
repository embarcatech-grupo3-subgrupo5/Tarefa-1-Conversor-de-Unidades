#include "converters.h"

double metro_para_centimetro(double metros)
{
    return metros * 100;
}

double metro_para_milimetro(double metros)
{
    return metros * 1000;
}

double centimetro_para_metro(double centimetros)
{
    return centimetros / 100;
}

double centimetro_para_milimetro(double centimetros)
{
    return centimetros * 10;
}

double milimetro_para_metro(double milimetros)
{
    return milimetros / 1000;
}

double milimetro_para_centimetro(double milimetros)
{
    return milimetros / 10;
}
