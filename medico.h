#ifndef MEDICO_H_INCLUDED
#define MEDICO_H_INCLUDED

struct medico{
    int CRM[21];
    char Nome[51];
    char Especialidade[31];
    char Telefone[21];
};

typedef struct medico Medico;
Medico DigitarMedico();
void ImprimirMedico(Medico M);
void TeclaMedico();

#endif // MEDICO_H_INCLUDED
