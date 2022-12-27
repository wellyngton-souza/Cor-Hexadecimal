//Bibliotecas
#include <stdio.h>
#include <conio.h>//necessaria para o metodo getch()
#include <stdlib.h>//necessário para os metodos rand() e srand()
#include <time.h> //necessaria para o metodo Time

int main()
{
  int i;
  
  printf("Gerador Cor Hexadecimal:\n\n");
  
  srand(time(NULL));
  
  printf("Cor Gerada: \n #");
  /*
    todas as vezes que utilizei o rand() dentro do laço de repetição me retornou sempre o mesmo valor,
    por isso utilizei o srand( que funciona como uma seed para criação de um valor diferente,
    utilizando o metodo time, que sempre muda com base o horario atual)
  */
  for (i=0; i < 6; i++) //gera um valor de 6 caracteres
  {
    printf("%d", rand() % 10); //numero de 0 a 9
  }
  
  getch(); //espera vc digitar um caractere, sem exibir o mesmo na tela
  return 0;
}