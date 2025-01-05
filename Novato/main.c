#include <stdio.h>
#include <string.h>

int main()
{
    // Constantes para definir o número de movimentos de cada peça
    const int BISPO_MOVE = 5;
    const int TORRE_MOVE = 5;
    const int RAINHA_MOVE = 8;

    char peca[10]; // Variável para armazenar o nome da peça

    char resposta[2]; // Variável par sim ou não

    printf("Não digite em maiusculo os nomes das peças!!\n");

    do
    { // Loop infinito
        printf("Vai continuar a partida [s/n]? ");
        scanf("%1s", resposta);

        if (strcmp(resposta, "s") == 0 || strcmp(resposta, "S") == 0)
        {

            printf("Escolha uma peça para mover (bispo, torre, rainha): ");
            scanf("%s", peca);

            // Condições baseadas na peça escolhida
            if (strcmp(peca, "bispo") == 0)
            {
                // Movimento do Bispo: Diagonal superior direita (cima, direita)
                printf("\nMovimentos do Bispo (diagonal superior direita):\n");
                for (int i = 0; i < BISPO_MOVE; i++)
                {
                    printf("Diagonal, Cima\n");
                }
            }
            else if (strcmp(peca, "torre") == 0)
            {
                // Movimento da Torre: Para a direita
                printf("\nMovimentos da Torre (para a direita):\n");
                int j = 0; // Variável para o loop while
                for (int i = 0; i < TORRE_MOVE; i++)
                {
                    printf("Direita\n");
                }
            }
            else if (strcmp(peca, "rainha") == 0)
            {
                // Movimento da Rainha: Para a esquerda
                printf("\nMovimentos da Rainha (para a esquerda):\n");
                int k = 0; // Variável para o loop do-while

                for (int i = 0; i < RAINHA_MOVE; i++)
                {
                    printf("Esquerda\n");
                }
            }
            else
            {
                // Caso o usuário digite uma peça inválida
                printf("\nPeça inválida! Escolha entre 'bispo', 'torre' ou 'rainha'.\n");
            }
        }
        else
        {
            printf("Não continuar! a partida.\n");
            break; // Sai do loop
        }
    } while (1);

    return 0;
}