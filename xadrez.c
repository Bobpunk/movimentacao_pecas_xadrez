//desafio novato --> incrementação do while, do while e for para movimentação das peças
// 2.1 desafio aventureiro --> Incrementação do uso de loops aninhados para movimentação do cavalo
//2.2 Desafio mestre  --> Incrementação de recursividade, loops complexos para o cavalor e bispo com loops aninhados

#include <stdio.h>
#include <time.h>
#include <stdlib.h>


void moverRainha(int casas);
void moverTorre(int casas);
void moverBispo(int casas);


int main() {
  
    const int casas_rainha = 5; //Rainha se movimentara 5 vezes
    const int casas_torre = 4; // Torre 4
    const int casas_bispo = 5; // bispo 5
    const int movimentos_cavalo = 3; // cavalo 3

    //Movimentação da Rainha com Recursividade 
    printf("\n Movimentação da Rainha. \n");
    moverRainha(casas_rainha);
    printf("A rainha se movimentou para a esquerda %d vezes.\n", casas_rainha);

    //Movimentação da Torre com Recursividade 
    printf("\n Movimentação da Torre \n");
    moverTorre(casas_torre);
    printf("A torre se movimentou para a direita %d vezes.\n", casas_torre);

    //Movimentação do Bispo com Recursividade
    printf("\n Movimentação do Bispo.\n");
    moverBispo(casas_bispo);
    printf("O bispo se movimentou na diagonal %d vezes\n", casas_bispo);

    //Movimentação do Bispo com Loops Aninhados
    printf("\n--- Movimentação do Bispo (Loops Aninhados) ---\n");
    
    for (int i = 0; i < casas_bispo; i++) { 
        for (int j = 0; j < casas_bispo; j++) {
            if (i == j) { 
                printf("Diagonal direita (Cima + Direita)\n");
            }
        }
    }
    printf("O bispo se movimentou na diagonal %d vezes.\n", casas_bispo);


   // Movimentação do cavalo
    printf("\nMovimentação do Cavalo\n");
    
    for (int ic = 0; ic < movimentos_cavalo; ic++) {
        
      
        if (ic == 1) {
            printf("\n(Cavalo pulou o movimento #%d)\n", ic + 1);
            continue; // Pula para a próxima iteração do loop externo
        }

        printf("\nIniciando movimento em L #%d:\n", ic + 1);

        // Loop aninhado para as duas casas verticais
        for (int jc = 0; jc < 2; jc++) {
            printf("Uma casa para cima\n");
        }
        
        // Movimento horizontal após os verticais
        printf("Uma casa para a direita\n");

        // Exemplo de uso do 'break': se o movimento for o de número 3, pare.
        if (ic == 2) {
             printf("(Cavalo parou após o movimento #3)\n");
             break; // Interrompe o loop do cavalo
        }
    }
    printf("O cavalo finalizou seus movimentos.\n");


    return 0;
}


void moverRainha(int casas) {
  
    if (casas <= 0) {
        return;
    }
    
   
    printf("Esquerda\n");

   
    moverRainha(casas - 1);
}


void moverTorre(int casas) {
   
    if (casas <= 0) {
        return;
    }
    
   
    printf("Direita\n");

   
    moverTorre(casas - 1);
}

 void moverBispo(int casas) {
   
    if (casas <= 0) {
        return;
    }
    
   
    printf("Diagonal direita\n");

   
    moverBispo(casas - 1);
}
