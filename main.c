#include <stdio.h>
#include <stdlib.h>
#include "interface.h"

void TelaPrincipal(){
    Borda(0, 0, 79, 23, 1, 0);
    gotoxy(32, 1);printf("CLINICA MEDICA");
}

char opcoes[][51] = {"Paciente", "Medico", "Consulta", "Relatorios", "Fechar"};
int x[] = {1, 1, 1, 1, 1};
int y[] = {3, 4, 5, 6, 7};

int main()
{
    int escolha = 0;
    do{
    TelaPrincipal();
    escolha = menu(opcoes, x, y, escolha, 5);
    if(escolha == 0)AtivarPaciente();
    if(escolha == 1);
    if(escolha == 2);{
        char OpcoesPacientes[100][51];
        int n;
        int i;
        //abrir arq
        int XP[100], YP[100];
        n=CarregarPacientes(OpcoesPacientes);
        //fechar arq
        for (i=0; i<n; i++){
            XP[i]=20;
            YP[i]=10+i;
        }

    }
    if(escolha == 3);
    if(escolha == 4){
        Borda(28, 10, 21, 2, 0, 0);
        gotoxy(29, 11);
        printf("Obrigado pelo acesso!");
        break;
    }
    }while(escolha != -1);


    gotoxy(0, 25);
    return 0;
}

