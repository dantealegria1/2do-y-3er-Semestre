#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>

// maximo y minimo son inclusivos
int aleatorio_en_rango(int minimo, int maximo) {
    return minimo + rand() / (RAND_MAX / (maximo - minimo + 1) + 1);
}

void cadena_aleatoria(int longitud, char *destino) {
    char muestra[] = "01";
    for (int x = 0; x < longitud; x++) {
        int indiceAleatorio = aleatorio_en_rango(0, (int) strlen(muestra) - 1);
        destino[x] = muestra[indiceAleatorio];
    }
}

int main(void) {
#define LONGITUD_DESEADA 10
    srand(getpid());
    char destino[LONGITUD_DESEADA + 1] = "";// El +1 es por el carácter nulo que marca el fin de la cadena
    cadena_aleatoria(LONGITUD_DESEADA, destino);
    printf("%s", destino);
    printf("/");
    char destino2[LONGITUD_DESEADA + 1] = "";// El +1 es por el carácter nulo que marca el fin de la cadena
    cadena_aleatoria(LONGITUD_DESEADA, destino2);
    printf("%s", destino2);
}
