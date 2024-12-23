#include "converters.h"

double celsius_para_fahrenheit(double celsius)
{
    return (celsius * 1.8) + 32;
}

double celsius_para_kelvin(double celsius)
{
    return celsius + 273.15;
}

double fahrenheit_para_celsius(double fahrenheit)
{
    return (fahrenheit - 32) / 1.8;
}

double fahrenheit_para_kelvin(double fahrenheit)
{
    return celsius_para_kelvin(fahrenheit_para_celsius(fahrenheit));
}

double kelvin_para_celsius(double kelvin)
{
    return kelvin - 273.15;
}

double kelvin_para_fahrenheit(double kelvin)
{
    return celsius_para_fahrenheit(kelvin_para_celsius(kelvin));
}