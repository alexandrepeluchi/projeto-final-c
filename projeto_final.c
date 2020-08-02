#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>

#define true 1
#define false 0
#define tamNome 20

int main()
{
    FILE *arquivo = fopen("escola.txt", "a");
    if(arquivo == NULL){
        printf("Erro ao abrir o arquivo\n");
        exit(0);
    }

    // Variavel para controlar o programa
    int exit = 1;
    int opcao;

    // Variavel nome do Aluno
    char nome[tamNome];

    // Variaveis de notas do Aluno
    int quantidadeDeNotas = 0;
    int nota1, nota2;
    float media = 0;

    while(opcao != 0)
    {
        puts("");
        printf("---------------- Escola ----------------\n\n");

        printf(" Escolha uma opcao: \n\n");
        printf(" [1] Cadastrar Aluno \n");
        printf(" [2] Buscar Aluno  \n");
        printf(" [3] Excluir Aluno \n");
        printf(" [4] Lancar Notas \n");
        printf(" [5] Media do Aluno \n");
        printf(" [6] Gerar Relatorio \n\n");
        printf(" [0] Sair do sistema \n\n");

        fflush(stdin);
        printf(" Opcao: ");
        scanf("%d", &opcao);

        switch(opcao)
        {
            case 1:
                printf("\n----------------------------------------\n");
                printf("\n Digite o nome do Aluno: ");
                scanf("%s", &nome);
                fprintf(arquivo, "%s\n", nome);
                printf("\n      Aluno cadastrado com sucesso      \n");
                printf("\n               [ ENTER ]               ");
                printf("\n\n----------------------------------------\n");
            break;

            case 2:

            break;

            case 3:

            break;

            case 4:

            break;

            case 5:

            break;

            case 6:

            case 0:
                printf("\n----------------------------------------\n");
                printf("\n      Encerrando sistema Escolar!       \n\n");
                printf("\n              Volte sempre!              ");
                printf("\n\n----------------------------------------\n");
                opcao = 0;
            break;

            default:
                printf("\n----------------------------------------\n");
                printf("\n Opcao invalida, digite outra novamente!\n");
                printf("\n               [ ENTER ]               ");
                printf("\n\n----------------------------------------\n");
            break;
        }
        getch();
        system ("cls");
    }
    fclose(arquivo);
    return 0;
}
