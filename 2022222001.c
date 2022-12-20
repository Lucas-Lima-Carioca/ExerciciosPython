#include <stdio.h>
#include <stdlib.h>

int main()
{
    float num, total = 0;

    for(int i=0;i<5;i++){
        printf("Informe o %d numero: ",i+1);
        scanf("%f",&num);
        total +=num;
    }
    printf("A soma total eh: %.2f\n",total);
    return 0;
}
