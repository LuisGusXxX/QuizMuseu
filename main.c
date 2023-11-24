#include <stdio.h>
#include <stdlib.h>

char nomeUsuario[50];

void SalvarRespostas(char *nome, char *tema, char *pergunta, char *resposta, int correta) {
    FILE *arquivo = fopen("QuizFiles/respostas.csv", "a");
    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo.\n");
        return;
    }

    char *status = (correta == 1) ? "Certo" : "Errado";
    fprintf(arquivo, "%s, %s, %s - %s\n", tema, pergunta, status, resposta);

    fclose(arquivo);
}

void TemaArteModerna() {
    char resposta;
    int pontuacao = 0;

    puts("\nTema: Arte Moderna\n");

    printf("\nPergunta 1: Quem e considerado o pai da Arte Moderna?\n");
    printf(" A) Picasso\n");
    printf(" B) Van Gogh\n");
    printf(" C) Duchamp\n");
    printf(" D) Da Vinci\n");
    printf(" Escolha a letra da resposta correta: ");
    scanf(" %c", &resposta);

    if (resposta == 'A' || resposta == 'a') {
        printf("Resposta correta!\n");
        pontuacao++;
    } else {
        printf("Resposta incorreta. A resposta correta era A) Picasso.\n");
    }
    getchar();
    getchar();
    system("cls");

    printf("\nPergunta 2: Qual movimento artistico e conhecido por suas formas geometricas e cores vibrantes?\n");
    printf(" A) Surrealismo\n");
    printf(" B) Cubismo\n");
    printf(" C) Expressionismo\n");
    printf(" D) Pop Art\n");
    printf(" Escolha a letra da resposta correta: ");
    scanf(" %c", &resposta);

    if (resposta == 'B' || resposta == 'b') {
        printf("Resposta correta!\n");
        pontuacao++;
    } else {
        printf("Resposta incorreta. A resposta correta era B) Cubismo.\n");
    }
    getchar();
    getchar();
    system("cls");

    SalvarRespostas(nomeUsuario, "Arte Moderna", "Quem e considerado o pai da Arte Moderna?", (resposta == 'A' || resposta == 'a') ? "Picasso" : "Incorreta", (resposta == 'A' || resposta == 'a') ? 1 : 0);
    SalvarRespostas(nomeUsuario, "Arte Moderna", "Qual movimento artístico é conhecido por suas formas geométricas e cores vibrantes?", (resposta == 'B' || resposta == 'b') ? "Cubismo" : "Incorreta", (resposta == 'B' || resposta == 'b') ? 1 : 0);

    printf("\nPONTUACAO NO TEMA: %d/2\n", pontuacao);
    printf("APERTE ENTER PARA VOLTAR AO MENU");
    getchar();
    system("cls");
}

void TemaJogosOlimpicos() {
    char resposta;
    int pontuacao = 0;

    puts("\nTema: Jogos Olimpicos\n");

    printf("\nPergunta 1: Qual é a cidade-sede das Olimpíadas de 2020?\n");
    printf(" A) Paris\n");
    printf(" B) Tóquio\n");
    printf(" C) Rio de Janeiro\n");
    printf(" D) Londres\n");
    printf(" Escolha a letra da resposta correta: ");
    scanf(" %c", &resposta);

    if (resposta == 'B' || resposta == 'b') {
        printf("Resposta correta!\n");
        pontuacao++;
    } else {
        printf("Resposta incorreta. A resposta correta era B) Tóquio.\n");
    }
    getchar();
    getchar();
    system("cls");

    printf("\nPergunta 2: Qual é o símbolo dos Jogos Olimpicos?\n");
    printf(" A) Cruz\n");
    printf(" B) Tocha\n");
    printf(" C) Anel\n");
    printf(" D) Estrela\n");
    printf(" Escolha a letra da resposta correta: ");
    scanf(" %c", &resposta);

    if (resposta == 'C' || resposta == 'c') {
        printf("Resposta correta!\n");
        pontuacao++;
    } else {
        printf("Resposta incorreta. A resposta correta era C) Anel.\n");
    }
    getchar();
    getchar();
    system("cls");

    SalvarRespostas(nomeUsuario, "Jogos Olimpicos", "Qual é a cidade-sede das Olimpíadas de 2020?", (resposta == 'B' || resposta == 'b') ? "Tóquio" : "Incorreta", (resposta == 'B' || resposta == 'b') ? 1 : 0);
    SalvarRespostas(nomeUsuario, "Jogos Olimpicos", "Qual é o símbolo dos Jogos Olímpicos?", (resposta == 'C' || resposta == 'c') ? "Anel" : "Incorreta", (resposta == 'C' || resposta == 'c') ? 1 : 0);

    printf("\nPONTUACAO NO TEMA: %d/2\n", pontuacao);
    printf("APERTE ENTER PARA VOLTAR AO MENU");
    getchar();
    system("cls");
}

