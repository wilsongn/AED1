/*Escreva um programa que leia uma matriz N [ 20 ]. Depois, altere o primeiro elemento pelo último, o segundo elemento pelo último, mas um, etc.,
até alterar o décimo para o décimo. imprima a matriz modificada.*/

#include <stdio.h>
 
int main() {
 
    int n[20];
    int temp;
    int i, j;

    for(i=0;i<20;i++){
        scanf("%d", &n[i]);
    }

    for(i=0, j=19;i<10;i++, j--){
            temp = n[i];
            n[i] = n[j];
            n[j] = temp;
    }

    for(i=0;i<20;i++){
        printf("N[%d] = %d\n", i, n[i]);
    }
 
    return 0;
}
