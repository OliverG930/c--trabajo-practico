//arboles..............................
#include<iostream>																													
#include<stdlib.h>																		
#include<string.h>
using namespace std;
//Creamos la estructura del arbol...
struct Nodo{
	int dato;
	Nodo *der;
	Nodo *izq;
	Nodo *padre;
};
//Creamos el Nodo vacio.....
Nodo * crearNodo(int,Nodo *);
//Creamos el arbol xd...
Nodo *arbol=NULL;

//la funcion para que se cree un nuevo nodo..
Nodo* crearNodo(int n,Nodo *padre){
		Nodo *nuevo_nodo = new Nodo();
		nuevo_nodo -> dato = n;
		nuevo_nodo -> der = NULL;
		nuevo_nodo -> izq = NULL;
		nuevo_nodo ->padre = padre;
		return nuevo_nodo;
}
//ahora nuestro procedimiento. para insertar el nodo........
void insertarNodo(Nodo*&arbol,int n,Nodo *padre){
	if(arbol==NULL){ //si nuestro arbol esta vacio, se creara un nuevo nodo...
		Nodo*nuevo_nodo=crearNodo(n,padre);
		arbol=nuevo_nodo;
	}else{
		int valorRaiz = arbol->dato;
		if(n<valorRaiz){ //si el elemento es menor a la raiz se ira al lado izquierdo...
			insertarNodo(arbol->izq,n,arbol);
		}else{ //si el elemento es mayor a la raiz se ira al lado derecho.....
			insertarNodo(arbol->der,n,arbol);
		}
	}
}
//funcion para mostrar elementos del arbol...........
void mostrarmoku(Nodo *arbol,int cont){ //funcion para mostrar nuestro arbol.............
	if(arbol==NULL){
		return; //si , no existe tal arbol regresara al menu..........
	}else{
		mostrarmoku(arbol->der,cont+1); ///si no, mostrara el arbol que hemos creeado en el menu 1.
		for(int i=0;i<cont;i++){
			cout<<"    "; //sangria o espacio libre para el espacio entre nodos...
		}
		cout<<arbol->dato<<endl; //se imprime los datos del arbol....
		mostrarmoku(arbol->izq,cont+1); //recursividad..
	}
	
}

//funcion para la busqueda de un elemento en el arbol..............
bool searchNA(Nodo *arbol,int n){
	if(arbol==NULL){ //SI,el arbol esta vacio va a dar un valor logico false, y que no se encuentra el elemento buscado...
		return false;
	}else if(arbol->dato==n){ //Si no si, hay algun elemento que retornar esta dara  true como valor logico....
		return true;
	}else if(n<arbol->dato){
		return searchNA(arbol->izq,n); // si no si n es menor a arbol, devolvera datos hacia la direccion izquierda....
	}else{
		return searchNA(arbol->der,n);//si no, n es mayor a arbol y devolvera datos hacia la direccion derecha....
	}
}
//////////////////////////funcion de recorrido tipo pre orden.
void Preorden(Nodo *arbol){
	if(arbol==NULL){ //se usa cuando el arbol esta vacio.
		return;
	}else{
		cout<<arbol->dato<<" - "; 
		Preorden(arbol->izq);
		Preorden(arbol->der);
	}
}
///////////////funcion para recorrido tipo inorden.
void Inorden(Nodo *arbol){
	if(arbol==NULL){ //se usa cuando el arbol esta vacio
		return;
	}else{
		Inorden(arbol->izq);
		cout<<arbol->dato<<" - ";
		Inorden(arbol->der);
	}
}
///////////funcion para recorrido tipo post orden.
void PostOrden(Nodo *arbol){
	if(arbol==NULL){ //se usa si el arbol esta vacio
		return;
	}else{
		PostOrden(arbol->izq);
		PostOrden(arbol->der);
		cout<<arbol->dato<<" - ";
	}
}
//////////////prototipos  de funciones para eliminar nodos.............
Nodo *minimo(Nodo*arbol);
void reemplazar(Nodo *arbol,Nodo *nuevoNodo);
void destruirNodo(Nodo *nodo);
void eliminarNodo(Nodo *nodoEliminar);
void eliminar(Nodo *arbol,int n);

