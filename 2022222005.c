#include <stdio.h>
#include <stdlib.h>

int main()
{
    int maior, menor, num, i;
    for (i=0;i<20;i++){
            printf("Informe o %d numero: ", i+1);
            scanf("%d", &num);
        if (i == 0){
            maior = num;
            menor = num;
        } else if (num < 0){
                printf("Valor invalido!\n");
                i--;
        } else if(num > maior)
                maior = num;
          else if (num < menor)
                menor = num;
    }
    printf("O menor valor foi: %d\n", menor);
    printf("O maior valor foi: %d\n", maior);
    return 0;
}
