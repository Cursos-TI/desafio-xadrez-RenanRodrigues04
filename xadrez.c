#include<stdio.h>

int main(){
    
    //declarando as variáveis
    int bispo =0, rainha =0;
    
    //saída de apresentação do programa.
    printf("*** Movimentação de peças de xadrez ***\n\n");
    
    //TORRE.
    printf("Movimento da peça Torre: (casa atual A1).\n");
    
    //estrutura For para movimentar torre, torre (movtorre) recebe 0 e aumenta até 5, repetindo o código.
    for(int torre = 0; torre < 5; torre++){
        printf("Torre à direita.\n");//imprime cada movimento da torre.
    } 
    printf("Casa final (A6).\n\n"); //somente para ilustrar a casa final da Torre.
    
    
    
    //BISPO.
    printf("Movimento da peça Bispo: (casa atual B1).\n");
    
    //Estrutura while repetindo 5 vezes o código.
    while(bispo < 5){
        printf("Bispo para cima à direita.\n"); //imprime cada movimento do Bispo.

        bispo++; // aumenta uma unidade no valor da variável.
    } 
    printf("Casa final (G6).\n\n"); //somente para ilustrar a casa final do Bispo.
    
    
    
    //RAINHA.
    printf("Movimento da peça Rainha: (casa atual D10).\n");
    
    //Estrutura do while repetindo 8 vezes o código. Exibi a primeira vez antes da condição while, e depois exibi enquanto a condição permanece verdadeira.
    do {
        printf("Rainha à esqueda.\n");
        rainha++; // incrementou uma unidade antes da condição e depois seguiu incrementando enquanto o código se repetia.
    } while (rainha < 8); 
    
    printf("Casa final (D2).\n\n"); //somente para ilustrar a casa final da Rainha.
    
    
    //CAVALO.
    int cavalo = 1, movcavalo;
    
    //Estrutura while repetindo uma vez, usado para rodar o "FOR" e imprimir o "printf".
    while(cavalo <=1)
    {
        printf("Movimento da peça Cavalo: (casa atual C4).\n");
        
        for(movcavalo = 1; movcavalo <= 2; movcavalo++) //Estrutura FOR, repete o código duas vezes, simulando o movimento vertical do Cavalo.
        {
            printf("Cavalo para baixo.\n");
        } 
        cavalo++; //incrementa a variável uma unidade, causando o encerramento do loop externo.
    } 
    
    //Última movimentação fora do loop, simulando o movimento horizontal do Cavalo.
    printf("Cavalo à esquerda.\n");
    
    printf("Casa final (A3).\n"); //somente para ilustrar a casa final da Rainha.


    return 0;
    
}