void TemaDrummond() {
    char resposta;
    int pontuacao = 0;

    puts("\nTema: 100 Anos do Drummond\n");

    printf("\nPergunta 1: Qual é o nome completo de Carlos Drummond de Andrade?\n");
    printf(" A) Carlos Drummond de Andrade\n");
    printf(" B) Carlos Andrade\n");
    printf(" C) Carlos Drummond\n");
    printf(" D) Carlos Andrade de Drummond\n");
    printf(" Escolha a letra da resposta correta: ");
    scanf(" %c", &resposta);

    if (resposta == 'A' || resposta == 'a') {
        printf("Resposta correta!\n");
        pontuacao++;
    } else {
        printf("Resposta incorreta. A resposta correta era A) Carlos Drummond de Andrade.\n");
    }
    getchar();
    getchar();
    system("cls");

    printf("\nPergunta 2: Qual e a obra mais conhecida de Carlos Drummond de Andrade?\n");
    printf(" A) Sentimento do Mundo\n");
    printf(" B) Claro Enigma\n");
    printf(" C) A Rosa do Povo\n");
    printf(" D) Alguma Poesia\n");
    printf(" Escolha a letra da resposta correta: ");
    scanf(" %c", &resposta);

    if (resposta == 'C' || resposta == 'c') {
        printf("Resposta correta!\n");
        pontuacao++;
    } else {
        printf("Resposta incorreta. A resposta correta era C) A Rosa do Povo.\n");
    }
    getchar();
    getchar();
    system("cls");

    SalvarRespostas(nomeUsuario, "100 Anos do Drummond", "Qual é o nome completo de Carlos Drummond de Andrade?", (resposta == 'A' || resposta == 'a') ? "Carlos Drummond de Andrade" : "Incorreta", (resposta == 'A' || resposta == 'a') ? 1 : 0);
    SalvarRespostas(nomeUsuario, "100 Anos do Drummond", "Qual é a obra mais conhecida de Carlos Drummond de Andrade?", (resposta == 'C' || resposta == 'c') ? "A Rosa do Povo" : "Incorreta", (resposta == 'C' || resposta == 'c') ? 1 : 0);

    printf("\nPONTUAÇÃO NO TEMA: %d/2\n", pontuacao);
    printf("APERTE ENTER PARA VOLTAR AO MENU");
    getchar();
    system("cls");
}

void TemaAniversarioSP() {
    char resposta;
    int pontuacao = 0;

    puts("\nTema: Aniversário de Sao Paulo\n");

    printf("\nPergunta 1: Em que ano foi fundada a cidade de São Paulo?\n");
    printf(" A) 1500\n");
    printf(" B) 1554\n");
    printf(" C) 1693\n");
    printf(" D) 1800\n");
    printf(" Escolha a letra da resposta correta: ");
    scanf(" %c", &resposta);

    if (resposta == 'B' || resposta == 'b') {
        printf("Resposta correta!\n");
        pontuacao++;
    } else {
        printf("Resposta incorreta. A resposta correta era B) 1554.\n");
    }
    getchar();
    getchar();
    system("cls");

    printf("\nPergunta 2: Qual é o nome do famoso parque localizado na zona sul de Sao Paulo?\n");
    printf(" A) Parque das Arvores\n");
    printf(" B) Parque do Ibirapuera\n");
    printf(" C) Parque da Liberdade\n");
    printf(" D) Parque das Flores\n");
    printf(" Escolha a letra da resposta correta: ");
    scanf(" %c", &resposta);

    if (resposta == 'B' || resposta == 'b') {
        printf("Resposta correta!\n");
        pontuacao++;
    } else {
        printf("Resposta incorreta. A resposta correta era B) Parque do Ibirapuera.\n");
    }
    getchar();
    getchar();
    system("cls");

    SalvarRespostas(nomeUsuario, "Aniversário de São Paulo", "Em que ano foi fundada a cidade de São Paulo?", (resposta == 'B' || resposta == 'b') ? "1554" : "Incorreta", (resposta == 'B' || resposta == 'b') ? 1 : 0);
    SalvarRespostas(nomeUsuario, "Aniversário de São Paulo", "Qual é o nome do famoso parque localizado na zona sul de São Paulo?", (resposta == 'B' || resposta == 'b') ? "Parque do Ibirapuera" : "Incorreta", (resposta == 'B' || resposta == 'b') ? 1 : 0);

    printf("\nPONTUACAO NO TEMA: %d/2\n", pontuacao);
    printf("APERTE ENTER PARA VOLTAR AO MENU");
    getchar();
    system("cls");
}

int main() {
    int escolhaUser;
    int pontuacaoTotal = 0;

    while (1) {
        puts("\nPROGRAMA DE QUIZ MUSEU MULTITEMATICO:\n");
        puts("SELECIONE UM TEMA: \n");
        puts("1. Arte Moderna\n");
        puts("2. Jogos Olimpicos\n");
        puts("3. 100 Anos do Drummond\n");
        puts("4. Aniversario de Sao Paulo\n");
        puts("5. SAIR\n");

        printf("ESCOLHA UM NUMERO: ");
        scanf("%d", &escolhaUser);

        switch (escolhaUser) {
            case 1:
                system("cls");
                TemaArteModerna();
                break;
            case 2:
                system("cls");
                TemaJogosOlimpicos();
                break;
            case 3:
                system("cls");
                TemaDrummond();
                break;
            case 4:
                system("cls");
                TemaAniversarioSP();
                break;
            case 5:
                system("cls");
                printf("SAINDO DO PROGRAMA.\n");
                printf("PONTUACAO TOTAL: %d/8\n", pontuacaoTotal);
                return 0;
            default:
                printf("NUMERO INVÁLIDO.\n");
        }
    }

    system("cls");
    printf("PONTUACAO TOTAL: %d/8\n", pontuacaoTotal);
    return 0;
}
