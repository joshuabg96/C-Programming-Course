/*
    Use the fopen() function to open a file and determine if it exists

    fopen(FILE_NAME, mode);

    FILE_NAME =  Identified of the file
    mode = The mode which the file will be opened
*/
#include <stdio.h>

int main() {

    FILE *fd;               //<-- Pointer where the file will be saved
    
    // Create direction where the file is located
    char direction[] = "C:\\Users\\josue\\Documents\\GitHub\\Mis Repositorios\\C-Programming-Course\\20_Files_Management\\Files\\fopen.txt";

    fd = fopen(direction, "r"); // "r" = read 

    if (fd == NULL)
    {                //<-- If the fopen return NULL the file does not exist
        printf("File does not exist\n");
    }
    else
    {
        printf("File Found\n");
        printf("The path is: %s\n",direction); //<-- Print file path
    }
}