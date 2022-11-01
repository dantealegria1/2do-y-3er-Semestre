#include <iostream>
#include <iomanip>
#include <list>
 
/* Definiendo la estructura etiqueta de nodo. Sus campos incluyen
 * el número de nodo, el coste total del nodo, y su precedente. */
struct label {
   int nro;	/* numero del nodo */
   int prev;	/* nodo precedente (-1 para el nodo inicial )*/
   int peso;	/* peso o coste total de la trayectoria que
				 * conduce al nodo, i.e., el coste total desde
				 * el nodo inicial hasta el actual. Un valor
				 * de -1 denota el infinito */
   int marca;	/* si el nodo ha sido marcado o no */
};
typedef struct label label_t;
 
using namespace std;
 
void dijkstra( int, int **, int, int );
 
int main () {
 
   /* cantidad total de nodos */
   int numNodos = 8;
 
   /* Definiendo la matriz de adyacencia */
   int i, j, **A;
 
   if ( ( A = new int*[numNodos] ) == NULL ) return 1;
   for ( i = 0; i < numNodos; i++ )
      if ( ( A[i] = new int[numNodos] ) == NULL ) return 1;
 
   for ( i = 0; i < 8; i++ )
      for ( j = 0; j < 8; j++ )
         A[i][j] = 0;
 
   /* por simplicidad, completamos solo los pares de nodos conectados */
   A[0][1] = 16;
   A[0][2] = 10;
   A[0][3] = 5;
 
   A[1][0] = 16;
   A[1][2] = 2;
   A[1][5] = 4;
   A[1][6] = 6;
 
   A[2][0] = 10;
   A[2][1] = 2;
   A[2][3] = 4;
   A[2][4] = 10;
   A[2][5] = 12;
 
   A[3][0] = 5;
   A[3][2] = 4;
   A[3][4] = 15;
 
   A[4][2] = 10;
   A[4][3] = 15;
   A[4][5] = 3;
   A[4][7] = 5;
 
   A[5][1] = 4;
   A[5][2] = 12;
   A[5][4] = 3;
   A[5][6] = 8;
   A[5][7] = 16;
 
   A[6][1] = 6;
   A[6][5] = 8;
   A[6][7] = 7;
 
   A[7][4] = 5;
   A[7][5] = 16;
   A[7][6] = 7;
 
   /* Imprimir la matriz de adyacencia */
   cout << "Matriz de adyacencia:" << endl << endl;
   for ( i = 0; i < 8; i++ ) {
      for ( j = 0; j < 8; j++ )
         cout << setw(2) << A[i][j] << "  ";
      cout << endl;
   }
   cout << endl;
 
   /* calcular dijkstra a partir del nodo 0, a partir del nofo 7 */
   dijkstra( numNodos, A, 0, 7 );
 
   /* liberar memoria */
   delete [] A;
   for ( i = 0; i < numNodos; i++ )
      delete A[i];
 
   return 0;
}
 
/* Calcula el coste minimo de alcanzar un nodo final 'b'
 * grafo no dirigido con N nodos, a partir del nodo inicial 'a',
 * dada su matriz de adyacencia A */
void dijkstra( int N, int **A, int a, int b ) {
 
   label_t *Labels;
   int i, i0, j, peso;
   int *ruta;		/* array de nodos de la ruta minima */
 
   /* Crea din'amicamente el arreglo de etiquetas de nodo */
   if ( ( Labels = new label_t[N] ) == NULL ) return;
 
   /* nodo inicial 'a' entre 0 y N - 1 */
   if ( a < 0 || a > N - 1 ) return;
   /* nodo final 'a' entre 0 y N - 1 */
   if ( b < 0 || b > N - 1 ) return;
 
   /* inicializar las etiquetas de nodo */
   for ( i = 0; i < N; i++ ) {
      Labels[i].nro = i;
      if ( i != a ) {
         Labels[i].prev = -1;	/* a'un no se ha definido predecesor */
         Labels[i].peso = -1;	/* infinito */
         Labels[i].marca = 0;
      }
      else {
         Labels[i].prev = -1;	/* a'un no se ha definido predecesor */
         Labels[i].peso = 0;		/* coste del nodo inicial a s'i mismo es cero */
         Labels[i].marca = 0;
      }
   }
 
   /* continuamos este ciclo mientras existan nodos no marcados */
   while ( 1 ) {
      /* busca entre todos los nodos no marcados el de menor peso, descartando los
       * de peso infinito (-1) */
      peso = -1;
      i0 = -1;
      for ( i = 0; i < N; i++ ) {
         if ( Labels[i].marca == 0 && Labels[i].peso >= 0 )
            if ( peso == -1 ) {
               peso = Labels[i].peso;
               i0 = i;
            }
            else if ( Labels[i].peso <= peso ) {
               peso = Labels[i].peso;
               i0 = i;
            }
      }
      if ( i0 == -1 ) {	/* termina si no encuentra */
         cout << "Ya no quedan nodos por analizar." << endl;
         break;
      }
 
      cout << "*** Analizando nodo " << i0 << " ***" << endl;
 
      /* actualiza el peso de todos los sucesores (si los hay) del nodo
       * encontrado y luego se~nala dicho nodo como marcado */
      for ( i = 0; i < N; i++ ) {
         if ( A[i0][i] > 0 ) {
            /* si el coste acumulado sumado al coste del enlace del nodo i0 al nodo i
             * es menor al coste del nodo i (o si el coste del nodo i es infinito),
             * debemos actualizar */
            if ( Labels[i].peso == -1 || Labels[i0].peso + A[i0][i] < Labels[i].peso ) {
               if ( Labels[i0].peso + A[i0][i] < Labels[i].peso )
                  cout << "   [ mejorando coste de nodo " << i << " ]" << endl;
               Labels[i].peso = Labels[i0].peso + A[i0][i];
               Labels[i].prev = i0;
               cout << "   coste de nodo " << i << " desde nodo " << i0 << ": " << Labels[i].peso << endl;
            }
         }
      }
      Labels[i0].marca = 1;
      cout << "   [ nodo " << i0 << " marcado ]" << endl;
 
      /* para verificar, imprime los costes calculados hasta el momento */
      for ( i = 0; i < N; i++ ) {
         cout << i << ": [";
         if ( Labels[i].peso == -1 ) cout << "Inf";
         else cout << Labels[i].peso;
         cout << ", " << Labels[i].prev ;
         if ( Labels[i].marca == 1 ) cout <<  ", x]" << endl;
         else cout << "]" << endl;
      }
      cout << endl;
 
      /* pausa (opcional) */
      cout << "presione ENTER para continuar ...";
      cin.get();
   }
 
   /* Ruta desde el nodo 'a' hasta el nodo 'b' */
   int longitud = 2;
   i = b;
   while ( ( i = Labels[i].prev ) != a ) longitud++;	/* primero estimamos la longitud de la ruta */
   if ( ( ruta = new int[longitud] ) == NULL ) return;
 
   ruta[longitud - 1] = b;		/* luego rellenamos */
   i = b;
   j = 0;
   for ( j = 1; j < longitud; j++ ) {
      i = Labels[i].prev;
      ruta[longitud - j - 1] = i;
   }
 
   cout << "================================================================" << endl;
   cout << endl << "Ruta mas economica entre nodo " << a << " y nodo " << b << ":" << endl << endl;
   for ( i = 0; i < longitud; i++ ) {
      cout << ruta[i];
      if ( i < longitud - 1 ) cout << " - ";
   }
   cout << endl << endl << "Costo total: " << Labels[b].peso << endl << endl;
 
   delete ruta;
   delete [] Labels;
}