/*
A Atividade de Produção da disciplina de Algoritmos
e Programação da Unidade 1 constitui no desenvolvimento
de um código em C que realize cálculos simples.

Autor: Keoma da Silva.
Matrícula: 202221405
Curso: Analise e Desenvolvimento de Sistemas.
Instituição: Universidade LaSalle.
 */

//BIBLIOTECAS
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <unistd.h>

//VARIAVEIS GLOBAIS
int              operacao = 0;
float  valor1, valor2, valor3;
float        result1, result2;
int                  operador;
int                      tela;
void        calculadora(void);
void               menu(void);
void                adi(void);
void                sub(void);
void            divisao(void);
void              multi(void);
void                pot(void);
void        tela_aviso1(void);

int main()//Inicio da função principal.
{

        calculadora();//chama a função calculadora.



}//Fim da função principal.

void calculadora(void){

        system("clear");
        operacao=0;
        printf("Autor: Keoma da Silva\n");
        printf("Matricula: 202221405 \n");
        printf("Disciplina: Algoritmos e Programacao\n");
        printf("Instituicao: Universidade LaSalle\n\n");
        printf("CALCULADORA SIMPLES\n\n\n");
    
            if(operacao==0){//Inicio do laço condicional para exibicao do primeiro menu
                printf("Escolha Qual Operacao Desejas Realizar\n");
                printf("[1] RAIZ QUADRADA\n\n");
                printf("[2] ADICAO, SUBTRACAO, DIVISAO, MULTIPLICACAO OU POTENCIACAO\n");
                scanf("%i", &operacao);//instrução que armazena um valor digitado na variavel operação.
                          }//Fim do laço if para operação igual a 0.
    
    
            if(operacao==1){//inicio de uma segunda condição do laço para exibição de outra "tela"
                system("clear");
                printf("Autor: Keoma da Silva\n");
                printf("Matricula: 202221405 \n");
                printf("Disciplina: Algoritmos e Programacao\n");
                printf("Instituicao: Universidade LaSalle\n\n");
                printf("CALCULADORA SIMPLES\n\n\n");
                printf("RAIZ QUADRADA\n");
                printf("Digite o valor do radicando: ");
        
                scanf("%f", &valor1);
                result1 = sqrt(valor1);//operação aritimetica de radiciação
        
                printf("O valor da raiz: %f", result1);//instrução para exibir na tela o valor da variável result1.
        
                printf("\n\nPressione 1 para ir ao menu principal");
                printf("\nou 0 para sair\n\n");
                scanf("%d", &tela);
        
                        switch(tela){
                          case 1 :    calculadora();  break;
                          case 0 :    return 0;       break;
        
                                    }//Fim do Switch Tela.
                            }//Fim do laço if Operação igual a 1.
    
            if(operacao==2){
                    menu();//chama a função void menu.
                    }//Fim do laço if caso operação seja igual a 2.
        
            if((operacao < 1) || (operacao > 2)){
                    tela_aviso1();//chama a função tela_aviso1.
                    }//Fim do laço if caso operação seja número invalido.
    
    
    

}//Fim da função calculadora.

void adi (void){
        system("clear");
        printf("Autor: Keoma da Silva\n");
        printf("Matricula: 202221405 \n");
        printf("Disciplina: Algoritmos e Programacao\n");
        printf("Instituicao: Universidade LaSalle\n\n");
        printf("CALCULADORA SIMPLES\n\n\n");
        printf("ADICAO\n\n");
        printf("Digite o primeiro valor a ser calculado: \n");
        scanf("%f", &valor2);
        printf("Digite o segundo valor a ser calculado: \n");
        scanf("%f", &valor3);

        result1 = valor2 + valor3;
        printf("%f", valor2);
        printf(" + ");
        printf("%f", valor3);
        printf("\nResultado: %f", result1);

        printf("\n\nPressione 1 para realizar uma nova soma, 2 para ir ao menu principal");
        printf("\nou 0 para sair\n\n");
        scanf("%d", &tela);

            switch(tela){
                case 1 :    adi();          break;
                case 2 :    calculadora();  break;
                case 0 :    return 0;       break;

                        }//Fim da instrução switch tela.

}//Fim do void adição.

void divisao(void){

        system("clear");
        printf("Autor: Keoma da Silva\n");
        printf("Matricula: 202221405 \n");
        printf("Disciplina: Algoritmos e Programacao\n");
        printf("Instituicao: Universidade LaSalle\n\n");
        printf("CALCULADORA SIMPLES\n\n\n");
        printf("DIVISAO\n\n");
        printf("Digite o primeiro valor a ser calculado: \n");
        scanf("%f", &valor2);
        printf("Digite o segundo valor a ser calculado: \n");
        scanf("%f", &valor3);

        result1 = valor2 / valor3;
        printf("%f", valor2);
        printf(" / ");
        printf("%f", valor3);
        printf("\nResultado: %f", result1);

        printf("\n\nPressione 1 para realizar uma nova divisao, 2 para ir ao menu principal");
        printf("\nou 0 para sair\n\n");
        scanf("%d", &tela);

            switch(tela){
                case 1 :    divisao();          break;
                case 2 :    calculadora();  break;
                case 0 :    return 0;       break;

                        }//Fim da instução tela.

}//Fim do void divisão.

