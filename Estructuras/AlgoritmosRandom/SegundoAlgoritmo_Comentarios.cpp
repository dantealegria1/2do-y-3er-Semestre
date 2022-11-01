/**
 * Algoritmo de cruzamiento de bits
 * 
 * Inteligencia Artificial UAA
 * 
 * Autores:
 * - Dante Alejandro alegrÃ­a Romero      
 * - Diego Alberto Aranda                        
 * - Andrea Margarita Balandran Felix  
 * - MarÃ­a Yoselin GarcÃ­a Medina                
 * - Moreno SÃ¡nchez Diego Emilio @YeyoM        
 * 
 * Fecha: 26/09/2022
 * 
 * DescripciÃ³n:
 * 
*/

// Librerias
#include <iostream>
#include <cstdlib>
#include <string>
#include <vector>
#include <time.h>
#include <stdio.h>
//Es una libreria que nos da acceso a la API del sistema operativo POSIX
#include <unistd.h>
#include <cstring>
using namespace std;

/**
 * Las funciones utilizadas en este programa son las mismas utilizadas en el primer algoritmo
*/
size_t countOccurrences(char c, string &str)
{
	/** 
	* inicializamos la variable en 0
	* @param count es un tipo de dato que devuelve el tamaño de un objeto
	*/
	size_t count = 0;

	//recorremos el string
    for (char i : str)
        if (i == c)
            count++;

	//devolvemos el valor de la variable
    return count;
}

/**
 * Regresa un numero entre el maximo y minimo
 * 
 * @param minimo El numero minimo que quieres generar
 * @param maximo El numero maximo que quieres generar
 * 
 * @return Un numero entre el minimo y el maximo
 * Esta funcion sirve para ayudarnos a generar los valores aleatorios
 */
int aleatorio_en_rango(int minimo, int maximo) {
    return minimo + rand() / (RAND_MAX / (maximo - minimo + 1) + 1);
}


/**
 * Llena el individuo con caracteres aleatorio entre el 0 y 1
 * 
 * @param longitud La longitud del individuo
 * @param destino El string donde se guardan los valores aleatorios generados
 * @param muestra El banco de valores que se usaran para generar los valores aleatorios
 * @param indiceAleatorio El indice aleatorio que se usara para generar los valores aleatorios
 */
int cadena_aleatoria(int longitud, char *destino) {
    char muestra[] = "01";
	//recorremos nuestro string
    for (int x = 0; x < longitud; x++) {	
      //esto toma un valor entre el maximo y el minimo
	    int indiceAleatorio = aleatorio_en_rango(0, (int) strlen(muestra) - 1);
	  //se le asigna el valor aleatorio a nuestro string
        destino[x] = muestra[indiceAleatorio];
    }
}

