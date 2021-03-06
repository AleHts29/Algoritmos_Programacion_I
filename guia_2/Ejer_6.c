/*
Escribir un programa que lea un texto desde el teclado y calcule la cantidad de caracteres alfanuméricos, no alfanuméricos y numéricos que se ingresan. El programa debe informar esos valores por pantalla.
Sugerencia: usar las funciones de biblioteca isalnum(int caracter), isalpha(int caracter) e isdigit(int carácter).
*/

#include<stdio.h>
#include<string.h>
#include<ctype.h>

#define MSG_USER "Ingrese un texto"
#define MSG_USER_END "Lo ingresado fue"
#define MAX_STR 100



int main(void){
    int num=0, alphanumeric=0, no_alphanumeric=0;
    char c, sentence[MAX_STR];
    size_t i = 0;

    printf("%s\n", MSG_USER);
    while ((c = getchar()) !='\n')
    {
        if(isalnum(c))
            {
                ++alphanumeric;
                
            } else
            {
                ++no_alphanumeric;
            }
            
        if(isdigit(c))
            {
                ++num;        
            }
        sentence[i++] = c;
    }
    printf("La cantidad de caracteres alfanumericos son: %i\n", alphanumeric);
    printf("La cantidad de caracteres numericos son: %i\n", num);
    printf("La cantidad de caracteres no alfanumericos son: %i\n", no_alphanumeric);
    sentence[i] = '\0';

    while (sentence[i]!='\0')
        
            ++i;    
        
    printf("Len 2: %ld\n", i);

    puts("\n" MSG_USER_END);
    puts(sentence);


    return 0;
}