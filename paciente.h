#ifndef PACIENTE_H_INCLUDED
#define PACIENTE_H_INCLUDED

struct paciente{
    char CPF[15];
    char Nome[51];
    char Endereco[31];
    char Telefone[21];
};

typedef struct paciente Paciente;
Paciente DigitarPaciente();
void ImprimirPaciente(Paciente P);
void TeclaPaciente();

#endif // PACIENTE_H_INCLUDED
