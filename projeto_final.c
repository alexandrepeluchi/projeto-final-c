#include <stdio.h>
#include<conio.h>
#include<stdlib.h>

#define true 1
#define false 0
#define tamNome 20

main(void)
{
    // Variavel para encerrar o programa
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
        printf("Escola\n\n");

        printf("Escolha uma opcao: \n\n");
        printf("[1] Cadastrar Aluno \n");
        printf("[2] Buscar Aluno  \n");
        printf("[3] Excluir Aluno \n");
        printf("[4] Lancar Notas \n");
        printf("[5] Media do Aluno \n");
        printf("[6] Gerar Relatorio \n\n");
        printf("[0] Sair do sistema \n\n");

        printf("Opcao: ");
        scanf("%d", &opcao);

        switch(opcao)
        {
            case 1:

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
                printf("\n\nEncerrando sistema Escolar!\n\n");
                opcao = 0;
            break;

            default:
                fflush(stdin);
                printf("\nOpcao invalida, digite outra novamente por favor!\n\n");
            break;
        }
        getch();
        system ("cls");
    }
}
