#include <stdio.h>

int main() {

    char filmes[10][50] = {
        "O Rei Leao",
        "Aladdin",
        "A Pequena Sereia",
        "Mulan",
        "Tarzan",
        "Lilo e Stitch",
        "Enrolados",
        "Frozen",
        "Moana",
        "Encanto"
    };

    int i = 0;
    float notas[10] = {0};

    int opcao;
    // int quantidade = 10;

    // for(i = 0; i < 10; i++){
        // printf("%d - %s\n", i + 1, filmes[i]);
    // };

    do {
        printf("\n===== CATALOGO DE FILMES DA DISNEY =====\n");
        printf("1 - Listar filmes\n");
        printf("2 - Avaliar filme\n");
        printf("3 - Buscar filmes\n");
        printf("4 - Ver estatisticas\n");
        printf("5 - Sair\n");

        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);


        //Opção do menu 1 - listar filmes
        if (opcao == 1) {

            printf("\n===== FILMES =====\n");

            for (i = 0; i < 10; i++) {
                printf("%d - %s\n", i + 1, filmes[i]);
            }
        }

    //Opção do menus 2 - avaliar filmes
    else if (opcao == 2){

        int filmeEscolhido;
        float nota;
        
        printf("\n===== AVALIAR FILMES =====\n");

        for (i = 0; i < 10; i++) {
            printf("%d - %s\n", i + 1, filmes[i]);
        }

        printf("\n Escolha o filme: ");
        scanf("%d", &filmeEscolhido);

        printf("\n Digite uma nota de 0 a 10: ");
        scanf("%f", &nota);

        if(filmeEscolhido >= 1 && filmeEscolhido <= 10){
            if(nota >= 0 && nota <= 10){
                notas[filmeEscolhido - 1] = nota;

                printf("\nFilme escolhido: %s\n", filmes[filmeEscolhido - 1]);
                printf("Nota registrada: %.2f", nota);
            }
            else{
                printf("Nota inválda! Digite uma nota de 0 a 10.\n");
            }
        }
        else{
            printf("Filme inválido.\n");
        }

    }
} while (opcao != 5);

    
    

    return 0;
}