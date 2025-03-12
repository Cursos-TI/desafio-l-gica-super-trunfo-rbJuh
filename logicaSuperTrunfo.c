// Desafio Super Trunfo - Países
// Tema 2 - Desenvolvendo a Lógica do jogo
// Nível mestre.

// Variáveis para as informações das cidades
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

// Função para comparar os atributos selecionados entre as duas cidades e somar os valores
void comparar_cidades(int atributo1, int atributo2) {
    int vitoria1 = 0, vitoria2 = 0; // Contadores para as vitórias das cidades
    float soma_cidade1 = 0, soma_cidade2 = 0; // Soma dos valores dos atributos

    // Exibir o título da comparação
    printf("\nComparando as duas cidades:\n");
    printf("Cidade 1: %s, Cidade 2: %s\n", cidade1, cidade2);
    printf("Atributos escolhidos para comparação:\n");

    // Comparação do primeiro atributo
    switch (atributo1) {
        case 1: // População
            printf("\n1º Atributo: População\n");
            printf("Cidade 1: %d, Cidade 2: %d\n", populacao1, populacao2);
            if (populacao1 > populacao2) {
                printf("Cidade 1 venceu em População!\n");
                vitoria1++;
                soma_cidade1 += populacao1; // Soma o valor da população
            } else if (populacao1 < populacao2) {
                printf("Cidade 2 venceu em População!\n");
                vitoria2++;
                soma_cidade2 += populacao2; // Soma o valor da população
            } else {
                printf("Empate em População!\n");
            }
            break;
        case 2: // Área
            printf("\n1º Atributo: Área\n");
            printf("Cidade 1: %.2f km², Cidade 2: %.2f km²\n", area1, area2);
            if (area1 > area2) {
                printf("Cidade 1 venceu em Área!\n");
                vitoria1++;
                soma_cidade1 += area1; // Soma o valor da área
            } else if (area1 < area2) {
                printf("Cidade 2 venceu em Área!\n");
                vitoria2++;
                soma_cidade2 += area2; // Soma o valor da área
            } else {
                printf("Empate em Área!\n");
            }
            break;
        case 3: // PIB
            printf("\n1º Atributo: PIB\n");
            printf("Cidade 1: %.2f bilhões, Cidade 2: %.2f bilhões\n", pib1, pib2);
            if (pib1 > pib2) {
                printf("Cidade 1 venceu em PIB!\n");
                vitoria1++;
                soma_cidade1 += pib1; // Soma o valor do PIB
            } else if (pib1 < pib2) {
                printf("Cidade 2 venceu em PIB!\n");
                vitoria2++;
                soma_cidade2 += pib2; // Soma o valor do PIB
            } else {
                printf("Empate em PIB!\n");
            }
            break;
        case 4: // Densidade Populacional
            printf("\n1º Atributo: Densidade Populacional\n");
            printf("Cidade 1: %.2f habitantes/km², Cidade 2: %.2f habitantes/km²\n", densidade_populacional1, densidade_populacional2);
            if (densidade_populacional1 < densidade_populacional2) { // Menor densidade vence
                printf("Cidade 1 venceu em Densidade Populacional!\n");
                vitoria1++;
                soma_cidade1 += densidade_populacional1; // Soma o valor da densidade
            } else if (densidade_populacional1 > densidade_populacional2) {
                printf("Cidade 2 venceu em Densidade Populacional!\n");
                vitoria2++;
                soma_cidade2 += densidade_populacional2; // Soma o valor da densidade
            } else {
                printf("Empate em Densidade Populacional!\n");
            }
            break;
        default:
            printf("Opção inválida no primeiro atributo.\n");
            break;
    }

    // Comparação do segundo atributo
    switch (atributo2) {
        case 1: // População
            printf("\n2º Atributo: População\n");
            printf("Cidade 1: %d, Cidade 2: %d\n", populacao1, populacao2);
            if (populacao1 > populacao2) {
                printf("Cidade 1 venceu em População!\n");
                vitoria1++;
                soma_cidade1 += populacao1; // Soma o valor da população
            } else if (populacao1 < populacao2) {
                printf("Cidade 2 venceu em População!\n");
                vitoria2++;
                soma_cidade2 += populacao2; // Soma o valor da população
            } else {
                printf("Empate em População!\n");
            }
            break;
        case 2: // Área
            printf("\n2º Atributo: Área\n");
            printf("Cidade 1: %.2f km², Cidade 2: %.2f km²\n", area1, area2);
            if (area1 > area2) {
                printf("Cidade 1 venceu em Área!\n");
                vitoria1++;
                soma_cidade1 += area1; // Soma o valor da área
            } else if (area1 < area2) {
                printf("Cidade 2 venceu em Área!\n");
                vitoria2++;
                soma_cidade2 += area2; // Soma o valor da área
            } else {
                printf("Empate em Área!\n");
            }
            break;
        case 3: // PIB
            printf("\n2º Atributo: PIB\n");
            printf("Cidade 1: %.2f bilhões, Cidade 2: %.2f bilhões\n", pib1, pib2);
            if (pib1 > pib2) {
                printf("Cidade 1 venceu em PIB!\n");
                vitoria1++;
                soma_cidade1 += pib1; // Soma o valor do PIB
            } else if (pib1 < pib2) {
                printf("Cidade 2 venceu em PIB!\n");
                vitoria2++;
                soma_cidade2 += pib2; // Soma o valor do PIB
            } else {
                printf("Empate em PIB!\n");
            }
            break;
        case 4: // Densidade Populacional
            printf("\n2º Atributo: Densidade Populacional\n");
            printf("Cidade 1: %.2f habitantes/km², Cidade 2: %.2f habitantes/km²\n", densidade_populacional1, densidade_populacional2);
            if (densidade_populacional1 < densidade_populacional2) { // Menor densidade vence
                printf("Cidade 1 venceu em Densidade Populacional!\n");
                vitoria1++;
                soma_cidade1 += densidade_populacional1; // Soma o valor da densidade
            } else if (densidade_populacional1 > densidade_populacional2) {
                printf("Cidade 2 venceu em Densidade Populacional!\n");
                vitoria2++;
                soma_cidade2 += densidade_populacional2; // Soma o valor da densidade
            } else {
                printf("Empate em Densidade Populacional!\n");
            }
            break;
        default:
            printf("Opção inválida no segundo atributo.\n");
            break;
    }

    // Soma final dos atributos
    printf("\nSoma dos Atributos:\n");
    printf("Cidade 1: %.2f\n", soma_cidade1);
    printf("Cidade 2: %.2f\n", soma_cidade2);

    // Determina o vencedor da rodada
    if (soma_cidade1 > soma_cidade2) {
        printf("\nCidade 1 venceu a rodada!\n");
    } else if (soma_cidade1 < soma_cidade2) {
        printf("\nCidade 2 venceu a rodada!\n");
    } else {
        printf("\nEmpate na rodada!\n"); // Empate entre as duas cidades
    }
}

