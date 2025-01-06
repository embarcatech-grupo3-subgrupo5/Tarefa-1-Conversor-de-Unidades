#include "converters.h"

double kmh_para_ms(double kmh) {
    return kmh / 3.6;
}

double ms_para_kmh(double ms) {
    return ms * 3.6;
}
