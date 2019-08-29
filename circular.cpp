// Example program
#include <iostream>
#include <string>

using namespace std;

struct Nodo{
    int dato;
    Nodo *sig;
    Nodo *prev;
}*inicio, *fin;

class listaCircular{
    public:
        listaCircular(){
            fin = nullptr;
        }
        Nodo* crearNodo(int valor){
            Nodo *n = new Nodo;
            n->dato = valor;
            n->sig = nullptr;
            return n;
        }
        
        void agregarNodo(int valor){
            Nodo *n = crearNodo(valor), *temp;
            if(!fin){
                fin = n;
                n->sig = fin;
            }
            else{
                n->sig = fin->sig;
                fin->sig = n;
                fin = n;
            }
        }
        void mostrarLista(){
            Nodo* temp = fin->sig;
            if(!fin)
                cout<<"Lista Vacia"<<endl;
            else
                while(temp!=fin){
                    cout<<temp->dato<<", ";
                    temp = temp->sig; //estoy en el penultimo 
                }
                cout<< temp->dato;
        }
       
};

int main()
{
    listaCircular l1;
    l1.agregarNodo(1);
    l1.agregarNodo(2);
    l1.agregarNodo(3);
    
    l1.mostrarLista();
    cout<<endl;
    //l1.mostrarListaAtras();
    
}
