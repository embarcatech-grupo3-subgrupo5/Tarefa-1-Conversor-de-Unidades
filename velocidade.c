#include <stdio.h>

int main() {
    float kmh, ms;
    int result;
    
    while (1) {
        printf("Digite a velocidade em km/h: ");
        result = scanf("%f", &kmh);
    
        if (result == 1) {
            break;
        } else {
            printf("Entrada inválida. insira um número.\n");
             
            while (getchar() != '\n');
            
        }
    }
    
    ms = kmh / 3.6;
     
    printf("A velocidade em m/s é: %.2f\n", ms);
    
    return 0; 
}