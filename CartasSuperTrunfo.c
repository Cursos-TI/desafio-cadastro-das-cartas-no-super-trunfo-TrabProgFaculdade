
#include <stdio.h>
int main() {

    char estado1 [2] = "A", estado2 [2] = "B"; //declara a variável 'estado 1 e 2' como "string", fixando a letra.// 
    char codigo1 [3] = "01", codigo2 [3] = "02";  //declara a variável 'codigo 1 e 2' como "string", fixando os números.//
    char cidade1 [20] = "SAOPAULO", cidade2 [20] = "RIODEJANEIRO"; //declara a variável 'cidade 1 e 2' como "string", fixa o número máximo de caracteres e o nome do Estado sem espaço.//
    int populacao1 = 12325000, populacao2 = 6748000; //declara a variável 'população 1 e 2' como número inteiro, fixando os números.//
    float area1 = 1521.11, area2 = 1200.25; //declara a variável 'area 1 e 2' como número decimal, fixando os números informados.//
    float pib1 = 699.28, pib2 = 300.50; //declara a variável 'pib 1 e 2' como número decimal, fixando os números informados.//
    int pontos1 = 50, pontos2 = 30; //declara a variável 'pontos 1 e 2' como número inteiro, fixando os valores informados.//
    
    float dpp1, dpp2; //declara as variáveis 'densidade populacional dpp1 e dpp2' como número decimal.//
    float ppc1, ppc2; //declara as variáveis 'PIB per capita ppc1 e ppc2' como número decimal.// 
    
    printf("------ Insira os dados da primeira Carta: ------\n"); //informa a inserção dos dados da Carta 1.//
    printf("Digite a letra Maiuscula do Estado de A a H: \n"); //solicita a digitação de uma letra maiúscula de A a H.//
    scanf("%s", &estado1); //copia a letra maiúscula inserida pelo usuário.//
    
    printf("Digite o codigo da carta de 01 a 04: \n"); //solicita a inserção do código de 01 a 04.//
    scanf("%s", &codigo1); //copia o codigo inserido pelo usuário.//

    printf("Digite o nome da Cidade: \n"); //solicita o nome da cidade "SEM ESPAÇO".//
    scanf("%s", &cidade1); //copia o nome da cidade inserida pelo usuário.//

    printf("Digite o numero de habitantes da cidade: \n"); //solicita o número de habitantes.//
    scanf("%d", &populacao1); //copia o número de habitantes informado.//

    printf("Digite a area da cidade em Km²: \n"); //solicita o valor da área da cidade em Km², usar ponto para informar a casa decimal.//
    scanf("%f", &area1); //copia o valor da área informado pelo usuário.//

    printf("Digite o Produto interno bruto da cidade: \n"); //solicita o valor do produto interno bruto, usar ponto para informar a casa decimal.//
    scanf("%f", &pib1); //copia o valor do PIB informado pelo usuário.//

    printf("Digite a quantidade de pontos turisticos na cidade: \n"); //solicita a quantidade de pontos turísticos.//
    scanf("%d", &pontos1); //copia a quantidade dos pontos informados.//

    dpp1 = populacao1/area1; //declara o calculo para obtenção do valor da Densidade populacional referente a carta 1.//
    ppc1 = 1000000000 * pib1/populacao1; //declara o calculo para obtenção do valor do PIB per capita referente a carta 1.//

    printf(" **** CARTA 1 ****\n Estado: %s \n Codigo: %s%s \n", estado1, estado1, codigo1); //informa na tela a Letra do Estado e o código.//
    printf(" Nome da Cidade: %s \n Populacao: %d \n Area: %.2f Km² \n", cidade1, populacao1, area1); //informa na tela a cidade, a população e a aerea com duas casas decimais.//
    printf(" PIB: %.2f bilhoes de reais \n Numero de pontos turisticos: %d \n", pib1, pontos1); //informa na tela o PIB com duas casas decimais e os Pontos turísticos. Todas essas informações da carta 1.//
    printf(" Densidade populacional: %.2f hab/km² \n PIB per capita: %.2f reais \n", dpp1, ppc1); //informa na tela a Densidade populacional e o PIB per capita da carta 1 com duas casas decimais.//

    printf("////////////////////////////////////////////////////////////////////////////////////////\n");
    
    printf("------ Insira os dados da segunda Carta: ------\n"); //informa a inserção dos dados da Carta 2.//
    printf("Digite a letra Maiuscula do Estado de A a H: \n"); //solicita a digitação de uma letra maiúscula de A a H.//
    scanf("%s", &estado2); //copia a letra maiúscula inserida pelo usuário.// 
    
    printf("Digite o codigo da carta de 01 a 04: \n"); //solicita a inserção do código de 01 a 04.//
    scanf("%s", &codigo2); //copia o codigo inserido pelo usuário.//

    printf("Digite o nome da Cidade: \n"); //solicita o nome da cidade "SEM ESPAÇO".//
    scanf("%s", &cidade2); //copia o nome da cidade inserida pelo usuário.//

    printf("Digite o numero de habitantes da cidade: \n"); //solicita o número de habitantes.//
    scanf("%d", &populacao2); //copia o número de habitantes.//

    printf("Digite a area da cidade em Km²: \n"); //solicita o valor da área da cidade em Km², usar ponto para informar a casa decimal.//
    scanf("%f", &area2); //copia o valor da área informado pelo usuário.//

    printf("Digite o Produto interno bruto da cidade: \n"); //solicita o valor do produto interno bruto, usar ponto para informar a casa decimal.//
    scanf("%f", &pib2); //copia o valor do PIB informado pelo usuário.//

    printf("Digite a quantidade de pontos turisticos na cidade: \n"); //solicita a quantidade de pontos turísticos.//
    scanf("%d", &pontos2); //copia a quantidade dos pontos informados.//

    dpp2 = populacao2/area2; //declara o calculo para obtenção do valor da Densidade populacional referente a carta 2.// 
    ppc2 = 1000000000 * pib2/populacao2; //declara o calculo para obtenção do valor do PIB per capita referente a carta 2.//

    printf(" **** CARTA 2 ****\n Estado: %s \n Codigo: %s%s \n", estado2, estado2, codigo2); //informa na tela a Letra do Estado e o código.//
    printf(" Nome da Cidade: %s \n Populacao: %d \n Area: %.2f Km² \n", cidade2, populacao2, area2); //informa na tela a cidade, a população e a aerea com duas casas decimais.//
    printf(" PIB: %.2f bilhoes de reais \n Numero de pontos turisticos: %d \n", pib2, pontos2); //informa na tela o PIB com duas casas decimais e os Pontos turísticos. Todas essas informações da carta 2.//
    printf(" Densidade populacional: %.2f hab/km² \n PIB per capita: %.2f reais \n", dpp2, ppc2); //informa na tela a Densidade populacional e o PIB per capita da carta 2 com duas casas decimais.//

    return 0;
}