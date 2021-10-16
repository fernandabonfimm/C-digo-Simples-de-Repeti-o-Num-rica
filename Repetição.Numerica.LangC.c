
#include <stdio.h>
#include <stdlib.h>

int main(){
    int i, recpto, result, rep, numeracao[30];

printf("\n|--------------------------------------------|");
printf("\n| Bem-Vindo ao Código de Repetição númerica! |");
printf("\n|--------------------------------------------|");

printf("\nDigite a Quantidade de repetições que deseja: \n");
scanf("%d", &rep);
printf("\nDigite os números que deseja, para a ordem númerica: \n");
for (i = 0; i < rep; ++i)
    scanf("%d", &numeracao[i]);
for (i = 0; i < rep; ++i)
{
    for (recpto = i + 1; recpto < rep; ++recpto)
    {
        if (numeracao[i] > numeracao[recpto])
        {
            result =  numeracao[i];
            numeracao[i] = numeracao[recpto];
            numeracao[recpto] = result;
        }
    }
}
printf("A ordem Crescente dos números é: \n");
for (i = 0; i < rep; ++i)
    printf("%d\n", numeracao[i]);

    return 0;
}
