#include<iostream>
#include<stdlib.h>
using namespace std;
struct Nodo{
	int dato;
	Nodo *izq;
	Nodo *der;
};


Nodo *crearNodo(int );
void insertarNodo(Nodo *&,int);
void mostrarArbol(Nodo*,int);
Nodo *arbol=NULL;

int main(){
int dato;
int cont=0;
char u;
do{
cout<<"inserte un numero"<<endl;
cin>>dato;
insertarNodo(arbol,dato);
	cout<<"quiere continuar s/n"<<endl;
	cin>>u;
	
}while(u!='n');

mostrarArbol(arbol,cont);

}
Nodo *crearNodo(int n){
	Nodo *nuevo_nodo=new Nodo();
	nuevo_nodo->dato=n;
	nuevo_nodo->der=NULL;
	nuevo_nodo->izq=NULL;
	return nuevo_nodo;
}

void insertarNodo(Nodo *&arbol,int n){
	if(arbol==NULL){
		Nodo *nuevo_nodo=crearNodo(n);
		arbol=nuevo_nodo;
		cout<<"el elemento "<<n<<" a sido ingresado"<<endl;
		
		
		
	}else{
		int valorRaiz=arbol->dato;
		if(n<valorRaiz){
			insertarNodo(arbol->izq,n);
			cout<<n<<"<="<<arbol->dato<<endl;
		}else{
			insertarNodo(arbol->der,n);
			cout<<n<<">="<<arbol->dato<<endl;
		}
		
	}
	
}
void mostrarArbol(Nodo *arbol,int cont){
	if(arbol==NULL){
		
		return;
	}
	else{
		mostrarArbol(arbol->der,cont+1);
		for(int i=0;i<cont;i++){
			cout<<"		";
		}
		cout<<arbol->dato<<endl;
		mostrarArbol(arbol->izq,cont+1);
	}
}
