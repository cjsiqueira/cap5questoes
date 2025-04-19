#include <stdio.h>

int main () {
    float idade = 0, peso = 0, altura = 0, condicao3 = 0;
    char corCabelo;
    char corOlhos;
    int pessoas, condicao1 = 0, condicao2 = 0, condicao4 = 0; 

    for (pessoas = 1; pessoas <= 6; pessoas++) {
        scanf ("%f%f%f\n", &idade, &altura, &peso);
        scanf ("%c\n", &corCabelo);
        scanf ("%c\n", &corOlhos);

        if (idade >= 50 && peso < 60) {
            condicao1 += 1;
        }

        if (altura <= 1.50) {
            condicao2 += 1;
        }

        if (corOlhos == 'A' || corOlhos == 'a') {
            condicao3 += 1;
        }

        if ((corCabelo == 'R' || corCabelo == 'r') && (corOlhos != 'A' || corOlhos != 'a')) {
            condicao4 += 1;
        }
    }

    printf ("Pessoas com idade superior a 50 anos e peso inferior a 60 kg: %i\n", condicao1);
    printf ("Media das idades das pessoas com altura inferior a 1,50: %i\n", condicao2);
    printf ("Porcentagem de pessoas com olhos azuis entre todas as pessoas analisadas: %.0f%%\n", (condicao3/pessoas)*100);
    printf ("Quantidade de pessoas ruivas e que não possuem olhos azuis: %i\n", condicao4);

    return 0;
}
