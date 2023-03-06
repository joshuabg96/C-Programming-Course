/*
    Close files using fclose()
*/

#include <stdio.h>
#include <stdlib.h>

FILE *fd1,*fd2;

int main() {

    fd1 = fopen("C:\\Users\\josue\\Documents\\GitHub\\Mis Repositorios\\C-Programming-Course\\23_Input_Output_Files\\Files\\Hello1.txt","a+");
    fd2 = fopen("C:\\Users\\josue\\Documents\\GitHub\\Mis Repositorios\\C-Programming-Course\\23_Input_Output_Files\\Files\\Hello2.txt","a+");

    if (fd1 == NULL || fd2 == NULL){
        printf("Files could not opened\n");
    }else{
        printf("Files opened\n");
    }

    //* Close Files

    fclose(fd1);
    fclose(fd2);
    

    return 0;
}