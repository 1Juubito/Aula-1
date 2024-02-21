#include <stdio.h>
#include <conio.h>
/*
ober notas
calcular media
verficar se o aluno foi reprovado ou não
se a media >= 7 aprovado
senão, reprovado
*/
int main(void) {
  //declaração variáveis
  float nota1, nota2, media;

  //obter as notas
  printf("Digite a primeira nota: ");
  scanf("%f", &nota1);

  printf("Digite a segunda nota: ");
  scanf("%f", &nota2);
  //calcular a média
  media = (nota1 + nota2)/2;

  //verificar se o aluno foi aprovado ou não
  if(media >= 7)
  printf("Aprovado");
  else
  printf("Reprovado");
  _getch();
    return 0;
    }