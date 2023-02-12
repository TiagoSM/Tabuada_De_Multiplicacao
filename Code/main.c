#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int numero;
int contador=0;
int opcao;
int escolha;

int main()
{
    system("color E0");
    printf("Choose one language: \n");
    printf("\n1 - Portuguese\n");
    printf("2 - English\n");
    scanf("%d", &escolha);
    if(escolha==1){
        setlocale(LC_ALL, "Portuguese");
        system("cls");
        printf("Apenas digite números inteiros!\n\n");
        printf("Iniciando a tabuada em português...\n");
        system("pause");
            do{
                system("cls");
                printf("Tabuada\n");
                printf("-----------------------------------------\n\n\n");
                printf("Digite o número da tabuada: ");
                scanf("%d", &numero);
                for(contador=0; contador<=10; contador++){
                printf("%d X %d = %d\n", numero, contador, numero*contador);

                }
                printf("-----------------------------------------\n\n\n");
                printf("Digite o número de uma das opções abaixo:\n\n");
                printf("1 - Novo cálculo.\n");
                printf("2 - Sair.\n");
                scanf("%d", &opcao);
                system("cls");
            }while(opcao != 2);
    }
if(escolha==2){
    setlocale(LC_ALL, "en-US");
    system("cls");
    printf("Just enter whole numbers!\n\n");
    printf("Starting the tables in English...\n");
    system("pause");
            do{
                system("cls");
                printf("Multiplication Table\n\n");
                printf("-----------------------------------------\n\n\n");
                printf("Enter the table number: ");
                scanf("%d", &numero);
                for(contador=0; contador<=10; contador++){
                printf("%d X %d = %d\n", numero, contador, numero*contador);

                }
                printf("-----------------------------------------\n\n\n");
                printf("Enter the number from one of the options below:\n\n");
                printf("1 - New calculation.\n");
                printf("2 - Quit.\n");
                scanf("%d", &opcao);
                system("cls");
            }while(opcao != 2);
    }

    return 0;
}
