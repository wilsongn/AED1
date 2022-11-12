/*Seu trabalho nesse problema é ler um número que é uma coluna de uma matriz em que uma operação será executada, um caractere maiúsculo,
indicando a operação a ser executada e todos os elementos de uma matriz bidimensional M[ 12 ] [ 12 ]. 
Em seguida, você deve calcular e imprimir a soma ou média de todos os elementos dentro da área verde de acordo com o caso. 
A figura a seguir ilustra o caso quando é inserido o número 5 na coluna da matriz, mostrando todos os elementos isso deve ser considerado na operação.*/

#include <stdio.h>

int main(void){
    float matriz[12][12];
    int i, j, C;
    char T;
    float soma = 0.0;

    scanf("%d %c", &C, &T);

    for(i=0;i<12;i++){
        for(j=0;j<12;j++){
            scanf("%f", &matriz[i][j]);
        }
    }

    if(T == 'S'){
        for(i=0;i<12;i++){
            soma+=matriz[i][C];
        }
        printf("%.1f\n", soma);
    }

    else if(T == 'M'){
        for(i=0;i<12;i++){
            soma+=matriz[i][C];
        }
        printf("%.1f\n", soma/12);
    }

    return 0;
}
