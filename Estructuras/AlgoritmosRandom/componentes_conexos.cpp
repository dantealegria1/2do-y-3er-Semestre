#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
#include <stack>
#include <set>
#include <map>
#include <string>
#include <cstring>

using namespace std;

int ComponentesConexos(matriz)
{
    int n = matriz.size();
    int m = matriz[0].size();
    int componentes = 0;
    vector<vector<bool>> visitados(n, vector<bool>(m, false));
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (matriz[i][j] == 1 && !visitados[i][j])
            {
                componentes++;
                DFS(matriz, visitados, i, j);
            }
        }
    }
    return componentes;
}

void DFS(matriz, visitados, i, j)
{
    int n = matriz.size();
    int m = matriz[0].size();
    visitados[i][j] = true;
    if (i > 0 && matriz[i - 1][j] == 1 && !visitados[i - 1][j])
        DFS(matriz, visitados, i - 1, j);
    if (i < n - 1 && matriz[i + 1][j] == 1 && !visitados[i + 1][j])
        DFS(matriz, visitados, i + 1, j);
    if (j > 0 && matriz[i][j - 1] == 1 && !visitados[i][j - 1])
        DFS(matriz, visitados, i, j - 1);
    if (j < m - 1 && matriz[i][j + 1] == 1 && !visitados[i][j + 1])
        DFS(matriz, visitados, i, j + 1);
}

int main()
{
    int n, m;
    cin >> n >> m;
    vector<vector<int>> matriz(n, vector<int>(m));
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> matriz[i][j];
        }
    }
    cout << ComponentesConexos(matriz) << endl;
    return 0;
}