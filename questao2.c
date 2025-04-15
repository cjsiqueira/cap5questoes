#include <stdio.h>

int main () {
    float ingressos = 100, preco, calculo;
    scanf ("%f", &preco);

    while (preco > 0) {
        calculo = (preco*ingressos) - 200;
        printf ("Ingresos: %.0f\nPreco: %.2fR$\nLucro: %.2fR$\n\n", ingressos, preco, calculo);
        preco -= 0.50;
        ingressos += 26;
    }

    return 0;
}
