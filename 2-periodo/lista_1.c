
#include <stdio.h>
#include <stdlib.h>

void limpaTela(){

    char teste1;
    printf("pressione ENTER para ir para a proxima questao");
    scanf("%c", &teste1);

    system("CLS");
}


int main(){

    printf("ALUNO: \n");
    printf("Julio Cesar Lima Ferreira, 2 periodo de Engenharia da Computacao - FMF \n");


    limpaTela();

    float ap1, ap2, ap3, mediaPonderada;

    printf("EXERCICIO 1: \n");

    printf("digite a nota ap1: ");
    scanf("%f", &ap1);

    printf("digite a nota ap2: ");
    scanf("%f", &ap2);

    printf("digite a nota ap3: ");
    scanf("%f", &ap3);

    mediaPonderada = ((ap1 * 3) + (ap2 * 3) + (ap3 * 4)) / 10;
    printf("a sua media eh = %.2f\n", mediaPonderada);


    printf("\nEXERCICIO 2: \n");

    float salarioJoao, restoSalario, conta1, conta2;

    printf("digite o seu salario: ");
    scanf("%f", &salarioJoao);

    printf("digite o valor da conta1: ");
    scanf("%f", &conta1);
    printf("digite o valor da conta2: ");
    scanf("%f", &conta2);

    conta1 = conta1 + (0.02*conta1);
    conta2 = conta2 + (0.02*conta2);

    restoSalario = salarioJoao - (conta1 + conta2);
    printf("o seu salario total foi %.2f, e agora so resta %.2f \n", salarioJoao, restoSalario);


    printf("\nEXERCICIO 3: \n");

    float peso, pesoEngordado, pesoEmagrecido;

    printf("digite o seu peso: ");
    scanf("%f", &peso);

    pesoEngordado = peso + (peso*0.15);
    pesoEmagrecido = peso - (peso*0.20);

    printf("o seu peso engordando 15 eh = %.2f\n", pesoEngordado);
    printf("o seu peso emagrecendo 20 eh = %.2f\n", pesoEmagrecido);


    printf("\nEXERCICIO 4: \n");

    float salarioPessoa, valorVendas, salarioFinal;


    printf("digite o seu salario: ");
    scanf("%f", &salarioPessoa);

    printf("digite o valor da SOMA de suas vendas: ");
    scanf("%f", &valorVendas);

    salarioFinal = salarioPessoa + (0.04*valorVendas);
    printf("O seu salario foi %.2f com o acrescimo das vendas, ficou %.2f\n", salarioPessoa, salarioFinal);


    printf("\nEXERCICIO 5: \n");

    float mediaFinal;
    printf("Digite a sua media final: ");
    scanf("%f", &mediaFinal);

    if(mediaFinal >= 5){
        printf("parabens, voce foi aprovado!\n");
    }else{
        printf("que triste, voce foi reprovado!\n");
    }


    printf("\nEXERCICIO 6: \n");

    float mediaFinal1;
    int porcentagemFrequencia;

    printf("Digite a sua media final: ");
    scanf("%f", &mediaFinal1);
    printf("Digite a sua porcentagem de frequencia: ");
    scanf("%f", &porcentagemFrequencia);

    if(mediaFinal1 >= 5 && porcentagemFrequencia >= 70){
        printf("parabens, voce foi aprovado!\n");

    }else{
        printf("que triste, voce foi reprovado!\n");
    }


    printf("\nEXERCICIO 7: \n");

    float pesoPessoa, alturaPessoa, imc;

    printf("Digite o seu peso: ");
    scanf("%f", &pesoPessoa);

    printf("Digite a sua altura: ");
    scanf("%f", &alturaPessoa);

    imc = pesoPessoa / (alturaPessoa*alturaPessoa);

    if(imc < 18.5){
        printf("abaixo do peso\n");

    }else if(imc >= 18.5 && imc <= 24.9){
        printf("peso ideal, parabens\n");

    }else if(imc >= 25.0 && imc <= 29.9){
        printf("levemente acima do peso\n");

    }else if(imc >= 30.0 && imc <= 34.9){
        printf("obesidade grau I\n");

    }else if(imc >= 35.0 && imc <= 39.9){
        printf("obesidade grau II\n");

    }else{
        printf("obesidade grau III\n");
    }



    printf("\nEXERCICIO 8:  REFAZER \n");

    int resposta;
    int somaRespostas;

    printf("Telefonou para a vitima? Sim = 1 /Nao = 0: ");
    scanf("%d", &resposta);
    if(resposta == 1){
        somaRespostas++;
    }

    printf("Esteve no local do crime? Sim = 1 /Nao = 0: ");
    scanf("%d", &resposta);
    if(resposta == 1){
        somaRespostas++;
    }

    printf("Mora perto da vitima? Sim = 1 /Nao = 0: ");
    scanf("%d", &resposta);

    if(resposta == 1){
        somaRespostas++;
    }

    printf("Devia para a vitima? Sim = 1 /Nao = 0: ");
    scanf("%d", &resposta);

    if(resposta == 1){
        somaRespostas++;
    }

    printf("Ja trabalhou com a vitima? Sim = 1 /Nao = 0: ");
    scanf("%d", &resposta);
    if(resposta == 1){
        somaRespostas++;
    }

    if(somaRespostas == 2){
        printf("pessoa suspeita!\n");
    }else if(somaRespostas >= 3 && somaRespostas <= 4){
        printf("cumplice!!\n");
    }else if(somaRespostas == 5){
        printf("cuidado! assassino\n");
    }else{
        printf("inocente\n");
    }

    printf("\nEXERCICIO 9: \n");

    int idade;
    printf("por favor, digite a sua idade: ");
    scanf("%d", &idade);

    if(idade >= 5 || idade <= 7){
        printf("Infaltil A\n");

    }else if(idade >= 8 || idade <= 11){
        printf("Infaltil B\n");

    }else if(idade >= 12 || idade <= 13){
        printf("Juvenil A\n");

    }else if(idade >= 14 || idade <= 17){
        printf("Juvenil B\n");

    }else{
        printf("Adulto\n");

    }


    printf("\nEXERCICIO 10: \n");

    int operacao, valor1, valor2;


    printf("1 - soma\n");
    printf("2 - subtracao\n");
    printf("3 - multiplicacao\n");
    printf("4 - divisao\n");
    printf("digite a operacao: ");
    scanf("%d", &operacao);
    printf("digite o valor1: ");
    scanf("%d", &valor1);
    printf("digite o valor2: ");
    scanf("%d", &valor2);



    if(operacao == 1){
        printf("soma: %d", valor1 + valor2);

    }else if(operacao == 2){
        printf("subtracao: %d", valor1 - valor2);

    }else if(operacao == 3){
        printf("multiplicacao: %d", valor1 * valor2);

    }else{
        printf("divisao: %d", valor1 / valor2);

    }



    return 0;
}
