#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    float maior[4]= {0,0,0,0},menor[4] = {10,10,10,10},notas[4];
    int i;
    char continuar[4];

    do{
        printf("Informe as notas do aluno: ");
        scanf("%f %f %f",&notas[0],&notas[1],&notas[2]);
        notas[3] = (notas[1] + notas[0] + notas[2])/3;
        for (i=0;i<4;i++){
            maior[i] = (notas[i]>maior[i]) ? notas[i] : maior[i];
            menor[i] = (notas[i]<menor[i]) ? notas[i] : menor[i];
        }
        printf("Deseja inserir mais um aluno?\n");
        fflush(stdin);
        fgets(continuar, sizeof(continuar), stdin);

    }while (continuar[0] == 's' || continuar[0] == 'S');

    for (i=0; i<3; i++){
        printf("%d° exercicio\n", i+1);
        printf("A menor nota foi: %.1f\n",menor[i]);
        printf("A maior nota foi: %.1f\n\n",maior[i]);
    }
    printf("A menor media foi: %.1f\n",menor[3]);
    printf("A maior media foi: %.1f\n",maior[3]);


    return 0;
}
