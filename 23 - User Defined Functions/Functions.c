// Create a C Program within using user-defined functions...

#include<stdio.h>
void cFile();              // Function Prototype...
void objFile();
void exeFile();

int main(){

    cFile();               // Function Calling...
    objFile();
    exeFile();
    return 0;
}

void cFile(){              // Function Definition...
    printf("\nC_Programming.c File created Successfully...");
}

void objFile(){
    printf("\nC_Programming.obj File created Successfully...");
}

void exeFile(){
    printf("\nC_Programming.exe File created Successfully...");
}