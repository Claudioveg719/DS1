#include <stdio.h>

int main() {

int contador=0;
int turma=0;
printf("qual o numero de alunos");

scanf("%d", &turma);
int var[turma];

    while(contador!=turma)
        {
            var[contador]=contador+1;
            contador++;
        }

    printf("qual é o numero que quer ver?");
    scanf("%d", &turma);
    printf("%d", var[turma]);
}
