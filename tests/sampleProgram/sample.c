#include <stdio.h>
#include <stdlib.h>

const int c = 0;

int main(int argc, char** argv)
{
    printf("Prueba de concepto!\n");

    int x = 0;
    int* y = malloc(sizeof(*y));
    
    printf("Hello, world!\n");

    free(y);
    
    return 0;
}