/**
 * Funcion para obtener el numero mayor de ceros en un arreglo
 * @param arr El arreglo de nÃºmeros
 * @param n El numero de elementos en el arreglo
 * @return El numero mayor de ceros en el arreglo
*/
int largestAmountCeros(int arr[], int n) {
  int i;
  int max = arr[0];
  for (i = 1; i < n; i++) {
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
    * @param destino Definiendo el arreglo de chars para cuando generamos las cadenas
    * @param ceros Definiendo el arreglo de numeros para guardar el numero de ceros en cada cadena. 
    */
  string binarios1[(NUMERO_DE_CADENAS / 2) + 1][(NUMERO_DE_CADENAS / 2) + 1];
  string binarios2[(NUMERO_DE_CADENAS / 2) + 1][(NUMERO_DE_CADENAS / 2) + 1];
  string binariosCopy1[(NUMERO_DE_CADENAS / 2) + 1][(NUMERO_DE_CADENAS / 2) + 1];
  char destino[LONGITUD_DESEADA + 1] = "";
  int ceros[LONGITUD_DESEADA + 1];

  // main loop 1
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

    /**
    * Aqui establecemos que, si k que es nuestra variable que nos va ayudar a iterar
    * a los individuos es igual a 0, que se refeire a nuestro valor inicial
    * va a generar los individuos aleatorios
    * 
    * Primero generamos a los 10 individuos de la generacion 1 
    * Guardamos la cadena en el arreglo, y lo guardamos a su vez
    * en la cadena de copias, y contamos la cantidad de 0
    */
    if (k == 0) {
      for (int i = 0; i < NUMERO_DE_CADENAS; i++) {
        cadenaAleatoria(LONGITUD_DESEADA, destino);
        binarios1[k][i] = destino;
        binariosCopy1[k][i] = binarios1[k][i];
        ceros[i] = countOccurrences(auxiliar, binarios1[k][i]);
      }
    /**
    * Si k es diferente de 0, que es nuestro valor inicial, significa que
    * ya no neesitamos aleatorizar nuestros valores
    */
    } else {
      for (int i = 0; i < 10; i++) {
 
    	  int num2 = 1 + rand() % (10 - 1);
        binarios1[k][i] = binarios1[k-1][i].substr(0, num2) + binarios1[k-1][9-i].substr(num2, 9);
        binariosCopy1[k][i] = binarios1[k][i];
        ceros[i] = countOccurrences(auxiliar, binarios1[k][i]);
      }
    }

    /**
     * @param i es la variable que nos ayuda a recorrer el arreglo de cadenas
     * @param max_ceros obteniendo el mayor nummero de 0 en el arreglo
     * @param index sirve como auxiliar para guardar el indice del mayor numero de ceros
     * 
     * Para ordenar primero obtenemos la cadena con mayor cantidad de ceros
     * y obtenemos el indice de la cadena con mayor cantidad de ceros
     * 
     * Buscamos la cadena con mas 0 en el arreglo orginal
     * usando como indice de la cadena con mas 0 y el arreglo copia
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
      binarios1[k][i] = binariosCopy1[k][index];
      ceros[index] = -1;
    }

    /**
     * @param i es la variable que nos ayuda a recorrer el arreglo de cadenas
     * 
     * Imprimimos la generacion, y contamos la cantidad de 0 que hay
    */
    for (int i = 0; i < 10; i++) {
      cout << i << ":" << binarios1[k][i] << ":";
      cout << countOccurrences(auxiliar, binarios1[k][i]) << endl;
    }

    // Imprimimos la suma de los 0's de la generacion
    int suma = 0;
    for (int i = 0; i < 10; i++) {
      suma += countOccurrences(auxiliar, binarios1[k][i]);
    }
    cout << "Suma de 0's: " << suma << endl;
  }

    /**
     * Se repite el algoritmo para conseguir las 250 cadenas, debido a que
     * al querer correr el algoritmo con 250 cadenas, el programa no llega mas alla
     * de las 150 generaciones, asi que decidimos correrlo 2 veces con un numero
     * que aseguramos llegar.
    */
  for (int k = 0; k < NUMERO_DE_CADENAS / 2; k++) {

    cout << "--------------------------" << endl;
	  cout << "Generacion " << NUMERO_DE_CADENAS / 2 + k + 1 << endl;
	  cout << "--------------------------" << endl;

    if (k == 0) {
      for (int i = 0; i < 10; i++) {
    	  int num2 = 1 + rand() % (10 - 1);
        string aux = binarios1[NUMERO_DE_CADENAS / 2 - 1][i].substr(0, num2) + binarios1[NUMERO_DE_CADENAS / 2 - 1][9-i].substr(num2, 9);
        binarios2[k][i] = aux;
        binariosCopy1[k][i] = aux;
        ceros[i] = countOccurrences(auxiliar, binarios2[k][i]);
      }
    } else {
      for (int i = 0; i < 10; i++) {
    	  int num2 = 1 + rand() % (10 - 1);
        binarios2[k][i] = binarios2[k-1][i].substr(0, num2) + binarios2[k-1][9-i].substr(num2, 9);
        binariosCopy1[k][i] = binarios2[k][i];
        ceros[i] = countOccurrences(auxiliar, binarios2[k][i]);
      }
    }

    for (int i = 0; i < 10; i++) {
      int max_ceros = largestAmountCeros(ceros, 10);
      int index = 0;
      for (int j = 0; j < 10; j++) {
        if (ceros[j] == max_ceros) {
          index = j;
          break;
        }
      }
      binarios2[k][i] = binariosCopy1[k][index];
      ceros[index] = -1;
    }

    for (int i = 0; i < 10; i++) {
      cout << i << ":" << binarios2[k][i] << ":";
      cout << countOccurrences(auxiliar, binarios2[k][i]) << endl;
    }

    int suma = 0;
    for (int i = 0; i < 10; i++) {
      suma += countOccurrences(auxiliar, binarios2[k][i]);
    }
    cout << "Suma de 0's: " << suma << endl;

  }
		
  return 0;

}