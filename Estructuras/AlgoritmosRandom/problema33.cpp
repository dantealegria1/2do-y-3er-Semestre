#include <stdio.h>
#include <stdlib.h>
 using namespace std;
// Un nodo de lista enlazada
struct Node
{
    int data;
    struct Node* next;
};
 
// Función auxiliar para imprimir una lista enlazada dada
void printList(struct Node* head)
{
    struct Node* ptr = head;
    while (ptr)
    {
        printf("%d —> ", ptr->data);
        ptr = ptr->next;
    }
 
    printf("NULL\n");
}
 
// Función auxiliar para insertar un nuevo nodo al principio de la lista enlazada
void push(struct Node** head, int data)
{
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = *head;
 
    *head = newNode;
}
 
// La función toma el nodo del frente de la fuente y lo mueve
// al frente del destino
void moveNode(struct Node** destRef, struct Node** sourceRef)
{
    // si la lista de fuentes está vacía, no haga nada
    if (*sourceRef == NULL) {
        return;
    }
 
    struct Node* newNode = *sourceRef;  // el nodo fuente frontal
    *sourceRef = (*sourceRef)->next;    // avanzar el puntero de origen
    newNode->next = *destRef;           // vincula el antiguo destino con el nuevo nodo
    *destRef = newNode;                 // mover dest para apuntar al nuevo nodo
}
 
// Función para fusionar dos listas ordenadas desde el final
struct Node* reverseMerge(struct Node* a, struct Node* b)
{
    struct Node* result = NULL;
 
    while (a && b)
    {
        if (a->data < b->data) {
            moveNode(&result, &a);
        }
        else {
            moveNode(&result, &b);
        }
    }
 
    while (b) {
        moveNode(&result, &b);
    }
 
    while (a) {
        moveNode(&result, &a);
    }
 
    return result;
}
 
int main(void)
{
	int largo;
	int j;
		cout<<"dame el largo de la lista"<<endl;
		cin>>largo
    struct Node *a = NULL, *b = NULL;
    for (int i = 0; i<largo; i++) {
    	cout<<"primer nodo"<<endl;
    	cin>>j
        push(&a, j);
    }
 
    for (int i = 9; i >= 1; i = i - 2) {
        push(&b, i);
    }
 
    // imprime ambas listas
    printf("First List: ");
    printList(a);
 
    printf("Second List: ");
    printList(b);
 
    struct Node* head = reverseMerge(a, b);
 
    printf("\nAfter Merge: ");
    printList(head);
 
    return 0;
}