int main() {
    int escolha1, escolha2;

    // Cadastro das cidades (mesmo processo de antes)
    printf("Cadastre a primeira cidade:\n");
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

    // Menu de comparação com dois atributos
    printf("\nEscolha o primeiro atributo para comparar:\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Densidade Populacional\n");
    printf("Digite sua escolha (1-4): ");
    scanf("%d", &escolha1);

    // Menu de comparação do segundo atributo, com a opção já escolhida removida
    printf("\nEscolha o segundo atributo para comparar (diferente do primeiro):\n");

    // Exibe as opções restantes com base na escolha do primeiro atributo
    switch (escolha1) {
        case 1:
            printf("2 - Área\n3 - PIB\n4 - Densidade Populacional\n");
            break;
        case 2:
            printf("1 - População\n3 - PIB\n4 - Densidade Populacional\n");
            break;
        case 3:
            printf("1 - População\n2 - Área\n4 - Densidade Populacional\n");
            break;
        case 4:
            printf("1 - População\n2 - Área\n3 - PIB\n");
            break;
        default:
            printf("Escolha inválida!\n");
            return 1;
    }
    printf("Digite sua escolha (1-4): ");
    scanf("%d", &escolha2);

    // Comparar os dois atributos escolhidos e somar
    comparar_cidades(escolha1, escolha2);

    printf("Fim do programa!\n");

    return 0;
}
