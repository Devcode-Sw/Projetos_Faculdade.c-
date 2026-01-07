#include <stdio.h>

void nivelNovato() {
    printf("----- Nível Novato -----\n");
    int tabuleiro[5][5] = {0};

    tabuleiro[0][1] = 3;
    tabuleiro[1][1] = 3;
    tabuleiro[3][2] = 3;
    tabuleiro[3][3] = 3;

    printf("Coordenadas dos navios:\n");
    int i, j;
    for(i = 0; i < 5; i++) {
        for(j = 0; j < 5; j++) {
            if(tabuleiro[i][j] == 3) {
                printf("Navio em (%d,%d)\n", i, j);
            }
        }
    }
    printf("\n");
}

void nivelAventureiro() {
    printf("----- Nível Aventureiro -----\n");
    int tabuleiro[10][10] = {0};

    tabuleiro[2][3] = tabuleiro[2][4] = 3;
    tabuleiro[5][1] = tabuleiro[6][1] = 3;
    tabuleiro[0][0] = tabuleiro[1][1] = 3;
    tabuleiro[8][5] = tabuleiro[8][6] = 3;

    printf("Tabuleiro completo:\n");
    int i, j;
    for(i = 0; i < 10; i++) {
        for(j = 0; j < 10; j++) {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}

void nivelMestre() {
    printf("----- Nível Mestre -----\n");
    int matrizCone[5][5] = {
        {0, 0, 1, 0, 0},
        {0, 1, 1, 1, 0},
        {1, 1, 1, 1, 1},
        {0, 1, 1, 1, 0},
        {0, 0, 1, 0, 0}
    };

    int matrizCruz[5][5] = {
        {0, 0, 1, 0, 0},
        {0, 0, 1, 0, 0},
        {1, 1, 1, 1, 1},
        {0, 0, 1, 0, 0},
        {0, 0, 1, 0, 0}
    };

    int matrizOctaedro[5][5] = {
        {0, 0, 1, 0, 0},
        {0, 1, 1, 1, 0},
        {1, 1, 1, 1, 1},
        {0, 1, 1, 1, 0},
        {0, 0, 1, 0, 0}
    };

    printf("Habilidade Cone:\n");
    int i, j;
    for(i = 0; i < 5; i++) {
        for(j = 0; j < 5; j++) {
            printf("%d ", matrizCone[i][j]);
        }
        printf("\n");
    }

    printf("\nHabilidade Cruz:\n");
    for(i = 0; i < 5; i++) {
        for(j = 0; j < 5; j++) {
            printf("%d ", matrizCruz[i][j]);
        }
        printf("\n");
    }

    printf("\nHabilidade Octaedro:\n");
    for(i = 0; i < 5; i++) {
        for(j = 0; j < 5; j++) {
            printf("%d ", matrizOctaedro[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}

int main() {
    nivelNovato();
    nivelAventureiro();
    nivelMestre();
    return 0;
}
