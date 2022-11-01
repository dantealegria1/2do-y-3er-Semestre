#include <iostream>
using namespace std;
int main()
{
        // ------------------
    // Vector dinamico
    // ------------------
    
    //Variables
    int cant, *listaAd;

    
    //Capturar cantidad de nodos
    cout<<"Dame la cantidad de nodos o vertices: ";
    cin>>cant;
    
    //Lista Adyacencia con tamaño dado por el usuario

    listaAd = new int[cant];
    

    
    //Captura vector dinamico
    for(int i=0; i<cant; i++){
        cout<<"Ingrese valor "<<i+1<<": ";
        cin>>listaAd[i];
    }

    //Imprime vector dinamico
    for(int i=0; i<cant; i++){
        cout<<"Elelemto "<<i+1<<" tiene: "<<listaAd[i]<<endl;
    }
    //Borrar lista de memoria
    delete [] listaAd;
    

}