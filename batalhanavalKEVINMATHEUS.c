#include   <stdio.h>

int main () {

printf("   ==TABULEIRO BATALHA NAVAL==\n\n"); //título pra ficar legalzinho

//Declarando variaveis
char coluna [11] = {'x','A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J'}; // eu acrescentei o 'x' para que as letras se alinhassem corretamente nas colunas
char linha [10] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9'};
int tabuleiro[10][10]; // declarando a matriz do tabuleiro

//Estrutura de repetição para a coluna
for (int i = 0; i < 11; i++) {
    printf(" %c ", coluna[i]);
}
printf("\n"); // essa quebra de linha é para separar a coluna da linha

for (int i = 0; i < 10; i++) {
    printf(" %c ", linha[i]); //Aqui aparecerá a primeira letra da linha, para seguir a linha normal do tabuleiro
    for (int j = 0; j < 10; j++) {
        tabuleiro[i][j] = 0; //declaro a matriz do tabuleiro como 0, 0 representando a água


// Declaro as posiçãos dos navios, representados por 3

//Navio VERTICAL
tabuleiro[3][6] = 3;
tabuleiro[4][6] = 3;
tabuleiro[5][6] = 3;

//Navio HORIZONTAL
tabuleiro[1][5] = 3;
tabuleiro[1][6] = 3;
tabuleiro[1][7] = 3;

//VAIRAVEIS A SEREM USADAS PARA OS NAVIOS DIAGONAIS
int x, y;

//Navio DIAGONAL superior Esquerda para Inferior Direita
for (int x = y = 0; x < 3; x++, y++)
{
    tabuleiro[x][y] = 3;
}

// Navio DIAGONAL Inferior Esquerda para Superior Direita
for (int x = 9; x > 6; x--, y++)
{
    tabuleiro[x][y] = 3;
}

printf(" %d ", tabuleiro[i][j]); //imprimindo o tabuleiro
}
    printf("\n"); //Essa quebra de linha é para separar a linha do tabuleiro
}

printf("\n");


return 0;

}