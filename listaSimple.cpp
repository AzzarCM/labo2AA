// Example program
#include <iostream>
#include <string>

using namespace std;

struct Nodo{
    int dato;
    Nodo *sig;
}*inicio;

class listaEnlazada{
    public:
        listaEnlazada(){
            inicio = nullptr;
        }
        Nodo* crearNodo(int valor){
            Nodo *n = new Nodo;
            n->dato = valor;
            n->sig = nullptr;
            return n;
        }
        
        void agregarNodo(int valor){
            Nodo *n = crearNodo(valor), *temp;
            if(!inicio)
                inicio = n;
            else{
                for(temp=inicio; temp->sig; temp = temp->sig);
                temp->sig = n;
            }
        }
        void mostrarLista(){
            Nodo* temp = inicio;
            if(!inicio)
                cout<<"Lista Vacia"<<endl;
            else
                while(temp){
                    cout<<temp->dato<<", ";
                    temp = temp->sig;
                }
        }
};

int main()
{
    listaEnlazada l1;
    l1.agregarNodo(1);
    l1.agregarNodo(2);
    l1.agregarNodo(3);
    
    l1.mostrarLista();
    
}
