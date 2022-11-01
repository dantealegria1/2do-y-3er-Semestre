#include <iostream>
class Nodo {
    friend class Lista;
    private:
        int valor;
        Nodo * sig;
    public:
        Nodo(int v);
        ~Nodo();
};
class Lista {
    private:
        Nodo * primero;
        Nodo * ultimo;
        int elementos;
    public:
        Lista();
        ~Lista();
        void addNodo(Nodo * nodo);
        Lista * concatenar(Lista * l);
};

Lista * Lista::concatenar(Lista * l) {
    if (l == NULL) throw "Error: lista nula";

    Lista * lista = new Lista();

    Nodo * nodo = this->primero;
    while (nodo != NULL) {
        lista->add(nodo);
        nodo = nodo->sig;
    }

    nodo = l->primero;
    while (nodo != NULL) {
        lista->add(nodo);
        nodo = nodo->sig;
    }

    return lista;
}
int main()
{
	cout<<lista;
}
