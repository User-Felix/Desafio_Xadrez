#include <stdio.h>
#include <string.h>

// Função recursiva para movimentação linear (torre e rainha)
void mover_linear(int passos, const char *direcao)
{
    if (passos == 0)
        return; // Condição de parada
    printf("%s\n", direcao);
    mover_linear(passos - 1, direcao);
}

// Função para movimentação do bispo usando loops aninhados
void mover_bispo(int passos)
{
    for (int i = 0; i < passos; i++)
    {
        for (int j = 0; j < 1; j++)
        { // Loop interno para simular aninhamento adicional
            printf("Cima, Direita\n");
        }
    }
}

// Função para movimentação do cavalo com múltiplas condições e repetição
void mover_cavalo()
{
    int x = 2, y = 1; // Movimento em L: 2 para frente, 1 para direita

    // Repetição para imprimir "Frente" baseado no valor de x
    for (int i = 0; i < x; i++)
    {
        printf("Frente\n");
    }

    // Repetição para imprimir "Direita" baseado no valor de y
    for (int i = 0; i < y; i++)
    {
        printf("Direita\n");
    }
}

// Função principal para selecionar a peça a ser movida
void selecionar_movimentacao()
{
    char peca[10];

    printf("Digite a peça que deseja mover (bispo, torre, rainha, cavalo): ");
    scanf("%s", peca);

    // Comparação da entrada do usuário com as opções disponíveis
    if (strcmp(peca, "bispo") == 0)
    {
        printf("Movendo Bispo:\n");
        mover_bispo(5); // Bispo move 5 passos na diagonal cima-direita
    }
    else if (strcmp(peca, "torre") == 0)
    {
        printf("Movendo Torre:\n");
        mover_linear(5, "Direita"); // Torre move 5 passos para direita
    }
    else if (strcmp(peca, "rainha") == 0)
    {
        printf("Movendo Rainha:\n");
        mover_linear(8, "Esquerda"); // Rainha move 8 passos para esquerda
    }
    else if (strcmp(peca, "cavalo") == 0)
    {
        printf("Movendo Cavalo:\n");
        mover_cavalo(); // Cavalo faz um movimento em L
    }
    else
    {
        printf("Peça inválida! Tente novamente.\n");
    }
}

int main()
{
    selecionar_movimentacao(); // Chama a função para selecionar a peça a ser movida
    return 0;
}