///////////el menu...
void menuxd(){
	int dato,opc,contador=0; //elementos a utilizar.......
	int m2; //para las opciones del menu de recorrido.....
	do{
		cout<<"\t--------Menu---------\n";
		cout<<"Opcion: 1-Insertar un nuevo nodo."<<endl;
		cout<<"Opcion: 2-Mostrar datos dentro del arbol."<<endl;
		cout<<"Opcion: 3-Buscar datos dentro del arbol."<<endl;
		cout<<"Opcion: 4-recorrer el arbol(sera dirigido a otro menu para ver el tipo que de recorrido que desee)."<<endl;
		cout<<"Opcion: 5-Eliminar Nodo del arbol."<<endl;
		cout<<"Opcion: 6-Salir."<<endl;
		cout<<"Opcion: 7-Informacion del programa."<<endl;
		cout<<"Escriba aqui la Opcion: ";
		cin>>opc;	
		switch(opc){
			case 1:
				cout<<"\n--Ahora va a insertar datos en un nuevo nodo.---"<<endl;
				cout<<"\nPor favor, Digite un numero: "<<endl;
				cin>>dato;
				insertarNodo(arbol,dato,NULL);
				cout<<"\n";
				system("pause");
				return menuxd();
				break;
			case 2:
				cout<<"\n----Mostrar el arbol completo.----"<<endl;
				mostrarmoku(arbol,contador);
				cout<<"\n";
				system("pause");
				return menuxd();
				break;
			case 3:
				cout<<"\n-----Buscar un elemento en el arbol.-----"<<endl;
				cout<<"\n----Digite un numero a buscar: "<<endl;
				cin>>dato;
				if(searchNA(arbol,dato)==true){
					cout<<"\n-Elemento: "<<dato<<" ,Ha sido encontrado en el arbol..";
				}else{
					cout<<"\n-Elemento: "<<dato<<" ,NO ha sido encontrado!!";
				}
				cout<<"\n";
				system("pause");
				return menuxd();
				break;
			case 4:
				cout<<"\nA continuacion usted escogera que tipo de recorrido se realizara.\n";
				do{
				cout<<"Opcion 1-Recorrido Pre orden.\n";
				cout<<"Opcion 2-Recorrido In orden.\n";
				cout<<"Opcion 3-Recorrido Post orden.\n";
				cout<<"Opcion 4-Retornar al menu principal\n";
				cout<<"Opcion 5-Salir del programa\n.";
				cout<<"Opcion: "<<endl;
				cin>>m2;
				switch(m2){ //menu de case 4:, para escoger el tipo de recorrido que usted desee hacer....
					case 1:
						cout<<"\n Ha seleccionado Recorrido Pre Orden.\n";
						Preorden(arbol);
						cout<<"\n-------\n";
						system("pause");
						return menuxd();
						break;
					case 2:
						cout<<"\nHa seleccionado Recorrido In Orden.\n";
						Inorden(arbol);
						cout<<"\n--------\n";
						system("pause");
						return menuxd();
						break;
					case 3: 
					cout<<"\nHa seleccionado Recorrido Post Orden.\n";
						PostOrden(arbol);
						cout<<"\n----------\n";
						system("pause");
						return menuxd();
						break;
					case 4:
						return menuxd();
						break;
					case 5:
						exit(1);
						break;
					default: 
					cout<<"\nIngrese una opcion valida por favor..\n";}
					break;
				
				}while(m2!=5);
				break;
				case 5:
					cout<<"\nUsted ha seleccionado la opcion de eliminar nodo de un arbol.";
					cout<<"\nDigite el numero del nodo que desea eliminar: ";
					cin>>dato;
					eliminar(arbol,dato);
					cout<<"\n-----------\n";
					system("pause");
					return  menuxd();
					break;
			case 6:
				exit(1);
			break;
			case 7:
				cout<<"\nDesarrollado por Oliver Gamarra..\n"; //informacion acerca del programa y su autoria.......
				cout<<"Fecha de inicio: martes 8 de junio del 2021.\n";
				cout<<"Acutalizado a version 3.0 ,El dia 11 de junio de 2021.\n";
				cout<<"Lo nuevo: funcion para poder borrar los nodos del arbol.\n"; //especificaciones de la actualizacion del programa a la version 3.0...
				cout<<"Presione una tecla para continuar y regresar al menu..\n";
				cout<<"\n";
				system("pause");
				return menuxd();
				break;
			default:
				cout<<"\nError ingrese una opcion que este en el menu,por favor!!\n";	
				return menuxd();
				break;
		}
		system("cls");
	}while(opc=!6);//mientras opc sea distinta de 4 no se saldra del menu y el programa..........
}


