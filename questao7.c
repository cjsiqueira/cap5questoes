#include <stdio.h>

int main () {
    int idade, pessoas;
    float peso = 0, altura = 0, a1 = 0, p1 = 0, i1 = 0;

    for (pessoas = 1; pessoas <= 5;pessoas++) {
        scanf("%i\n", &idade);
        scanf ("%f\n%f\n", &peso, &altura);

        if (idade >= 50) {
            i1 += 1;
        }

        if (peso < 40) {
            p1 += 1;
        }

        if (idade >= 10 && idade <= 20) {
            altura += altura;
            a1 += 1;
        }
    }

    printf ("Pessoas com nmis de 50 anos: %.0f\n", i1);
    printf ("A média da altura de pessoas entre 10 e 20 anos: %.2f\n", altura/a1);
    printf ("Porcetagem de pessoas com peso inferior a 40kg: %0.2f\n", p1/pessoas);
}
