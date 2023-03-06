#include <stdio.h>

int main() {

    char direction[] = "C:\\Users\\josue\\Documents\\GitHub\\Mis Repositorios\\C-Programming-Course\\20_Files_Management\\Files\\Write_LeterbyLetter.txt";
    FILE* File = fopen(direction,"a");
    if (File == NULL)
    {
        printf("Error trying to open the file\n");
    }
    else
    {
        char letter;
        // While the user do not press enter
        while ((letter = getchar()) != '\n')
        {
            fputc(letter,File);     //<-- Write a letter every time the user type a key
        }
    }
    fclose(File);                   // Close the file

    return 0;
}