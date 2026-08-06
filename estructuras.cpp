/*
estructura de arbol: 

por que son rapidos?: 
imagina un arreglo con un millon de numeros. Para encontrar un numero quizas debas revisar muchos elementos.
cada comparacion elimina la mitad de las posibilidades.
por eso la busqueda es mucho mas rapida


operaciones principales
un arbol binario de busqueda aprendera 4 operaciones
1. insertar
agregar un numero numero respetando la regla de menor a la izquierda y mayor a la derecha
2. buscar
encontrar si un numero existe recorriendo el arbol
3. recorrer
visitar todos los nodos en orden por ejemplo ascendente
4. eliminar 
quitar un nodo y reorganizar el arbol


por que la esctructura tiene dentro de si mismo su nombre?
porque un nodo necesita poder guardar la direccion de otro nodo

una persona solo tiene un nombre
pero ahora imagina un arbol genealogico.
cada persona necesita apuntar a otra persona


struct Persona{
    string nombre;
    Persona *padre;
    Persona *madre;
};

un nodo guarda un numero y tambien sabe donde estan sus hijos, 

y por que usa punteros y no simplemente nodo izquierda?
porque entonces un nodo contiene otro nodo, y ese otro nodo tambien contiene otro nodo, nunca terminaria

nodo *raiz; 
significa:
quiero un puntero que pueda apuntar a un nodo

new nodo():
significa:
crea un nuevo objeto en la memoria dinamica
el sistema operativo reserva memoria,
+----------------+
| dato           |
| izquierda      |
| derecha        |
+----------------+

y devuelve la direccion; supongamos que devuelve: 0X500







*/





#include <cstdlib>
#include <iostream>
using namespace std;

struct Nodo{
   int dato;
   Nodo *izq;//(los punteros contienen 8 bytes)
   Nodo *der;//(los punteros contienen 8 bytes)
};

//crear un arbol vacio
Nodo *raiz=NULL;// (8 bytes vacios)// significa: quiero un puntero que pueda apuntar a un nodo

//crear un Nodo
Nodo* crearNodo(int valor){
   Nodo *nuevo=new Nodo;
   nuevo->dato=valor;
   nuevo->izq=NULL;
   nuevo->der=NULL;
   return nuevo;
}

//insertar un Nodo
Nodo* insertar(Nodo *raiz,int valor){
   //si el arbol esta vacio,el nuevo nodo sera la raiz	
   if(raiz==NULL)
   	return crearNodo(valor);
   //inserttar en el subarbol izquierdo
   if(valor<raiz->dato)
      raiz->izq= insertar(raiz->izq,valor);
   //insertra en el subarbol derecho
   else if(valor>raiz->dato)
      raiz->der=insertar(raiz->der,valor);
   return raiz;	       
}

//buscar un Nodo
Nodo* buscar(Nodo *raiz,int valor){
   if(raiz==NULL || raiz->dato==valor)
      return raiz;
   if(valor<raiz->dato)  
      return buscar(raiz->izq,valor);
   return buscar(raiz->der,valor);
}

//verificar si el arbol esta vacio
bool estaVacio(Nodo *raiz){
   return (raiz==NULL);
}

//obtener la raiz
int obtenerRaiz(Nodo *raiz){
    if(raiz!=NULL)
      return raiz->dato;
    return -1;
}

//contar el numero de nodos
int contarNodos(Nodo *raiz){
   if(raiz==NULL)
      return 0;
   return 1+ contarNodos(raiz->izq)+contarNodos(raiz->der);
}

//calcular la altura del arbol
int altura(Nodo *raiz){
   if(raiz==NULL)      
      return 0;
   int izquierda=altura(raiz->izq);
   int derecha=altura(raiz->der);
   if(izquierda>derecha)
      return izquierda+1;
   else
      return derecha+1;
}