void sub(void){

        system("clear");
        printf("Autor: Keoma da Silva\n");
        printf("Matricula: 202221405 \n");
        printf("Disciplina: Algoritmos e Programacao\n");
        printf("Instituicao: Universidade LaSalle\n\n");
        printf("CALCULADORA SIMPLES\n\n\n");
        printf("SUBTRACAO\n\n");
        printf("Digite o primeiro valor a ser calculado: \n");
        scanf("%f", &valor2);
        printf("Digite o segundo valor a ser calculado: \n");
        scanf("%f", &valor3);

        result1 = valor2 - valor3;
        printf("%f", valor2);
        printf(" - ");
        printf("%f", valor3);
        printf("\nResultado: %f", result1);

        printf("\n\nPressione 1 para realizar uma nova subtracao, 2 para ir ao menu principal");
        printf("\nou 0 para sair\n\n");
        scanf("%d", &tela);

            switch(tela){
                case 1 :    sub();          break;
                case 2 :    calculadora();  break;
                case 0 :    return 0;       break;

                        }//Fim da instrção switch tela.

}//Fim do void subtração.

void multi(void){

        system("clear");
        printf("Autor: Keoma da Silva\n");
        printf("Matricula: 202221405 \n");
        printf("Disciplina: Algoritmos e Programacao\n");
        printf("Instituicao: Universidade LaSalle\n\n");
        printf("CALCULADORA SIMPLES\n\n\n");
        printf("MULTIPLICACAO\n\n");
        printf("Digite o primeiro valor a ser calculado: \n");
        scanf("%f", &valor2);
        printf("Digite o segundo valor a ser calculado: \n");
        scanf("%f", &valor3);

        result1 = valor2 * valor3;
        printf("%f", valor2);
        printf(" X ");
        printf("%f", valor3);
        printf("\nResultado: %f", result1);

        printf("\n\nPressione 1 para realizar uma nova multiplicacao, 2 para ir ao menu principal");
        printf("\nou 0 para sair\n\n");
        scanf("%d", &tela);

            switch(tela){
                case 1 :    multi();          break;
                case 2 :    calculadora();  break;
                case 0 :    return 0;       break;
                        }//Fim da instrução switch tela.

}//Fim do void multiplicação.

void pot(void){
        system("clear");
        printf("Autor: Keoma da Silva\n");
        printf("Matricula: 202221405 \n");
        printf("Disciplina: Algoritmos e Programacao\n");
        printf("Instituicao: Universidade LaSalle\n\n");
        printf("CALCULADORA SIMPLES\n\n\n");
        printf("POTENCIACAO\n\n");
        printf("Digite o valor da base: \n");
        scanf("%f", &valor2);
        printf("Digite o valor da potencia: \n");
        scanf("%f", &valor3);

        result1 = pow(valor2,valor3);
        printf("%f", valor2);
        printf("^");
        printf("%f", valor3);
        printf("\nResultado: %f", result1);

        printf("\n\nPressione 1 para realizar um novo calculo, 2 para ir ao menu principal");
        printf("\nou 0 para sair\n\n");
        scanf("%d", &tela);

            switch(tela){
                case 1 :    pot();          break;
                case 2 :    calculadora();  break;
                case 0 :    return 0;       break;
                        }//Fim da instrução switch tela.

}//Fim do void potenciação.

void tela_aviso1(void){

        system("clear");
        printf("Autor: Keoma da Silva\n");
        printf("Matricula: 202221405 \n");
        printf("Disciplina: Algoritmos e Programacao\n");
        printf("Instituicao: Universidade LaSalle\n\n");
        printf("CALCULADORA SIMPLES\n\n\n");
        printf("Escolha Qual Operacao Desejas Realizar\n");
        printf("[1] RAIZ QUADRADA\n\n");
        printf("[2] ADICAO, SUBTRACAO, DIVISAO, MULTIPLICACAO OU POTENCIACAO\n");
        printf("DIGITE UM NuMERO VaLIDO!\n");
        sleep(1);
        calculadora();
}//Fim do void tela_de_aviso1. 

void menu(void){

        system("clear");
        printf("Autor: Keoma da Silva\n");
        printf("Matricula: 202221405 \n");
        printf("Disciplina: Algoritmos e Programacao\n");
        printf("Instituicao: Universidade LaSalle\n\n");
        printf("CALCULADORA SIMPLES\n\n\n");
        printf("[1] ADICAO\n");
        printf("[2] SUBTRACAO\n");
        printf("[3] DIVISAO\n");
        printf("[4] MULTIPLICACAO\n");
        printf("[5] POTENCIACAO\n\n");

        printf("Digite o numero correspondente do operador: \n");
        scanf("%d", &operador);


            switch (operador){
                case    1   :   adi();      break;
                case    2   :   sub();      break;
                case    3   :   divisao();  break;
                case    4   :   multi();    break;
                case    5   :   pot();      break;
                default:
                    printf("Digite uma opcao valida!");
                    sleep(1);
                    menu();
                              }//Fim da instrução switch operador.

}//Fim do void menu.
