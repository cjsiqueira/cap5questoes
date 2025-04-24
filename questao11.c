#include <stdio.h>

int main () {
    float valorCarro = 1, percentualAcrescimo;
    int cont;

    while (valorCarro != 0) {
        scanf ("%f", &valorCarro);
        printf ("Valor a Vista: %.0f\n\n", valorCarro*8/10);

        for (cont = 1; cont <= 10; cont++) {
            percentualAcrescimo = valorCarro + (valorCarro*(cont*3))/100; // calcula a porcentagem de acrescimo de acordo com a quantidade de parcelas.
            printf ("Parcelas disponivies: %ix de %0.2fR$\n", cont*6, percentualAcrescimo/(cont*6));
       }
    }
}
