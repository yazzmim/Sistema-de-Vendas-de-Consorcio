#include <stdio.h>
#include "medico.h"

Medico DigitarMedico(){
    Medico M;

    gotoxy(27, 6);
    scanf(" %[^\n]", M.CRM);

    gotoxy(27, 9);
    scanf(" %[^\n]", M.Nome);

    gotoxy(27, 12);
    scanf(" %[^\n]", M.Especialidade);

    gotoxy(27, 15);
    scanf(" %[^\n]", M.Telefone);

    return M;
}

void TeclaMedico(){
    Borda(14, 3, 52, 18, 1, 1);
    gotoxy(16, 6); printf("     CRM: ");
    gotoxy(16, 9); printf("    NOME: ");
    gotoxy(16, 12); printf("  ESPECI: ");
    gotoxy(16, 15); printf("TELEFONE: ");
    Borda(26, 5, 30, 2, 0, 0);
    Borda(26, 8, 30, 2, 0, 0);
    Borda(26, 11, 30, 2, 0, 0);
    Borda(26, 14, 30, 2, 0, 0);
}

void ImprimirMedico(Medico M){
    Borda(14, 3, 52, 18, 1, 1);
    gotoxy(16, 6);
    printf("     CRM: %s\n", M.CRM);
    gotoxy(16, 9);
    printf("    Nome: %s\n", M.Nome);
    gotoxy(16, 12);
    printf("  Especi: %s\n", M.Especialidade);
    gotoxy(16, 15);
    printf("Telefone: %s\n", M.Telefone);
    Borda(26, 5, 30, 2, 0, 0);
    Borda(26, 8, 30, 2, 0, 0);
    Borda(26, 11, 30, 2, 0, 0);
    Borda(26, 14, 30, 2, 0, 0);
}