int main(){
	string nombre;
	 cout<<"Escriba su nombre: ";
	 getline(cin,nombre);
	 cout<<"\nBienvenido "<<nombre<<"!!"; //saludo al usuario para buena practica de modales...
	cout<<"\nBienvenido a nuestro programa de arboles..\n"; //presentacion........
	cout<<"\nPulse una tecla para continuar..\n";
	system("pause");
	menuxd();
	cout<<"\nfin del programa "<<nombre<<", hasta luego!!"<<endl; //despedida!!!!!!..
	cout<<"\nPresione una tecla para terminar el programa!!"<<endl;
	system("pause");
	return 0;
}
///////////////////Eliminar nodo
void eliminar(Nodo *arbol,int n){
	if(arbol==NULL){ //si el arbol esta vacio..
		return; //no hara nada...
	}else if(n < arbol->dato){//si el valor es menor buscara por la izquierda...
		eliminar(arbol->izq,n);
	}else if(n > arbol->dato){
		eliminar(arbol->der,n);
	}else{//si ya encontraste el valor....
		eliminarNodo(arbol);
	}
}
//////////eliminar nodo...
void eliminarNodo(Nodo *nodoEliminar){
	if(nodoEliminar->izq && nodoEliminar->der){ //pregunta si el nodo del arbol tiene hijo izquierdo y derecho...
		Nodo *menor =minimo(nodoEliminar->der);
		nodoEliminar->dato=menor->dato;
		eliminarNodo(menor);
	}else if(nodoEliminar->izq){ // si tiene hijo izquierdo....
		reemplazar(nodoEliminar,nodoEliminar->izq);
		destruirNodo(nodoEliminar);
	}else if(nodoEliminar->der){
		reemplazar(nodoEliminar,nodoEliminar->der);
		destruirNodo(nodoEliminar);
	}else{ //no tiene hijos......
		reemplazar(nodoEliminar,NULL);
		destruirNodo(nodoEliminar);
	}
	
}
////////////funcion para hallar el nodoextremo izquirdo........
Nodo *minimo(Nodo *arbol){
	if(arbol==NULL){ //si esta vacio
		return NULL; //retorna nada.
	}
	if(arbol->izq){ //si tiene hijo izquierdo
		return minimo(arbol->izq); //buscamos la parte mas izquierda posible......
	}else{
		return arbol; //retornamos el mismo nodo.....
	}
}
////////////////Funcion para reemplazar los nodos...........
void reemplazar(Nodo *arbol,Nodo *nuevoNodo){
	if(arbol->padre){
		//arbol->padre hay que asignarle a su nuevo hijo........
		if(arbol->dato==arbol->padre->izq->dato){
			arbol->padre->izq= nuevoNodo;
		}else if(arbol->dato ==arbol->padre->der->dato){
			arbol->padre->der=nuevoNodo;
		}
	}
	if(nuevoNodo){
		//aqui procedemos a asignarle a su nuevo padre......
		nuevoNodo->padre=arbol->padre;
	}
}
//////////////funcion para destruir Nodo.....
void destruirNodo(Nodo *nodo){
	nodo->izq=NULL;
	nodo->der=NULL;
	
	delete nodo;
}
