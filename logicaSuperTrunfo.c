#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Desenvolvendo a Lógica do jogo
// Nível aventureiro.

// Variáveis globais
char estado1, estado2; // Letra do estado
int numcidade1, numcidade2; // Número da cidade
char cidade1[50], cidade2[50]; // Nome da cidade
int populacao1, populacao2; // População das cidades
float area1, area2; // Área das cidades
float pib1, pib2; // PIB das cidades (em bilhões)
int pontos_turisticos1, pontos_turisticos2; // Número de pontos turísticos
float densidade_populacional1, densidade_populacional2; // Densidade populacional (já calculada)
float pib_per_capita1, pib_per_capita2; // PIB per capita (já calculado)

// Função para calcular a densidade populacional e PIB per capita
void calcular_atributos() {
    densidade_populacional1 = populacao1 / area1; // Calcula a densidade populacional da cidade 1
    pib_per_capita1 = pib1 * 1000000000 / populacao1; // Calcula o PIB per capita da cidade 1 (convertendo o PIB para reais)
    
    densidade_populacional2 = populacao2 / area2; // Calcula a densidade populacional da cidade 2
    pib_per_capita2 = pib2 * 1000000000 / populacao2; // Calcula o PIB per capita da cidade 2
}

// Função para exibir as informações de uma cidade
void exibir_cidade(int cidade_num) {
    if (cidade_num == 1) {
        printf("\nCidade 1: %s\n", cidade1);
        printf("Estado: %c\n", estado1);
        printf("Código: %c%02d\n", estado1, numcidade1);
        printf("População: %d habitantes\n", populacao1);
        printf("Área: %.2f km²\n", area1);
        printf("PIB: %.2f bilhões de reais\n", pib1);
        printf("Pontos turísticos: %d\n", pontos_turisticos1);
        printf("Densidade Populacional: %.2f habitantes/km²\n", densidade_populacional1);
        printf("PIB per Capita: %.2f reais\n", pib_per_capita1);
    } else if (cidade_num == 2) {
        printf("\nCidade 2: %s\n", cidade2);
        printf("Estado: %c\n", estado2);
        printf("Código: %c%02d\n", estado2, numcidade2);
        printf("População: %d habitantes\n", populacao2);
        printf("Área: %.2f km²\n", area2);
        printf("PIB: %.2f bilhões de reais\n", pib2);
        printf("Pontos turísticos: %d\n", pontos_turisticos2);
        printf("Densidade Populacional: %.2f habitantes/km²\n", densidade_populacional2);
        printf("PIB per Capita: %.2f reais\n", pib_per_capita2);
    }
}

// Função para comparar dois valores com base no atributo selecionado
void comparar_cidades(int atributo_comparado) {
    switch (atributo_comparado) {
        case 1: // Comparação de População
            printf("\nComparando População:\n");
            printf("Cidade 1 (%s): %d habitantes\n", cidade1, populacao1);
            printf("Cidade 2 (%s): %d habitantes\n", cidade2, populacao2);
            if (populacao1 > populacao2) {
                printf("Cidade 1 venceu!\n");
            } else if (populacao1 < populacao2) {
                printf("Cidade 2 venceu!\n");
            } else {
                printf("Empate!\n");
            }
            break;
        case 2: // Comparação de Área
            printf("\nComparando Área:\n");
            printf("Cidade 1 (%s): %.2f km²\n", cidade1, area1);
            printf("Cidade 2 (%s): %.2f km²\n", cidade2, area2);
            if (area1 > area2) {
                printf("Cidade 1 venceu!\n");
            } else if (area1 < area2) {
                printf("Cidade 2 venceu!\n");
            } else {
                printf("Empate!\n");
            }
            break;
        case 3: // Comparação de PIB
            printf("\nComparando PIB:\n");
            printf("Cidade 1 (%s): %.2f bilhões de reais\n", cidade1, pib1);
            printf("Cidade 2 (%s): %.2f bilhões de reais\n", cidade2, pib2);
            if (pib1 > pib2) {
                printf("Cidade 1 venceu!\n");
            } else if (pib1 < pib2) {
                printf("Cidade 2 venceu!\n");
            } else {
                printf("Empate!\n");
            }
            break;
        case 4: // Comparação de Densidade Populacional
            printf("\nComparando Densidade Populacional:\n");
            printf("Cidade 1 (%s): %.2f habitantes/km²\n", cidade1, densidade_populacional1);
            printf("Cidade 2 (%s): %.2f habitantes/km²\n", cidade2, densidade_populacional2);
            if (densidade_populacional1 < densidade_populacional2) {
                printf("Cidade 1 venceu! \n"); // Menor densidade vence
            } else if (densidade_populacional1 > densidade_populacional2) {
                printf("Cidade 2 venceu! \n");
            } else {
                printf("Empate! \n");
            }
            break;
        default:
            printf("Opção inválida!\n"); // Caso o usuário escolha um valor inválido
            break;
    }
}

int main() {
    int escolha;

    // Cadastro da primeira cidade
    printf("\nCadastre a primeira cidade:\n");
    printf("Digite a letra do estado (A, B, C, ..., H): ");
    scanf(" %c", &estado1); 
    printf("Digite o número da cidade (1, 2, 3, 4): ");
    scanf("%d", &numcidade1);
    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", cidade1);
    printf("Digite a população da cidade: ");
    scanf("%d", &populacao1);
    printf("Digite a área da cidade (em km²): ");
    scanf("%f", &area1);
    printf("Digite o PIB da cidade (em bilhões): ");
    scanf("%f", &pib1);
    printf("Digite o número de pontos turísticos da cidade: ");
    scanf("%d", &pontos_turisticos1);

    // Cadastro da segunda cidade
    printf("\nCadastre a segunda cidade:\n");
    printf("Digite a letra do estado (A, B, C, ..., H): ");
    scanf(" %c", &estado2);
    printf("Digite o número da cidade (1, 2, 3, 4): ");
    scanf("%d", &numcidade2);
    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", cidade2);
    printf("Digite a população da cidade: ");
    scanf("%d", &populacao2);
    printf("Digite a área da cidade (em km²): ");
    scanf("%f", &area2);
    printf("Digite o PIB da cidade (em bilhões): ");
    scanf("%f", &pib2);
    printf("Digite o número de pontos turísticos da cidade: ");
    scanf("%d", &pontos_turisticos2);

    // Realizando os cálculos para ambas as cidades
    calcular_atributos();

    // Exibindo as informações das cidades
    printf("\nInformações das cidades cadastradas:\n");
    exibir_cidade(1);
    exibir_cidade(2);

    // Menu de comparação
    printf("\nEscolha o atributo para comparar:\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Densidade Populacional\n");
    printf("5 - Sair\n");
    printf("Digite sua escolha (1-5): ");
    scanf("%d", &escolha);

    // Realizando a comparação com base na escolha do usuário
    if (escolha >= 1 && escolha <= 4) {
        comparar_cidades(escolha);
    } else {
        printf("Saindo do programa. Até logo!\n");
    }

    printf("Fim do programa!\n");
    return 0;
}
