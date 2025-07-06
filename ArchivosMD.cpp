#include<iostream>
#include<stdlib.h>
#include<fstream>
#include<string.h>
#include<ctype.h>
#include<iomanip>
using namespace std; 
void solic(int n); //añadir descripcion....
void leerD(int n); // funcion para leer los datos..
void regisM(int n);// funcion de registro.
void menuprincipal(int na); // menu principal
bool ba= false;
int main(){
	int na;
	cout<<"Bienvenido a nuestro programa usuario\n";
	do{
		cout<<"Ingrese el numero de objetos que va a registar: ";
		cin>>na;
	}while(na<0);
	//-------------------------------solo desde aqui debe volver a entrar
	menuprincipal(na); 

	cout<<"\t-programa finalizado!!";	
	system("pause");
	return 0;
}
void menuprincipal(int na){
			int opc;
			cout<<"\nEscoja una opcion que desee realizar\n";
			cout<<"\tOpciones:\n1-Registro.\n2-Aniadir descripcion.\n3-Leer la informacion del fichero.\n4-Salir.\n5-Informacion del programa.\n";
			cout<<"Opcion: ";
			cin>>opc;
			switch(opc){ //menu que estoy probando para el trabajo practico.
			case 1:
			regisM(na);
			system("pause");
			//system("cls");
			return menuprincipal(na);
			break;
			case 2:
				if (ba==true) {
					solic(na);
					system("pause");
				//	system("cls");
					return menuprincipal(na);
				}else {
					cout<<"\t Primero debe REGISTRAR AL Objeto..................\n";
					return menuprincipal(na);
				}	
			break;
			case 3:
			leerD(na);
			//system("pause");
				system("cls");
			return menuprincipal(na);
				break;
			case 4:
				break;
			case 5: 
			cout<<"Diseñado y actualizado por Oliver.G version 2.0 en el horario 22.36 del dia 1 de junio del 2021.(esta es la version final del 2 de junio)\n";
			cout<<"\n click para regresar a la funcion principal/click for return the main function.....\n";
			 //por favor no muestre mi ejercicio por que esta parte voy a ponerla en el final de mi trabajo practico para demsotrar mi autoria. o algo similar jaja solo estaba probando.
			system("pause");
				system("cls");
			return menuprincipal(na);
			break;
			default:
				cout<<"\nOpcion incorrecta digite una opcion de 1 al 5";
				return menuprincipal(na);
				break;
			}
		
	}

void regisM(int n){
	string nombres[n], auxi[n]; int op;ofstream archivo; //variables a utilizar...
	ba= true;
	regresa: archivo.open("Objetos.txt", ios::out);  //para que devuelva algo.. o regrese...
    for (int i=0; i<n; i++) {
        cout<<"Escriba el nombre del "<<i+1<<"# Objeto: "; 
		cin>>nombres[i];
        archivo<<"Objeto "<<i+1<<": "<<nombres[i]<<endl;
    } archivo.close(); cout<<"\n\n Los animales registrados son: \n";
    for (int i=0; i<n; i++) {
        cout<<"Objeto "<<i+1<<": "<<nombres[i]<<endl;
    } do {
        cout<<"\nDesea modificar los datos?";
        cout<<"\n1- Si.\n2- No.\nOpcion: "; 
		cin>>op;
    } while ((op!=1) and (op!=2)); //validador
    if (op==1) {
        system("cls");
        goto regresa; //regresa.
    } if (op==2) {
        archivo.open("Objetos.txt", ios::out);
        for (int i=0; i<n; i++) {
            auxi[i]=nombres[i];
            archivo<<"Objeto "<<i+1<<": "<<auxi[i]<<endl;
        } archivo.close(); // se cierra nuestro archivo aqui.........
    }
}
void solic(int n){
	ofstream archivo;int i=1;string textos;
	archivo.open("Objetos.txt",ios::app);
	if(archivo.fail()){
		cout<<"No se pudo crear el archivo,intentelo otra ves!!";
		exit(1);
	}
do{
	cin.ignore();
	cout<<"Por favor,ingrese la descripcion del "<<i<<"N° Objeto: "; std::getline(cin, textos);
	archivo<<"Descripción del "<<i<<"N° Objeto:"; 
	archivo<<textos<<endl;
	i++; //contador 
}while(i!=n+1);//Ciclo de determinacion de los textos............
}
void leerD(int n){	
 ifstream archivo;
 string texto;
 archivo.open("Objetos.txt",ios::in); //abrimos el archivo o mas bien la funcion lo abre... jaja
 if(archivo.fail()){
  cout<<"\nNo se pudo abrir o encontrar el archivo.";
  exit(1);
 }
 cout<<"\n";
 while(!archivo.eof()){//Mientras que el archivo no llegue al final seguira en marcha (control)..
  getline(archivo,texto);
  cout<<texto<<endl;
 }
 archivo.close(); //y se finaliza el archivo.........
}
