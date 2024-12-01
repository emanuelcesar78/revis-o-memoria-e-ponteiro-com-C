#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand (time (0));

    int *p, numero;
    p = (int*) malloc(10 * sizeof(int));
    if (p == NULL)
        {
            printf("erro na alocação de memoria");
        }

    for (int i = 0; i <10; i++)
        {
            p[i] = rand() % 9;
            printf("%d ",p[i]);
        }
        printf("\narry formada");



     for (int i =0; i< 10; i++)
        {

            printf("\ndigite o numero:");
            scanf("%d",&numero);
            printf("\nprocurando...");
            if (numero == p[i])
                {
                    printf("\nnumero na casa %d",p[i]);
                    return 0;
                }
            else
                {
                    printf("\nnao achado");
                    continue;
                }
        }

    printf("fim do programa");


}
