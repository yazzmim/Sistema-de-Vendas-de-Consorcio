#ifndef RELATORIO_H_INCLUDED
#define RELATORIO_H_INCLUDED

struct relatorio{
    char Estado[15];
    char Situacao[51];
    char Tempo[31];
    char Remarcacao[21];
};

typedef struct relatorio Relatorio;
Relatorio DigitarRelatorio();
void ImprimirRelatorio(Relatorio R);
void TeclaRelatorio();

#endif // RELATORIO_H_INCLUDED
