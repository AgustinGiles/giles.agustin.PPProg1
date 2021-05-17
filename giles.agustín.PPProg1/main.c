#include <stdio.h>
#include <stdlib.h>

int main()
{
    char cadena[200];
    int i = 0;
    int j;
    printf("Introduce un texto: \n");
    gets(cadena);
    printf("El texto introducido es: %s\n\n", cadena);
    while(cadena[i]!='\0'){
        i++;
    }
    printf("El texto al revez es:\n\t");
    for (j=i-1; j>=0; j--){
        printf("%c", cadena[j]);
    }
    return 0;
}
