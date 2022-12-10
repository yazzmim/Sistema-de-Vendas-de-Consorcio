#include <stdio.h>
#include "relatorio.h"

Relatorio DigitarRelatorio(){
    Relatorio R;

    gotoxy(30, 6);
    scanf(" %[^\n]", R.Estado);

    gotoxy(30, 9);
    scanf(" %[^\n]", R.Situacao);

    gotoxy(30, 12);
    scanf(" %[^\n]", R.Tempo);

    gotoxy(30, 15);
    scanf(" %[^\n]", R.Remarcacao);

    return R;
}

void TeclaRelatorio(){
    Borda(14, 3, 52, 18, 1, 1);
    gotoxy(16, 6); printf("    ESTADO: ");
    gotoxy(16, 9); printf("  SITUACAO: ");
    gotoxy(16, 12); printf("     TEMPO: ");
    gotoxy(16, 15); printf("REMARCACAO: ");
    Borda(27, 5, 30, 2, 0, 0);
    Borda(27, 8, 30, 2, 0, 0);
    Borda(27, 11, 30, 2, 0, 0);
    Borda(27, 14, 30, 2, 0, 0);
}

void ImprimirRelatorio(Relatorio R){
    Borda(14, 3, 52, 18, 1, 1);
    gotoxy(16, 6);
    printf("\tEstado: %s\n", R.Estado);
    gotoxy(16, 9);
    printf("\tSituacao: %s\n", R.Situacao);
    gotoxy(16, 12);
    printf("\tTempo: %s\n", R.Tempo);
    gotoxy(16, 15);
    printf("\tRemarcacao: %s\n", R.Remarcacao);
}
