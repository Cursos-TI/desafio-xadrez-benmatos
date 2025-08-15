#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

//FUNÇÃO PARA CONTROLE DOS MOVIMENTOS DO BISPO
void movimentar_bispo (int casas, int direcao)
{
    if (casas > 0)
    {
        switch (direcao)
        {
            case 1: // Diagonal superior direita
                printf("DIREITA e PRA CIMA\n");
                break;
            case 2: // Diagonal superior esquerda
                printf("ESQUERDA e PRA CIMA\n");
                break;
            case 3: // Diagonal inferior direita
                printf("DIREITA e PRA BAIXO\n");
                break;  
            case 4: // Diagonal inferior esquerda
                printf("ESQUERDA e PRA BAIXO\n");
                break;                              
        }

        movimentar_bispo(casas - 1,direcao);
    }
}

//FUNÇÃO PARA CONTROLE DOS MOVIMENTOS DA TORRE
void movimentar_torre (int casas, int direcao)
{
    if (casas > 0)
    {
        switch (direcao)
        {
            case 1: 
                printf("DIREITA\n");
                break;
            case 2:
                printf("ESQUERDA");
                break;
            case 3:
                printf("PRA CIMA\n");
                break;  
            case 4: 
                printf("PRA BAIXO\n");
                break;                              
        }

        movimentar_torre(casas - 1,direcao);
    }
}
//FUNÇÃO PARA CONTROLE DOS MOVIMENTOS DA RAINHA
void movimentar_rainha (int casas, int direcao)
{
    if (casas > 0)
    {
        switch (direcao)
        {
            case 1: // Diagonal superior direita
                printf("DIREITA e PRA CIMA\n");
                break;
            case 2: // Diagonal superior esquerda
                printf("ESQUERDA e PRA CIMA\n");
                break;
            case 3: // Diagonal inferior direita
                printf("DIREITA e PRA BAIXO\n");
                break;  
            case 4: // Diagonal inferior esquerda
                printf("ESQUERDA e PRA BAIXO\n");
                break;                              
            case 5: 
                printf("DIREITA\n");
                break;
            case 6: 
                printf("ESQUERDA");
                break;
            case 7: 
                printf("CIMA\n");
                break;  
            case 8: 
                printf("BAIXO\n");
                break;
        }

        movimentar_bispo(casas - 1,direcao);
    }
}

int main() {
    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.
    const int MOVIMENTO_Bispo = 5; // O bispo pode se mover até 7 casas em diagonal
    const int MOVIMENTO_Torre = 5;  // A torre pode se mover até 7 casas na vertical ou horizontal
    const int MOVIMENTO_Rainha = 8;  // A rainha pode se mover até 7 casas em qualquer direção

    // Implementação de Movimentação do Bispo
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal.
    printf("************ MOVIMENTANDO O BISTO 5 casas na diagonal superior direita *************\n");
    for (int i = 1; i <= MOVIMENTO_Bispo; i++)
    {
        printf("DIREITA e PRA CIMA\n");
    }

    // Implementação de Movimentação da Torre
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Torre para a direita.
    printf("\n\n************ MOVIMENTANDO A TORRE 5 casas para a direita *************\n");
    int i = 1;
    while ( i <= MOVIMENTO_Torre )
    {
        printf("DIREITA\n");
        i++;
    }
    
    // Implementação de Movimentação da Rainha
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.    
    printf("\n\n************ MOVIMENTANDO A RAINHA 8 casas para a esquerda *************\n");
    i = 1;
    do
    {
        printf("ESQUERDA\n");
        i++;
    } while (i <= MOVIMENTO_Rainha);

    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.
    printf("\n\n************ MOVIMENTANDO O CAVALO 2 casas ACIMA E 1 CASA A DIREITA *************\n");
    int movimento_do_cavalo = 1;
    while(movimento_do_cavalo--){
        for (int i = 1; i <= 2; i++)
        {
            printf("CIMA\n");
        }
        printf("DIREITA\n");
    }


    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.
    printf("\n\n************ MOVIMENTANDO O BISTO COM RECURSIVIDADE 5 CASAS NA DIAGONAL A DIREITA E PRA BAIXO*************\n");
    movimentar_bispo(5,3);

    printf("\n\n************ MOVIMENTANDO A TORRE COM RECURSIVIDADE 5 CASAS PARA DIREITA *************\n");
    movimentar_torre(5,1);

    printf("\n\n************ MOVIMENTANDO A RAINHA COM RECURSIVIDADE 8 CASAS A DIREITA *************\n");
    movimentar_rainha(8,5);

    return 0;
}
