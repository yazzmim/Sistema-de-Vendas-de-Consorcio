#ifndef PACIENTE_H_INCLUDED
#define PACIENTE_H_INCLUDED

struct consulta{
    char CRMMedico[15];
    char CPFPaciente[51];
    char DataConsulta[31];
    char HoraConsulta[21];
};

typedef struct consulta Consulta;
Consulta DigitarConsulta();
void ImprimirConsulta(Consulta C);
void TeclaConsulta();

#endif // PACIENTE_H_INCLUDED
