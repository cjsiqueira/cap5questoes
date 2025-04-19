#include <stdio.h>

int main () {
    float idade, altura, peso;
    float condicao1, condicao2, condicao3, soma, pessoas;

    for (pessoas = 1; pessoas <= 10; pessoas++) {
        scanf ("%f\n%f\n%f", &idade, &altura, &peso);
        soma += idade;

        if (peso >= 90 && altura <= 1.5) {
            condicao1+=1;
        }

        if (altura >= 1.9) {
            condicao2 += 1;
            if (idade >= 10 && idade <= 30) {
                condicao3 += 1;
            }
        }
     }

     printf ("A média das idades: %.0f\n", soma/pessoas);
     printf ("Quantidade de pessoas com peso superior a 90 kg e altura inferior a 1,50 metro: %.0f\n", condicao1);
     printf ("Porcentagem de pessoas com idade entre 10 e 30 anos entre as pessoas que medem mais de 1,90 m: %.0f%%\n", (condicao3/condicao2)*100);

     return 0;
}
