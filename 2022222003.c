#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, total = 0;
    for (i=100;i<200;i++){
        if (i%2 != 0){
            total +=i;
        }
    }

    printf("A soma dos impares eh: %d", total);
    return 0;
}
