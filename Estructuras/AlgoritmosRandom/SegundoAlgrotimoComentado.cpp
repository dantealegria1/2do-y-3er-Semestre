/**
 * Algoritmo de cruzamiento de bits
 * 
 * Inteligencia Artificial UAA
 * 
 * Autores:
 * - Dante Alejandro alegría Romero      
 * - Diego Alberto Aranda                        
 * - Andrea Margarita Balandran Felix  
 * - María Yoselin García Medina                
 * - Moreno Sánchez Diego Emilio @YeyoM        
 * 
 * Fecha: 26/09/2022
 * 
 * Descripción:
 * 
*/

// Librerias
#include <iostream>
#include <cstdlib>
#include <string>
#include <vector>
#include <time.h>
#include <stdio.h>
#include <unistd.h>
#include <algorithm>
#include <iterator>
#include <cstring>
using namespace std;

/**
 * Función para contar el número de veces que aparece un caracter en una cadena
 * @param c Caracter a contar
 * @param str Cadena a buscar
 * @return El número de veces que aparece el caracter c en la cadena str
*/
size_t countOccurrences(char c, string &str) {
  size_t count = 0;
  for (char i : str) {
    if (i == c) {
      count++;
    }
  }
  return count;
}

/**
 * Función para generar un número aleatorio entre un rango
 * @param minimo El número mínimo que se desea generar
 * @param maximo El número máximo que se desea generar
*/
int aleatorioEnRango(int minimo, int maximo) {
  return minimo + rand() / (RAND_MAX / (maximo - minimo + 1) + 1);
}

/**
 * Función para generar una cadena aleatoria
 * @param longitud La longitud de la cadena a generar
 * @param destino La cadena donde se almacenará la cadena aleatoria
*/
int cadenaAleatoria(int longitud, char *destino) {
  char muestra[] = "01";
  for (int x = 0; x < longitud; x++) {
    int indiceAleatorio = aleatorioEnRango(0, (int) strlen(muestra) - 1);
    destino[x] = muestra[indiceAleatorio];
  }
}

/**
 * Función para obtener el número mayor de ceros en un arreglo
 * @param arr El arreglo de números
 * @param n El número de elementos en el arreglo
 * @return El número mayor de ceros en el arreglo
*/
int largestAmountCeros(int arr[], int n) {
  int i;
  int max = arr[0];
  for (i = 0; i < n; i++) {
    if (arr[i] > max) {
      max = arr[i];
    }
  }
  return max;
}

