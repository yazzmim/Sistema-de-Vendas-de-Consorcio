#include <stdio.h>
#include "paciente.h"

FILE *fpPaciente;
void AbrirArquivoPaciente()
{
    fpPaciente = fopen("Paciente.txt", "rb+");
    if(fpPaciente == NULL)
    {
        fpPaciente = fopen("Paciente.txt", "wb+");
        if(fpPaciente == NULL)
        {
            printf("Nao Abriu Paciente.txt\n");
            exit(1);
        }
    }
}
void FecharArquivoPaciente()
{
    fclose(fpPaciente);
}
void SalvarNovoPaciente(Paciente P)
{
    fseek(fpPaciente,0,SEEK_END);
    fwrite(&P, sizeof(Paciente),1,fpPaciente);
    fflush(fpPaciente);
}
Paciente PesquisarPaciente()
{
    char CPF[51];
    Paciente P;
    gotoxy(27,6);
    scanf(" %[^\n]", &CPF);
    fseek(fpPaciente,0,SEEK_SET);
    while(fread(&P,sizeof(Paciente),1,fpPaciente))
    {
        if(strcmp(P.CPF,CPF) == 0)
        {
            return P;
        }
        else strcpy(P.CPF, "");
        return P;

    }
}

void LimparPaciente()
{
    gotoxy(27,6);
    printf("              ");
    gotoxy(27, 9);
    printf("             ");
    gotoxy(27,12);
    printf("              ");
    gotoxy(27, 15);
    printf("              ");

}
Paciente digitar_paciente()
{
    Paciente P;

    gotoxy(27, 6);
    scanf(" %[^\n]", P.CPF);

    gotoxy(27,9);
    scanf(" %[^\n]", P.Nome);

    gotoxy(27,12);
    scanf(" %[^\n]", P.Endereco);

    gotoxy(27,15);
    scanf(" %[^\n]",P.Telefone);
    return P;
}
void ImprimirPaciente(Paciente P)
{
    printf("CPF: %s \n", P.CPF);
    printf("NOME: %s \n", P.Nome);
    printf("ENDEREÇO: %s \n", P.Endereco);
    printf("TELEFONE: %s \n", P.Telefone);
    gotoxy(27, 6);
    printf("%s \n", P.CPF);

    gotoxy(27,9);
    printf("%s \n", P.Nome);

    gotoxy(27,12);
    printf("%s \n", P.Endereco);

    gotoxy(27,15);
    printf("%s \n", P.Telefone);

}
void TelaPaciente()
{
    Borda(14,3,60,18,1,1);
    gotoxy(16,6);
    printf(" CPF: ");

    gotoxy(16,9);
    printf(" Nome: ");

    gotoxy(16, 12);
    printf(" Endereco: ");

    gotoxy(16, 15);
    printf(" Telefone: ");


    Borda(26,5,37,2,0,0);
    Borda(26,8,37,2,0,0);
    Borda(26,11,37,2,0,0);
    Borda(26,14,37,2,0,0);
}
void AtivarPaciente()
{
    int Escolha = 0;
    char opcoes[][51]= {"Novo", "Pesquisar", "Alterar", "Sair"};
    int X[]= {17,29, 41, 53};
    int Y[]= {19, 19, 19, 19};
    Paciente P;
    char OpcoesConfirma[][51]= {"Confirma","Cancela"};

    do
    {
        TelaPaciente();
        Borda(16,18,10,2,0,0);
        Borda(28,18,10,2,0,0);
        Borda(40,18,10,2,0,0);
        Borda(52,18,10,2,0,0);
        Escolha = menu(opcoes, X, Y, Escolha, 4);


        if(Escolha==0)
        {
            TelaPaciente();
            P = digitar_paciente();
            Borda;
            Borda;
            Borda(16,18,10,2,0,0);
            Borda(28,18,10,2,0,0);
            Escolha = menu(OpcoesConfirma,X, Y, Escolha, 2);
            // if(Escolha==0)SalvarNovoPaciente(P);
        }
        if(Escolha==1)
        {
            TelaPaciente();
            P=PesquisarPaciente();
            if(strlen(P.CPF)>0)
            {
                ImprimirPaciente(P);
                system("Pause");
            }

        }
    }
    while(Escolha!=3);


}

int CarregarPacientes(char Dados[][51])
{
    int n=0;
    Paciente P;
    fseek(fpPaciente,0,SEEK_SET);
    while(fread(&P,sizeof(Paciente),1,fpPaciente))
    {
        strcpy(Dados[n], P.Nome);
        n++;
    }
    return n;
}









