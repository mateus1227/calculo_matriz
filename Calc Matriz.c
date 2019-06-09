#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>
int main()
{

int i, j, lA=3, cA=4;op;
setlocale (LC_ALL,"Portuguese");
printf("\n\t\t\tMENU PRINCIPAL:\n\nDIGITE A OPÇÃO DESEJADA:\n\n1 - SOMA DE MATRIZES");

float matrizA[lA][cA]],Aux=0;

switch(opcao){

    case 1:
    if(cA==cB && lA==lB){
        for(i=0;i<lA;i++){
            for(j=0;j<cA;j++){
                printf("\nInforme o valor da %d Linha e da %d Coluna da Matriz A: ", i+1,j+1);
                scanf("%f",&matrizA[i][j]);
            }
            printf("\n");
        }
        for(i=0; i<lB; i++){
         for(j=0; j<cB; j++){

            printf("\n\n Informe o valor da %d Linha e da %d Coluna da Matriz B: ", i+1, j+1);
            scanf("%f", &matrizB[i][j]);
            }
            printf("\n");
         }
        printf("\t\t\t\t\tMatriz A \t\t\t\n\n\n");
for(i=0; i<lA; i++)
{
         for(j=0; j<cA; j++)
         {
         printf("%6.f", matrizA[i][j]);
         }
         printf("\n\n\n");
         }

        
        
        
        
        system("pause");
return 0;
}
