#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j;
    for (i = 1;i<=9;i++){
        for (j=1;j<=10;j++){
            printf("%d X %d = %d\n",i, j, i*j);
        }
        printf("\n\n");
    }


    return 0;
}
