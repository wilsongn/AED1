/*Escreva um algoritmo para ler um número não declarado de dados, cada um contendo a idade de um indivíduo.
Os dados finais, que não serão inseridos nos cálculos, contêm o valor de uma idade negativa. 
Calcule e imprima a idade média desse grupo de indivíduos.*/

#include <stdio.h>
 
int main() {
    int n, count=0;
    double soma = 0;

    while(1){
        scanf("%d", &n);

        if(n < 0) break;

        soma += n;
        count++;
    }

    printf("%.2lf\n", soma/count);
 
    return 0;
}
