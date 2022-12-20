#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, num, total = 0;
    for (i=0;i<50;i++){
        printf("Informe o numero %d: ", i+1);
        scanf("%d", &num);
        if (num%2 != 0){
            total +=num;
        }
    }

    printf("A soma dos impares eh: %d", total);
    return 0;
}
