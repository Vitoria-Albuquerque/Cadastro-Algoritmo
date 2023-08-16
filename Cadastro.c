#include <stdio.h>

int main() {

    char nome[100];
    char idade[10];
    float media;
    char matricula[40];
    char endereco[50];
    char curso[40];
    char periodo[20];
    int semestre;
    char disciplinas[100];
    
    
    char dados = 'n';
    int x = 0;

    printf("\n Bem Vindo! Venha fazer o seu Cadastro \n\n");

    while (x != 1) {
        printf(" \n Digite seu nome completo: ");
        fgets(nome, 100, stdin);
        fflush(stdin);

        printf("\n Digite a sua idade: ");
        fgets(idade,10,stdin);
        fflush(stdin);

        printf("\n Digite sua matricula: ");
        fgets(matricula, 40, stdin);
        fflush(stdin);

        printf("\n Digite o seu endereco: ");
        fgets(endereco, 50, stdin);
        fflush(stdin);

        printf("\n Digite o nome do seu curso: ");
        fgets(curso, 40, stdin);
        fflush(stdin);

        printf("\n Digite qual periodo esta cursando (matunino/noturno): ");
        fgets(periodo, 20, stdin);
        fflush(stdin);

        printf("\n Digite em qual semestre esta: ");
        scanf("%d", &semestre);
        fflush(stdin);

        printf("\n Digite quais sao as disciplinas que esta cursando: ");
        fgets(disciplinas, 100, stdin);
        fflush(stdin);

        printf("\n Digite a sua media de notas: ");
        scanf("%f", &media);
        fflush(stdin);

        printf("\n----------------------------------------");
        printf("\n\nDADOS PARA CONFIRMACAO\n\n");

        printf("\n Seu nome: %s", nome);
        printf("\n Idade: %s", idade);
        printf("\n Matricula: %s", matricula); 
        printf("\n Endereco: %s", endereco);
        printf("\n Curso: %s", curso);
        printf("\n Periodo: %s", periodo);
        printf("\n Semestre: %d", semestre);
        printf("\n Disciplinas: %s", disciplinas);
        printf("\n Media: %f", media);

        printf("\n \n Voce confirma seus dados? (s/n): ");
        scanf("%c", &dados);
        fflush(stdin);

        if (dados == 's') {
            x = 1;
            printf("\n Sua resposta foi %c\n", dados);
        } else {
            x = 0;
            printf("\n Seu cadastro foi negado. Por favor volte para o inicio!\n");
        }
    }

    printf("\n CADASTRO FEITO COM SUCESSO! \n");

    return 0;
}