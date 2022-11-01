//Componentes conexos de un grafo
//Dante Alejandro Alegria Romero-265853
//Andrea Margarita Balandran Felix-331696

//liberias
#include <iostream>
using namespace std;
int main()
{
    //variables     //definimos la matriz de adyacencia
    //hay que calar si sirve con matrices mas grandes
    int m[5][5] = {{0,0,0,0,0},
                   {1,0,1,0,0},
                   {0,0,0,1,0},
                   {0,0,0,0,1},
                   {0,0,0,1,0}};
    
    //se llena la diagonal principal con 1
    //si es necesario ya que i/i es que vaya en diagonal
    for(int i=0;i<5;i++)
        m[i][i] = 1;
    
    //imprimimos la matriz actual
    cout<<"-------------------------------------------------------"<<endl;
    cout << "Matriz de adyacencia con la diagonal principal en 1" << endl;
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<5;j++)
            cout << m[i][j] << " ";
        cout << endl;
    }

    //Calculamos la matriz de caminos
    for(int i=0; i<5;i++)
    {
        for(int j=0;j<5;j++)
        {
            //k es como nuestro auxiliar
            for(int k=0;k<5;k++)
            {
                //Aqui comparamos que si i/k y i/k son 1 pues  j/k va a ser 1
                if(m[j][i] == 1 && m[i][k] == 1)
                    m[j][k] = 1;
            }
        }
    }

    //imprimimos la matriz de caminos
    cout<<"-------------------"<<endl;
    cout << "Matriz de caminos" << endl;
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<5;j++)
            cout << m[i][j] << " ";
        cout << endl;
    }

    //Ordenamos las filas segun el numero de 1's (de mayor a menor)
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<4;j++)
        {
            int cont1 = 0;
            int cont2 = 0;
            //qui si te fijas no tiene mucha complicacion
            //solamente va contando los 1 que tiene
            for(int k=0;k<5;k++)
            {
                if(m[j][k] == 1)
                    cont1++;
                if(m[j+1][k] == 1)
                    cont2++;
            }
            if(cont1 < cont2)
            {
                for(int k=0;k<5;k++)
                {
                    //aqui solamente agregamos un auxiliar para poder mover las filas
                    //mas sencillo
                    int aux = m[j][k];
                    m[j][k] = m[j+1][k];
                    m[j+1][k] = aux;
                }
            }
        }
    }
    //imprimimos la matriz ordenada
    cout<<"-------------------"<<endl;
    cout << "Matriz ordenada" << endl;
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<5;j++)
            cout << m[i][j] << " ";
        cout << endl;
    }

    //paso : Ordenamos las columnas segun el orden de los 1´s de la fila 
    for(int i=0; i<5;i++)
    {
        for(int j=0;j<4;j++)
        {
            //encontramos el primer 1
             if(m[i][j] == 1)
             {
                //que hacemos aqui, pues preguntamos si a la derecha del primer 1 
                //hay un 0, si si hay pues lo movemos a la derecha, si no pues no jaja
                //y la matriz donde anteriormente estaba ese 1 lo convertimos a 0
                if(m[i][j+1]==0)
                {
                    m[i][j+1] = 1;
                    m[i][j] = 0;
                }
             }
        }
    }
     
     //imprimimos la matriz ordenada
    cout<<"-------------------"<<endl;
    cout << "Matriz ordenada" << endl;
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<5;j++)
            cout << m[i][j] << " ";
        cout << endl;
    }
    //funciona bien hasta aqui
//---------------------------------------------------------------------------------------------//
    //paso : Contamos los componentes conexos
    //crear ccomponente conexo en base a la diagonal principal
    //si es 1 verificar si hay un 1 en la fila y columna
    //si es asi, entonces es un componente conexo
    //si no, entnces no es conexo
    for(int i=0;i<5;i++)
    {
        if(m[i][i] == 1)
        {
            for(int j=0;j<5;j++)
            {
                /* Checking if the element in the matrix is 1 and if the element in the matrix is 1. */
                if(m[i][j] == 1 && m[j][i] == 1)
                {
                    if(m[i-1][j]==1 )
                    {
                        if(m[i][j+1]==1)
                        {
                        cout << "Componente conexo: {" << i << "," << j << "} ";
                        cout<<"{"<<i-1<<","<<j<<"}"<<" ";
                        cout<<"{"<<i-1<<","<<j+1<<"}"<<" ";
                        cout<<"{"<<i<<","<<j+1<<"}"<<endl;

                        }
                    }
                    if(m[i-1][i]!=1 || m[i][i+1]!=1)
                    {
                        cout << "Componente conexo: {" << i << "," << j << "}"<<endl;
                    }
                }
            }
        }
    }
    cout<<"-------------------"<<endl;
    cout << "Numero de componentes conexos: " << "a" << endl;
    cout<<"-------------------"<<endl;

}