int main() {

   /**
   * @param Longitud_deseada es la cantidad de bits que queremos que tenga nuestro individuo
   * @param numero_de_cadenas es la canntidad de generaciones que queremos generar
   * @param srand Inicializando el generador de numeros aleatorios con el ID del proceso del programa
   * @param auxiliar Definiendo el caracter que vamos a contabilizar 
   */

  #define LONGITUD_DESEADA 10
  #define NUMERO_DE_CADENAS 250
  srand(getpid());
  char auxiliar = '0';

      /**
    * @param binarios1 Definiendo el arreglo de cadenas.
    * @param binarios2 Definiendo el arreglo de cadenas.
    * @param binariosCopy1 Definiendo el arreglo de chars para cuando generamos las cadenas  
    * @param binariosCopy2 Definiendo el arreglo de chars para cuando generamos las cadenas
    * @param destino Definiendo el arreglo de chars para cuando generamos las cadenas
    * @param ceros Definiendo el arreglo de numeros para guardar el numero de ceros en cada cadena. 
    */

  string binarios1[(NUMERO_DE_CADENAS / 2) + 1][(NUMERO_DE_CADENAS / 2) + 1];
  string binarios2[(NUMERO_DE_CADENAS / 2) + 1][(NUMERO_DE_CADENAS / 2) + 1];
  string binariosCopy1[(NUMERO_DE_CADENAS / 2) + 1][(NUMERO_DE_CADENAS / 2) + 1];
  string binariosCopy2[(NUMERO_DE_CADENAS / 2) + 1][(NUMERO_DE_CADENAS / 2) + 1];
  char destino[LONGITUD_DESEADA + 1] = "";
  int ceros[LONGITUD_DESEADA + 1];

    /**
   * @param k es la variable que nos ayuda a recorrer el arreglo de cadenas
   * 
   * Lo recorremos hasta 250 que es lo que definimos y lo dividimos entre dos 
   * para asegurarnos de que se generen 250 cadenas
   */

  for (int k = 0; k < NUMERO_DE_CADENAS / 2; k++) {

    cout << "--------------------------" << endl;
	  cout << "Generacion " << k + 1 << endl;
	  cout << "--------------------------" << endl;

    /* Generando las cadenas aleatorias. (solo en generacion 1)*/
      /**
   * @param k es la variable que nos ayuda a recorrer el arreglo de cadenas
   * 
   * Lo recorremos hasta 250 que es lo que definimos y lo dividimos entre dos 
   * para asegurarnos de que se generen 250 cadenas
   */

    if (k == 0) {
      for (int i = 0; i < 10; i++) {

        cadenaAleatoria(LONGITUD_DESEADA, destino);
        binarios1[k][i] = destino;
        binariosCopy1[k][i] = binarios1[k][i];
        ceros[i] = countOccurrences(auxiliar, binarios1[k][i]);
      }
    } else {
      /**
       * @param indiceAleatorio es el numero seleccionado para partir el arreglo de cadenas
       * @param seleccionados son los elementos seleccionados
       * @param iterados sirve para ir aumentando el ciclo
       * @param exist sirve para saber si un elemento ya fue seleccionado
      */
      int indicesAleatorios[6];
      int seleccionados = 0;
      int iterador = 0;

      /**
       * Hacemos un ciclo para seleccionar los 6 elementos que vamos a usar para generar las cadenas
       * Despues de eso con nuestra funcion aleatorioEnRango generamos los indices aleatorios
       * Nuestrra variable @param exist sirve para saber si el indice ya fue seleccionado
       * Si no existe lo agregamos al arreglo de indices y sumamos el iterador y los seleccioandos
      */

      while (seleccionados < 6) {
        int indiceAleatorio = aleatorioEnRango(0, 9);
        bool exists = std::find(std::begin(indicesAleatorios), std::end(indicesAleatorios), indiceAleatorio) != std::end(indicesAleatorios);
        if (!exists) {
          indicesAleatorios[iterador] = indiceAleatorio;
          iterador++;
          seleccionados++;
        }
      }
      
      /**
       * @param i sirve para recorrer el arreglo
       * @param num2 sirve para generar el numero aleatorio
       * @param ceros sirve para guardar el numero de ceros en cada cadena
      */

     /**
      * Hacemos un ciclo para generar las cadenas, primero generamos un numero aleatorio
      * Desoues de eso guardamos en nuestra matriz @param bianarios1 la cadena generada
      * en base a separar las cadenas de la generacion anterior separadas en el indice aleatorio
      * generado anteriormente, ej: 1010101010 y 0101010111 y el numero aleatorio es 5
      * entonces la cadena generada seria 10101 y 10111.
      * Despues de eso guardamos en nuestra matriz @param bianariosCopy1 la cadena generada 
      * y contamos la cantidad de 0
      */
      for (int i = 0; i < 6; i++) {
        int num2 = 1 + rand() % (10 - 1);
        binarios1[k][i] = binarios1[k-1][indicesAleatorios[i]].substr(0, num2) + binarios1[k-1][indicesAleatorios[6-i]].substr(num2, 9);
        binariosCopy1[k][i] = binarios1[k][i];
        ceros[i] = countOccurrences(auxiliar, binarios1[k][i]);
      }
     /**
      * @param indicesNoAleatorios sirve para guardar los indices que no fueron seleccionados
      * @param iterador2 sirve para ir aumentando el ciclo
     */
      int indicesNoAleatorios[4];
      int noSeleccionados = 0;
      int iterador2 = 0;

      /**
       * Creamos un ciclo for hasta 10 para recorrer el arreglo, despues de eso repetimos el mismo proceso
       * de antes para saber si el indice ya fue seleccionado, si no fue seleccionado lo agregamos al arreglo
       * de indices no aleatorios y sumamos el iterador y los no seleccioandos
      */
      for (int j = 0; j < 10; j++) {
        bool exists = std::find(std::begin(indicesAleatorios), std::end(indicesAleatorios), j) != std::end(indicesAleatorios);
        if (!exists) {
          indicesNoAleatorios[iterador2] = j;
          iterador2++;
          noSeleccionados++;
        }
      }

      /**
       * Creamos un ciclo foor pero iniciando desde el indice 6 hasta el 10 para recorrer el arreglo
       * Despues de eso guardamos en nuestra matriz @param bianarios1 la cadena generada 
       * de la generacion anterior en el indice que no fue seleccionado hasta el 6 y los
       * copiamos en @param bianariosCopy1, y contamos la cantidad de 0
      */

      for (int i = 6; i < 10; i++) {
        binarios1[k][i] = binarios1[k-1][indicesNoAleatorios[i-6]];
        binariosCopy1[k][i] = binarios1[k][i];
        ceros[i] = countOccurrences(auxiliar, binarios1[k][i]);
      }

    }

    // Ordenando
    // Obtenemos la cadena con mas 0's
    // Obtenemos el indice de la cadena con mas 0's
    /**
     * @param max_ceros es el individuo conn mayor cantidad de ceros
     * @param index es el indice del individuo con mayor cantidad de ceros
    */

    /**
     * Ordenamos nuestra generacio inciando con un ciclo for hasta 10
     * Usando nuestra funcion @param largestAmountCeros nos 
     * devuelve al mayor numero de ceros. 
     * Creamos un nuevo ciclo for y dentro colocamos una condicional
     * para saber si el numero de ceros es igual al mayor numero de ceros
     * si es asi guardamos el indice en nuestra variable @param index
     * y despues de eso cambiamos el valor de la cadena en la posicion
    */

    for (int i = 0; i < 10; i++) {
      int max_ceros = largestAmountCeros(ceros, 10);
      int index = 0;
      for (int j = 0; j < 10; j++) {
        if (ceros[j] == max_ceros) {
          index = j;
          break;
        }
      }

      /**
       * @param binarios1 guarda la cadena con mas ceros en el arreglo og
       * @param ceros  usando el indice de la cadena con mas 0's y el arreglo de copias
      */

      binarios1[k][i] = binariosCopy1[k][index];
      ceros[index] = -1;
    }

    /**
     * Imprimimos la generacion y contamos sus 0's
    */

    for (int i = 0; i < 10; i++) {
      cout << i + 1 << ":" << binarios1[k][i] << ":";
      cout << countOccurrences(auxiliar, binarios1[k][i]) << endl;
    }

    /**
     * Creamos un ciclo for para recorrer el arreglo y despues de eso creamos una condicional
     * para saber si algun individuo tiene 10 0´s ( @param LONGITUD_DESEADA ), si es asi
     * detenemos el programa
    */
    
    for (int i = 0; i < 10; i++) {
      if (countOccurrences(auxiliar, binarios1[k][i]) == LONGITUD_DESEADA) {
        cout << "Se encontro la cadena con 10 ceros en la generacion " << k + 1 << endl;
        return 0;
      }
    }

    /**
     * @param suma inicializamos la suma en 0
    */

    /**
     * creamos un ciclo for para recorrer un arreglo que lo que haga es
     * sumar la cantidad de 0 de cada individuo para al final imrpimir
     * la cantidad de 0's de la generacion
    */

    int suma = 0;
    for (int i = 0; i < 10; i++) {
      suma += countOccurrences(auxiliar, binarios1[k][i]);
    }
    cout << "Suma de 0's: " << suma << endl;
  }

  /**
   *  Main loop 2, es el mismo proceso que el main loop 1. pero tomando como inicio
   * la ultima cadena anteriormente, la unica diferencia es que no tuvimos que comaprar si 
   * el primer elemento de la amtriz ere igual a 0 alateorizar la generacion.
   * 
   * Esto con el propopsito de asegurarnos que lleguen a las 250 generaciones por eso
   * el @param NUMERO_DE_CADENAS (250) dividio entre 2 
   * 
   * Aun asi le agregamos comentarios mas breves por si se olvida que se hacia en esa
   * parte especifica del codigo
  */

  for (int k = 0; k < NUMERO_DE_CADENAS / 2; k++) {

    cout << "--------------------------" << endl;
	  cout << "Generacion " << NUMERO_DE_CADENAS / 2 + k + 1 << endl;
	  cout << "--------------------------" << endl;

    if (k == 0) {
      // Seleccionamos 6 elementos al azar de la generacion anterior y los 4
      int indicesAleatorios[6];
      int seleccionados = 0;
      int iterador = 0;

      while (seleccionados < 6) {
        int indiceAleatorio = aleatorioEnRango(0, 9);
        bool exists = std::find(std::begin(indicesAleatorios), std::end(indicesAleatorios), indiceAleatorio) != std::end(indicesAleatorios);
        if (!exists) {
          indicesAleatorios[iterador] = indiceAleatorio;
          iterador++;
          seleccionados++;
        }
      }
      
      for (int i = 0; i < 6; i++) {
        int num2 = 1 + rand() % (10 - 1);
        binarios2[k][i] = binarios1[NUMERO_DE_CADENAS / 2 - 1][indicesAleatorios[i]].substr(0, num2) + binarios1[NUMERO_DE_CADENAS / 2 - 1][indicesAleatorios[5-i]].substr(num2, 9);
        binariosCopy2[k][i] = binarios2[k][i];
        ceros[i] = countOccurrences(auxiliar, binarios2[k][i]);
      }

      int indicesNoAleatorios[4];
      int noSeleccionados = 0;
      int iterador2 = 0;
      // Ingresar los 4 elementos que no se seleccionaron
      for (int j = 0; j < 10; j++) {
        bool exists = std::find(std::begin(indicesAleatorios), std::end(indicesAleatorios), j) != std::end(indicesAleatorios);
        if (!exists) {
          indicesNoAleatorios[iterador2] = j;
          iterador2++;
          noSeleccionados++;
        }
      }

      for (int i = 6; i < 10; i++) {
        binarios2[k][i] = binarios1[NUMERO_DE_CADENAS / 2 - 1][indicesNoAleatorios[i-6]];
        binariosCopy2[k][i] = binarios2[k][i];
        ceros[i] = countOccurrences(auxiliar, binarios2[k][i]);
      }

    } else {
      // Seleccionamos 6 elementos al azar de la generacion anterior y los 4
      int indicesAleatorios[6];
      int seleccionados = 0;
      int iterador = 0;

      while (seleccionados < 6) {
        int indiceAleatorio = aleatorioEnRango(0, 9);
        bool exists = std::find(std::begin(indicesAleatorios), std::end(indicesAleatorios), indiceAleatorio) != std::end(indicesAleatorios);
        if (!exists) {
          indicesAleatorios[iterador] = indiceAleatorio;
          iterador++;
          seleccionados++;
        }
      }
      
      for (int i = 0; i < 6; i++) {
        int num2 = 1 + rand() % (10 - 1);
        binarios2[k][i] = binarios2[k-1][indicesAleatorios[i]].substr(0, num2) + binarios2[k-1][indicesAleatorios[5-i]].substr(num2, 9);
        binariosCopy2[k][i] = binarios2[k][i];
        ceros[i] = countOccurrences(auxiliar, binarios2[k][i]);
      }

      int indicesNoAleatorios[4];
      int noSeleccionados = 0;
      int iterador2 = 0;
      // Ingresar los 4 elementos que no se seleccionaron
      for (int j = 0; j < 10; j++) {
        bool exists = std::find(std::begin(indicesAleatorios), std::end(indicesAleatorios), j) != std::end(indicesAleatorios);
        if (!exists) {
          indicesNoAleatorios[iterador2] = j;
          iterador2++;
          noSeleccionados++;
        }
      }

      for (int i = 6; i < 10; i++) {
        binarios2[k][i] = binarios2[k-1][indicesNoAleatorios[i-6]];
        binariosCopy2[k][i] = binarios2[k][i];
        ceros[i] = countOccurrences(auxiliar, binarios2[k][i]);
      }

    }

    // Ordenando
    for (int i = 0; i < 10; i++) {
      // Obtenemos la cadena con mas 0's
      int max_ceros = largestAmountCeros(ceros, 10);
      // Obtenemos el indice de la cadena con mas 0's
      int index = 0;
      for (int j = 0; j < 10; j++) {
        if (ceros[j] == max_ceros) {
          index = j;
          break;
        }
      }
      // Guardamos la cadena con mas 0's en el arreglo original
      // usando el indice de la cadena con mas 0's y el arreglo de copias
      binarios2[k][i] = binariosCopy2[k][index];
      ceros[index] = -1;
    }

    // Imprimimos la generacion
    for (int i = 0; i < 10; i++) {
      cout << i + 1 << ":" << binarios2[k][i] << ":";
      //aqui cuento la cantidad de 0 que hay
      cout << countOccurrences(auxiliar, binarios2[k][i]) << endl;
    }

    // Si algun integrante de la generacion llega 10 ceros se detiene el programa
    for (int i = 0; i < 10; i++) {
      if (countOccurrences(auxiliar, binarios2[k][i]) == LONGITUD_DESEADA) {
        cout << "Se encontro la cadena con 10 ceros en la generacion " << k + 1 << endl;
        return 0;
      }
    }

    // Imprimimos la suma de los 0's de la generacion
    int suma = 0;
    for (int i = 0; i < 10; i++) {
      suma += countOccurrences(auxiliar, binarios2[k][i]);
    }
    cout << "Suma de 0's: " << suma << endl;
  }
		
  return 0;

}