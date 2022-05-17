#include <stdio.h>
#include <unistd.h>
#include <sys/wait.h>
#include <assert.h>
#include "leercadena.h"

#define MAX 100

int main(int argc, char *argv[])
{
    char **vector_cadenas;
    char cadena[MAX];

    while (1)
    {
        pid_t pid;
        printf("> ");
        leer_de_teclado(MAX, cadena);
        vector_cadenas = de_cadena_a_vector(cadena);

        if (strcmp("salir", vector_cadenas[0]) == 0){

printf("Gracias por usar mi dummy shell ;-)\n");

char * const args[] = {"clear", NULL}
execvp(args[0], args);
break;
        }
            
        pid = fork();
        assert(pid >= 0);
        if (pid == 0)
        {
            execvp(vector_cadenas[0], vector_cadenas);
        }
        else
        {
            wait(NULL);
        }
    }
    

    return 0;
}
