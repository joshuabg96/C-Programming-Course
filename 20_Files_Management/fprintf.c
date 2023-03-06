#include <stdio.h>

int main() 
{
    char direction[] = "C:\\Users\\josue\\Documents\\GitHub\\Mis Repositorios\\C-Programming-Course\\20_Files_Management\\Files\\fprintf.txt";
    FILE* File = fopen(direction,"a"); //<-- Write at the end of the file if it does not exist, create it

    if (File == NULL)
    {
        printf("Error trying to open the file\n");
    }
    else
    {
        char Texto[] = "Hello World!";              //<-- Create the Text to be added to the file
        fprintf(File,"Write File: %s",Texto);       //<-- Add the Text + another text
        printf("File created succesfully\n");
    }

    fclose(File);                                   //<-- Close the file

    return 0;
}