	/*
	Given the head of a singly linked list, reverse the list, and return the reversed list
	using nodes
	*/
	using namespace std;
	#include <iostream>
	class Nodo
	{
		public:
			int dato;
			Nodo* ant;
			Nodo* sig;
			
		Nodo* crear(Nodo* cab, int d)
	    {
	        Nodo* nuevo = new Nodo();
	        nuevo->dato = d;
	        nuevo->ant = NULL;
	        nuevo->sig = NULL;
	        cab = nuevo;
	        return cab;
	    }
	    Nodo* insertar(Nodo* cab, int d)
	    {
	        Nodo* nuevo = new Nodo();
	        nuevo->dato = d;
	        nuevo->ant = NULL;
	        nuevo->sig = cab;
	        cab->ant = nuevo;
	        cab = nuevo;
	        return cab;
	    }
	    void  mostrar(Nodo* cab)
	    {
	        Nodo* aux = cab;
	        while(aux != NULL)
	        {
	            cout << aux->dato <<endl;
	            aux = aux->sig;
	        }
	    }
	    void mostrar2(Nodo* cab)
	    {
	        Nodo* aux = cab;
	        while(aux->sig != NULL)
	        {
	            aux = aux->sig;
	        }
	        while(aux != NULL)
	        {
	            cout << aux->dato <<endl;
	            aux = aux->ant;
	        }
	    }
	    void invertir(Nodo* cab)
	    {
	        Nodo* aux = cab;
	        Nodo* aux2 = cab;
	        while(aux->sig != NULL)
	        {
	            aux = aux->sig;
	        }
	        while(aux != NULL)
	        {
	            aux2->dato = aux->dato;
	            aux = aux->ant;
	            aux2 = aux2->sig;
	        }
	    }
	};
	
	
	int main()
	{
	    Nodo* cab = NULL;
	    Nodo* nuevo = new Nodo();
	    cab = nuevo->crear(cab, 5);
	    cab = nuevo->insertar(cab, 4);
	    cab = nuevo->insertar(cab, 3);
	    cab = nuevo->insertar(cab, 2);
	    cab = nuevo->insertar(cab, 1);
	    cout<<"datos de la lista"<<endl;
	    nuevo->mostrar(cab);
	    cout<<"Datos de la lista invertidos"<<endl;
	    nuevo->mostrar2(cab);
	
	    return 0;
	}
