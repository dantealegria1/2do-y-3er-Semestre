#include <iostream.h>     // Árbol binario con búsqueda

struct base {             // Estructura a utilizar
    char let;
    struct base* izq;
    struct base* der;
} *rz, * aptr;

char previo, ant;         // globales auxiliares
int incluir(char letra, struct base* puntero);
void inorden(struct base* puntero);
char acepta(void);       // aceptar datos del teclado
void busca(char key, struct base* puntero);   // buscar
void nodo(struct base* puntero);    // mostrar resultado de busqueda

void main(void) {         // ==========================
    char c;
    if ((rz = new(base)) == NULL) {   // crear nodo raíz
        cout << "NO queda memoria" << endl; return 1;
    }
    rz->let = '\\';                   // carácter en el nodo raíz
    rz->izq = rz->der = NULL;
    while ((c = acepta()) != 27) {   // Bucle principal
        if (c == '?') { previo = c; continue; }
        else if (previo == '?') {
            previo = c;
            aptr = NULL;
            busca(c, rz);       // buscar caracter en el arbol
            nodo(aptr);         // mostrar resultado de la busqueda
            continue;
        }
        else if (incluir(c, rz)) break;
        inorden(rz);
    }
}

char acepta(void) {      // Introducir datos por teclado
    char c;
    cout << "\n Pulse un caracter + [CR] ";
    while (1) {
        c = getchar();
        if (c == 10) continue;    // 10 == New Line
        if (c >= 65 && c <= 91) return c;
        if (c >= 97 && c <= 123) return c;
        if (c == 27 || c == '?') return c;
        cout << "\a";
    }
}

int incluir(char letr, struct base* ptr) {    // añadir elemento
    if (letr == ptr->let) return 0;             // El carácter ya existe
    if (letr < ptr->let) {
        if (ptr->izq == NULL) {                    // enlace libre: incluir
            aptr = (struct base*)malloc(sizeof(base));
            if (aptr == NULL) { cout << "Memoria agotada" << endl; return 1; }
            aptr->let = letr;
            aptr->izq = aptr->der = NULL;
            ptr->izq = aptr;
            return 0;
        }

        if (incluir(letr, ptr->izq)) return 1;    // falla la inserción

    }
    if (letr > ptr->let) {
        if (ptr->der == NULL) {                    // enlace libre: incluir
            aptr = (struct base*)malloc(sizeof(base));
            if (aptr == NULL) { cout << "Memoria agotada" << endl; return 1; }
            aptr->let = letr;
            aptr->izq = aptr->der = NULL;
            ptr->der = aptr;
            return 0;
        }
        if (incluir(letr, ptr->der)) return 1;    // falla la inserción
    }
    return 0;
}

void inorden(struct base* ptr) {   // Recorrer árbol
    if (ptr == NULL) return;
    inorden(ptr->izq);
    cout << " - " << ptr->let;
    inorden(ptr->der);
}

void busca(char key, struct base* ptr) {      // buscar key
    if (key == ptr->let) { aptr = ptr; return; }
    ant = ptr->let;
    if (key < ptr->let) {            // debe estar en rama izquierda
        if (ptr->izq == NULL) return;   // no existe
        busca(key, ptr->izq);           // seguir búsqueda
    }
    if (key > ptr->let) {             // debe estar en rama derecha
        if (ptr->der == NULL) return;   // no existe
        busca(key, ptr->der);           // seguir búsqueda
    }
    return;
}

void nodo(struct base* ptr) {       // mostrar resultado
    if (ptr == NULL) { cout << "No encontrado\a" << endl; return; }
    char izq = '#', der = '#', key = ptr->let;
    if (ptr->izq != NULL) izq = ptr->izq->let;  // letra nodo izq.
    if (ptr->der != NULL) der = ptr->der->let;  // letra nodo der.
    cout << "\n " << ant << endl;
    cout << " |" << endl;
    cout << " " << key << endl;
    cout << "/ \\" << endl;
    cout << izq << " " << der << endl;
}