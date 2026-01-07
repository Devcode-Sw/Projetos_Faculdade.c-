#include <stdio.h>

// Nível Novato 
void nivelNovato() {
    // Constantes para os movimentos
    const int passosBispo = 5;
    const int passosTorre = 5;
    const int passosRainha = 8;

    // Movimentação do Bispo (Diagonal)
    printf("Movimento do Bispo:\n");
    int i;
    for(i = 0; i < passosBispo; i++) {
        printf("Cima\n");
        printf("Direita\n");
    }

    // Movimentação da Torre (linha reta)
    printf("\nMovimento da Torre:\n");
    i = 0;
    while(i < passosTorre) {
        printf("Direita\n");
        i++;
    }

    // Movimentação da Rainha (astrisco)
    printf("\nMovimento da Rainha:\n");
    int j = 0;
    do {
        printf("Esquerda\n");
        j++;
    } while(j < passosRainha);

    printf("\n");
    
}

// Nível Aventureiro
void nivelAventureiro() {
    printf("----- Nível Aventureiro -----\n");

    // Movimentação do Cavalo em L 
    printf("Movimento do Cavalo:\n");
    int i, j;
    for(i = 0; i < 2; i++) { 
        printf("Baixo\n");
    }
    j = 0;
    while(j < 1) { 
        printf("Esquerda\n");
        j++;
    }

    printf("\nMovimento do Cavalo com loops aninhados:\n");
    for(i = 0; i < 2; i++) {
        printf("Baixo\n");
        for(j = 0; j < 1; j++) {
            printf("Esquerda\n");
        }
    }
    printf("\n");
    
}

// Nível Mestre 
// Função do Bispo
void moverBispo(int casas) {
    if(casas == 0) return;
    printf("Cima\n");
    printf("Direita\n");
    moverBispo(casas - 1);
}

// Função da Torre
void moverTorre(int casas) {
    if(casas == 0) return;
    printf("Direita\n");
    moverTorre(casas - 1);
}

// Função da Rainha
void moverRainha(int casas) {
    if(casas == 0) return;
    printf("Esquerda\n");
    moverRainha(casas - 1);
}

void nivelMestre() {
    printf("----- Nível Mestre -----\n");
    const int passosBispo = 5;
    const int passosTorre = 5;
    const int passosRainha = 8;

    printf("Movimento do Bispo:\n");
    moverBispo(passosBispo);

    printf("\nMovimento da Torre:\n");
    moverTorre(passosTorre);

    printf("\nMovimento da Rainha:\n");
    moverRainha(passosRainha);

    printf("\nMovimento do Cavalo:\n");
    int i, j;
    for(i = 0; i < 1; i++) {
        for(j = 0; j < 2; j++) {
            if(j == 0) printf("Cima\n");
            else printf("Direita\n");
        }
    }
    printf("\n");

    }

int main() {
    nivelNovato();
    nivelAventureiro();
    nivelMestre();
    return 0;
}
