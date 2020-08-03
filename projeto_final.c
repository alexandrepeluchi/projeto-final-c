#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>

#define true 1
#define false 0
#define tam 30

int main()
{
    FILE *arquivo;

    // Variavel para controlar o programa
    int exit = 1, aux = 0;
    char opcao;

    // Variavel nome do Aluno
    char nome[tam], buscaAluno[tam];
    nome[0] = '\0', buscaAluno[0] = '\0';

    // Variaveis de notas do Aluno
    int quantidadeDeNotas = 0;
    int nota1, nota2;
    float media = 0;

    while(opcao != 9)
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

        printf(" Opcao: ");
        opcao = getche();

        switch(opcao)
        {
            case '1':
                printf("\n\n----------------------------------------\n");

                arquivo = fopen("escola.txt", "a+");

                printf("\n     Digite o nome do Aluno: ");
                scanf("%s", &nome);

                fprintf(arquivo, "%s\n", nome);

                printf("\n      Aluno cadastrado com sucesso      \n");
                printf("\n               [ ENTER ]               ");
                printf("\n\n----------------------------------------\n");
                nome[0] = '\0';

                fclose(arquivo);
            break;

            case '2':
                aux = 0;
                printf("\n\n----------------------------------------\n");

                arquivo = fopen("escola.txt", "r");

                printf("\n     Digite o nome do Aluno: ");
                scanf("%s", &nome);

                while( (fscanf(arquivo, "%s\0", buscaAluno)) != EOF ){
                    if (strcmp(buscaAluno, nome) == 0){
                        printf("\n            Aluno encontrado!           \n");
                        aux++;
                    }
                }
                if (aux == 0) {
                    printf("\n          Aluno nao encontrado!         \n");
                }
                printf("\n----------------------------------------\n");
                nome[0] = '\0'; buscaAluno[0] = '\0';

                fclose(arquivo);
            break;

            case '3':

            break;

            case '4':

            break;

            case '5':

            break;

            case '6':

            case '0':
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
    return 0;
}
