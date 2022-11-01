//encontrar el camino mas corto de un nodo a otro
//y el coste minimo de alcanzar el nodo final 'b'
#include <iostream>
#include <iomanip>
using namespace std;
void dijkstra(int N, int **A, int a, int b)
{
    int i, j, k, min, *C, *P, *S;
    C = new int[N];
    P = new int[N];
    S = new int[N];
    for (i = 0; i < N; i++)
    {
        C[i] = A[a][i];
        P[i] = a;
        S[i] = 0;
    }
    S[a] = 1;
    for (i = 0; i < N; i++)
    {
        min = 9999;
        for (j = 0; j < N; j++)
        {
            if (S[j] == 0 && C[j] < min)
            {
                min = C[j];
                k = j;
            }
        }
        S[k] = 1;
        for (j = 0; j < N; j++)
        {
            if (S[j] == 0 && C[k] + A[k][j] < C[j])
            {
                C[j] = C[k] + A[k][j];
                P[j] = k;
            }
        }
    }
    cout << "Coste minimo: " << C[b] << endl;
    cout << "Camino: ";
    i = b;
    while (i != a)
    {
        cout << i << " <- ";
        i = P[i];
    }
    cout << a << endl;
    delete[] C;
    delete[] P;
    delete[] S;
}
int main()
{
    int numNodos = 8;
    int i, j;
    int **A;
    A = new int *[numNodos];
    for (i = 0; i < numNodos; i++)
        A[i] = new int[numNodos];
    /* inicializar la matriz de adyacencia */
    for (i = 0; i < numNodos; i++)
        for (j = 0; j < numNodos; j++)
            A[i][j] = 0;
    /* inicializar la matriz de adyacencia */
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
    for (i = 0; i < 8; i++)
    {
        for (j = 0; j < 8; j++)
            cout << setw(2) << A[i][j] << "  ";
        cout << endl;
    }
    cout << endl;
    /* calcular dijkstra a partir del nodo 0, a partir del nofo 7 */
    dijkstra(numNodos, A, 0, 7);
    /* liberar memoria */
    delete[] A;
    for (i = 0; i < numNodos; i++)
        delete A[i];
    return 0;

}

