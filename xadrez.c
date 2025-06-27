//desafio novato --> incrementação do while, do while e for para movimentação das peças

#include <stdio.h>

int main(){

    int rainha, bispo, torre;
    int ifor, iw =0 , idw=0;

    //movimentar a rainha 5 vezes para a esquerda
    printf("\nFazendo a movimentação da rainha...\n");

    for (ifor = 0; ifor < 5; ifor++ )
    {
        printf("Esquerda\n");
    }
        printf("A rainha se movimentou para a esquerda 5 vezes...");

    //movimentação bispo 

    printf("\nO Bispo se moveu 5 vezes para a diagonal direita...\n");

    while (iw <=5)
    {
        if (iw < 5 ){
            printf(" diagonal direita\n");
        }
        iw++;
    }
    // movimentação da torre

    printf("escolha quantas casas para a direita a torre irá se mover");
    scanf("%d",&torre);

    do
    { 
       
        printf("Direita\n");
        idw++;
    
        
    } while (idw < torre);
    
    
    
    

    return 0;
}
