#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <windows.h>

char libraryPath[128] = "./";
char libraryName[64];
char symbolName[]  = "getSquare";


int main(){ 

    printf("Enter the name of the Shared Library: ");
    scanf("%s", &libraryName);

    strcat(libraryPath, libraryName);
    void* handle = LoadLibrary(libraryPath);
    if( handle == NULL ){
        printf("\nUnable to load library: %s \n", libraryName );
        return 0;
    }else{
        printf("\n'%s' is loaded in my address space.\n", libraryName);
    }


    int (*getSquare)(int) = (int(*)(int)) GetProcAddress(handle, symbolName);
    if ( getSquare == NULL ){
        printf("Unable to find symbol '%s' \n", symbolName);
        return 0;
    }else{
        printf("Function '%s' is found in the symbol table of '%s'. \n", symbolName, libraryName);
    }

    int number = 10;
    printf("Calling function '%s' provided by '%s' \n", symbolName, libraryName);
    printf("%s(%d) is: %d\n", symbolName, number, getSquare(number));


    return 0;
}
