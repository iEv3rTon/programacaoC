#include <stdio.h>

int main() {
    int age;
    int size;
    float height;
    double width;
    char word = "zz";
    char name[20] = "agua";
    int _test;

    age = 10;
    height = 14.55;
    width = 77777777.5555555;

    // if (age > 15) {
    //     printf("Yes\n");
    // } else if(height > 11.0) {
    //     printf("Noo\n");
    // }

    printf("What is your name?");
    scanf("%s", &name);

    printf("And your age?");
    scanf(" %d", &age);

    printf("My name is %s, my age is %d \n", name, age);

}

/*
A seguir, você tem uma lista dos principais especificadores utilizados:

%d: Imprime um inteiro no formato decimal.
 
%i: Equivalente a %d.
 
%f: Imprime um número de ponto flutuante no formato padrão.
 
%e: Imprime um número de ponto flutuante na notação científica.
 
%c: Imprime um único caractere.
 
%s: Imprime uma cadeia (string) de caracteres.

*/