#include <stdio.h>

//Função recursiva reversa para imprimir torre até 5
void moveTorre(int torre){
    if (torre > 0) {
        moveTorre(torre - 1); //Chama a si mesma com torre - 1
        printf("%d Direita\n", torre); //Imprime a direção do movimento
    }
}


//Função recursiva reversa para imprimir Bispo até 5
void moveBispo(int bispo){
    if (bispo > 0) {
        moveBispo(bispo - 1); //Chama a si mesma com bispo - 1
        printf("%d Cima, Direita\n", bispo); //Imprime a direção do movimento
    }
}


//Função recursiva reversa para imprimir Rainha até 8
void moveRainha(int rainha){
    if (rainha > 0) {
        moveRainha(rainha - 1); //Chama a si mesma com rainha - 1
        printf("%d Esquerda\n", rainha); //Imprime a direção do movimento
    }
}

int main() {

    printf("\n**Movimento da Torre 5 casas para a direita**\n");
    moveTorre(5);
    printf("\n");

    printf("**Movimento do Bispo 5 casas para cima e à direita**\n");
    moveBispo(5);
    printf("\n");

    printf("**Movimento da Rainha 8 casas para a esquerda**\n");
    moveRainha(8);
    printf("\n");

    
    //Loops aninhados com múltiplas variáveis para imprimir o movimento do Cavalo
    printf("**Movimento do Cavalo 2 casas para cima e 1 casa para a direita**\n");
    for (int casa1 = 1; casa1 < 2; casa1++) {
        for (int casa2 = 1; casa2 <= 5; casa2++) {
            if (casa2 == 3) continue; //Pula a iteração quando casa2 é 3
            if (casa2 == 4) break; //Sai do loop quando casa2 é 4
            printf("%d Cima\n", casa2);
        }
        printf("%d Direita\n", casa1);
        printf("\n");
    }

    return 0;
}
