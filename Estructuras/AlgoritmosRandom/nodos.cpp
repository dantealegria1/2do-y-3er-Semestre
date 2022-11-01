public class Test18 {
    private static class Node {
        int data;
        Node next;
        Node sibling;
 
        Node(int data) {
            this.data = data;
        }
    }
 
    private static Node complexListNode(Node head) {
        if (head == null)
            return null;
        // El primer paso es copiar el nodo y conectarse con el siguiente
        cloneNodes(head);
        // El segundo paso es copiar al hermano
        connectNodes(head);
        // El tercer paso es volver al nodo par, que está conectado a la lista enlazada copiada
        return reconnectList(head);
    }
 
    private static void cloneNodes(Node head) {
        Node node = null;
        while (head != null) {
            // Crea un nuevo nodo primero
            node = new Node(head.data);
            // luego apunte el siguiente de la cabeza al siguiente del nodo
            node.next = head.next;
            // Luego usa el nodo como el siguiente de la cabeza
            head.next = node;
            // La última condición de recorrido
            head = node.next;
        }
    }
 
    private static void connectNodes(Node head) {
        while (head != null) {
            if (head.sibling != null) {
                // Si el hermano del nodo actual no es nulo, apunte el nodo de copia detrás de él al siguiente nodo al que apunta el hermano actual
                head.next.sibling = head.sibling.next;
            }
            // Atravesar
            head = head.next.next;
        }
    }
 
    private static Node reconnectList(Node head) {
        if (head == null)
            return null;
        // Se usa para almacenar el nodo principal de la lista enlazada de copia
        Node cloneHead = head.next;
        // Se usa para registrar el nodo de procesamiento actual
        Node cloneNode = cloneHead;
        // El siguiente encabezado sigue apuntando al encabezado original.
        // De hecho, después de copiar, debería ser head.next.next, que es cloneHead.next
        head.next = cloneHead.next;
        // Debido a que nuestro primer nodo se ha dividido, debemos apuntar al nuevo nodo copiado para iniciar el ciclo
        head = head.next;
        while (head != null) {
            // cloneNode representa el nodo de replicación
            // Asignar valor primero
            cloneNode.next = head.next;
            // El final de la asignación debe asignarse al nodo al que apunta el siguiente
            cloneNode = cloneNode.next;
            // El siguiente nodo de la cabeza debe apuntar al siguiente nodo que se asignará
            head.next = cloneNode.next;
            head = cloneNode.next;
        }
        return cloneHead;
    }
 
 
    public static void main(String[] args) {
        Node head1 = new Node(1);
        Node node2 = new Node(2);
        Node node3 = new Node(3);
        Node node4 = new Node(4);
        Node node5 = new Node(5);
        head1.next = node2;
        node2.next = node3;
        node3.next = node4;
        node4.next = node5;
        node5.next = null;
        head1.sibling = node4;
        node2.sibling = null;
        node3.sibling = node5;
        node4.sibling = node2;
        node5.sibling = head1;
 
        print(head1);
        Node root = complexListNode(head1);
        System.out.println();
        print(head1);
        print(root);
        System.out.println();
        System.out.println(isSameLink(head1, root));
    }
 
    private static boolean isSameLink(Node head, Node root) {
        while (head != null && root != null) {
            if (head == root) {
                head = head.next;
                root = root.next;
            } else {
                return false;
            }
        }
        return head == null && root == null;
    }
 
    private static void print(Node head) {
        Node temp = head;
        while (head != null) {
            System.out.print(head.data + "->");
            head = head.next;
        }
        System.out.println("null");
        while (temp != null) {
            System.out.println(temp.data + "=>" + (temp.sibling == null ? "null" : temp.sibling.data));
            temp = temp.next;
        }
    }
}
