#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, total = 0;

    for(int i=0;i<5;i++){
        printf("Informe o %d numero: ",i+1);
        scanf("%d",&num);
        total +=num;
    }
    printf("A soma total eh: %d\n",total);
    return 0;
}
