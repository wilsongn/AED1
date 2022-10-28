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