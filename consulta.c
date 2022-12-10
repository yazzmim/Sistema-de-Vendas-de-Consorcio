#include <stdio.h>
#include "consulta.h"

Consulta DigitarConsulta(){
    Consulta C;

    gotoxy(27, 6);
    scanf(" %[^\n]", C.CRMMedico);

    gotoxy(27, 9);
    scanf(" %[^\n]", C.CPFPaciente);

    gotoxy(27, 12);
    scanf(" %[^\n]", C.DataConsulta);

    gotoxy(27, 15);
    scanf(" %[^\n]", C.HoraConsulta);

    /*printf("Digite o Valor: ");
    scanf(" %lf", &M.ValorPago);*/

    return C;
}

void TeclaConsulta(){
    Borda(14, 3, 52, 18, 1, 1);
    gotoxy(16, 6); printf("  MEDICO: ");
    gotoxy(16, 9); printf("PACIENTE: ");
    gotoxy(16, 12); printf("    DATA: ");
    gotoxy(16, 15); printf("    HORA: ");
    Borda(26, 5, 30, 2, 0, 0);
    Borda(26, 8, 30, 2, 0, 0);
    Borda(26, 11, 30, 2, 0, 0);
    Borda(26, 14, 30, 2, 0, 0);
}

void ImprimirConsulta(Consulta C){
    Borda(14, 3, 52, 18, 1, 1);
    gotoxy(16, 6);
    printf("\tCRM-Medico: %s\n", C.CRMMedico);
    gotoxy(16, 9);
    printf("\tCPF-Paciente: %s\n", C.CPFPaciente);
    gotoxy(16, 12);
    printf("\tData: %s\n", C.DataConsulta);
    gotoxy(16, 15);
    printf("\tHora: %s\n", C.HoraConsulta);
}


