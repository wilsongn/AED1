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