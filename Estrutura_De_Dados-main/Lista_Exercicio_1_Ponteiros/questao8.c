#include <stdio.h>

void calculadora(float num1, float num2, float *soma, float *sub, float *mult, float *div) {
    *soma = num1 + num2;
    *sub  = num1 - num2;
    *mult = num1 * num2;
    
    if (num2 != 0) {
        *div = num1 / num2;
    } else {
        *div = 0; // Evita divisão por zero
    }
}

int main() {
    float n1 = 10.0, n2 = 2.5;
    float s, sub, m, d;

    calculadora(n1, n2, &s, &sub, &m, &d);

    printf("Numeros: %.2f e %.2f\n", n1, n2);
    printf("Soma: %.2f\n", s);
    printf("Subtracao: %.2f\n", sub);
    printf("Multiplicacao: %.2f\n", m);
    printf("Divisao: %.2f\n", d);

    return 0;
}