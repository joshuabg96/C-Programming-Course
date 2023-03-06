/*
    You can use getc to read all the content of a file
*/

#include <stdio.h>
#include <stdlib.h>

FILE *fd;

int main() {

    int c;
    char direccion[] = "C:\\Users\\josue\\Documents\\GitHub\\Mis Repositorios\\C-Programming-Course\\23_Input_Output_Files\\Files\\Hello1.txt";

    fd = fopen(direccion,"rt"); 

    if (fd == NULL){
        printf("Error trying to read a file\n");
        return 1;
    }

    while ((c=fgetc(fd))!= EOF){
        if(c == '\n')
        {
            printf("\n");
        }
        else
        {
            putchar(c);
        }
    }

    return 0;
}
