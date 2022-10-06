#include <math.h>
#include <stdio.h>
#include <stdlib.h>
/*Este código é capaz de fazer diversas operações matemáticas. Dentre elas estão a adição, multiplicação, subtração, expoente e raiz quadrada. Para que o usuário faça essas operações ele deve apenas digitar o número 1 ou 2. Assim o resultado da opração será imprimido na tela de console.*/
int main() {
  puts("Kâmé do Nascimento Griebeler. Analise e Desenvolvimento de Sistemas. "
       "UniLaSalle. 202212229\n");

  int operacao, menu;
  float num1, num2;
  menu = 1;
  do {
    // Digite a operação que deseja realizar.
    printf("Digite \n 1 para raiz quadrada: \n 2 para soma, subtração, multiplicação, "
           "divisão e potenciação: \n 0 para finalizar a operação: \n");
    scanf("%i", &operacao);

    // Selecionando a opçao 1 realiza a raiz quadrada;
    if (operacao == 1) {
      printf("Digite o número desejado: \n");
      scanf("%f", &num1);
      printf("O resultado da raiz quadrada de %0.2f é = %0.2f \n", num1, sqrt(num1));
    }
    // Caso queira realiza soma, multiplicaçao, divisão e potenciação digite "2";
    else if (operacao == 2) {
      char simbolo;
      printf("Digite o símbolo da operação matemática que deseja realizar: \n");
      scanf(" %c", &simbolo);

      switch (simbolo) {
      case '+':
        printf("Digite o primeiro número da operação: \n");
        scanf("%f", &num1);

        printf("Digite o segundo número da operação: \n");
        scanf("%f", &num2);

        printf("O resultado da operação é: %0.2f\n", num1 + num2);
        break;

      case '-':
        printf("Digite o primeiro número da operação: \n");
        scanf("%f", &num1);

        printf("Digite o segundo número da operação: \n");
        scanf("%f", &num2);

        printf("O resultado da subtração é: %0.2f\n", num1 - num2);
        break;

      case '*':
        printf("Digite o primeiro número da operação: \n");
        scanf("%f", &num1);

        printf("Digite o segundo número da operação: \n");
        scanf("%f", &num2);

        printf("O resultado da multiplicação é: %0.2f\n", num1 * num2);
        break;

      case '/':
        printf("Digite o primeiro número: \n");
        scanf("%f", &num1);
        do {
          printf("Digite o próximo número: \n");
          scanf("%f", &num2);
          if (num2 == 0) {
            printf("Voce não pode dividir por zero. Digite outro número");
          }

        } while (num2 == 0);

        printf("A divisao e: %0.2f\n", num1 / num2);
        break;


      case '^':
        printf("Digite a base da potenciação: \n");
        scanf("%f", &num1);

        printf("Digite o expoente da operação: \n");
        scanf("%f", &num2);

        printf("O resultado da operação é: %0.2f\n", pow(num1, num2));
        break;

      case 'r':
        printf("Para essa operação é preciso digitar o número 1:\n");
        break;

      default:
        printf("Esta operação não é possível ser realizada, tente outra (+, -, /, *, ^):\n");
      }
    } else if (operacao == 0) {
      menu = 0;
      printf("Operação encerrada");
    }

    else {
      printf("Operacão indisponível");
    }

  }

  while (menu == 1);

  return 0;
}