//obtener el nodo con el valor minimo
Nodo* minimo(Nodo *raiz){
   while(raiz->izq!=NULL)
	raiz=raiz->izq;
	return raiz; 	
}

//obtener el nodo con el valor maximo
Nodo* maximo(Nodo *raiz){
   while(raiz->der!=NULL)
	   raiz=raiz->der;
	return raiz; 	
}

//eliminar nodo
Nodo* eliminar(Nodo *raiz, int valor){
   if(raiz == NULL)
      return NULL;
   if(valor < raiz->dato)
      raiz->izq = eliminar(raiz->izq, valor);
   else if(valor > raiz->dato)
      raiz->der = eliminar(raiz->der, valor);
   else{
      // Caso 1: Nodo sin hijo izquierdo
      if(raiz->izq == NULL){
         Nodo *aux = raiz->der;
         delete raiz;
         return aux;
      }
        // Caso 2: Nodo sin hijo derecho
      if(raiz->der == NULL){
         Nodo *aux = raiz->izq;
         delete raiz;
         return aux;
      }

      // Caso 3: Nodo con dos hijos
      Nodo *aux = minimo(raiz->der);

      raiz->dato = aux->dato;

      raiz->der = eliminar(raiz->der, aux->dato);
   }

   return raiz;
}

//recorrido preorden
// RAIZ-IZQUIERDO-DERECHO
void preOrden(Nodo *raiz){
   if(raiz!=NULL){
   cout<<raiz->dato<<" ";
	preOrden(raiz->izq);
	preOrden(raiz->der);
   }
}
//recorrido inorden
//IZQUIERDO-RAIZ-DERECHO
void inOrden(Nodo *raiz){
   if(raiz!=NULL){  
      inOrden(raiz->izq);
      cout<<raiz->dato<<" ";
	   inOrden(raiz->der);
   }
}
//recorrido posorden
//izquierdo-derecho-raiz
void postOrden(Nodo *raiz){
	if(raiz!=NULL){
	   postOrden(raiz->izq);
	   postOrden(raiz->der);
	   cout<<raiz->dato<<" ";
	}
}
int main(int argc, char *argv[]){
	//Crear un arbol vacio
	Nodo *raiz=NULL;
	//insertar nodos
	raiz=insertar(raiz,50);
	raiz=insertar(raiz,30);
	raiz=insertar(raiz,70);
	raiz=insertar(raiz,20);
	raiz=insertar(raiz,40);
	raiz=insertar(raiz,60);
	raiz=insertar(raiz,80);
	//verificar si el arbol esta vacio
	if(estaVacio(raiz))
	   cout<<"El arbol esta vacio"<<endl;
	else
	   cout<<"El arbol contiene datos"<<endl;
	   //mostrar informacion del arboi
	   cout<<"\nRaiz:"<<obtenerRaiz(raiz)<<endl;
	   cout<<"Cantidad de nodos:"<<contarNodos(raiz)<<endl;
	   cout<<"Altura:"<<altura(raiz)<<endl;
	   cout<<"Valor minimo:"<<minimo(raiz)->dato<<endl;
	   cout<<"Valor maximo:"<<maximo(raiz)->dato<<endl;

	//buscar un valor
	if(buscar(raiz,40))
	   cout<<"El valor fue encontrado"<<endl;
	else
	   cout<<"El valor NO existe"<<endl;
	  
	//mostrar recorrido
	cout<<"\nRecorrido PreOrden:";
	preOrden(raiz);
	cout<<"\nRecorrido InOrden:";
	inOrden(raiz);
	cout<<"\nRecorrido PostOrden:";
	postOrden(raiz);
	cout<<"\n";

	//eliminar un nodo
	cout<<"\n\nEliminando el nodo 30..."<<endl;
	raiz=eliminar(raiz,30);
	cout<<"\nArbol despues de eliminar(InOrden):";
	inOrden(raiz);
	cout<<"\n";
	system("pause");
	return 0;
}