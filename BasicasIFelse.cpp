#include<iostream>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
using namespace std;

int main(){ //funcion tipo void para hacer funcionar el ejemplo del ejercicio....
string nombrex,lm; //lm es una variable para determinar el medio de transporte con las setencias que usaremos all? abajo.
int edad,tx; //tx es para usar abajo en los if y else if... y edad con el if else.
	cout<<"\nAhora vamos a hacer un ejemplo de si eres mayor de edad o no y en que medio de transporte viajas.con el if y else..\n";
	 //se que es un mal ejemplo o algo no tan bien planteado, pero mi plan es que el ejercicio sea 100% de mi autoria.No se enoje por favor xd.
	cout<<"Por favor escriba su nombre: ";
	getline(cin,nombrex); //para el ejemplo..
	cout<<"\nBienvenido"<<nombrex<<" ahora digite su edad: "; //pregunta para probar como se usa el if and else.
	cin>>edad;
	if(edad>=18){ //si edad es mayor o igual a 18 entonces eres mayor de edad..
		cout<<"\nUsted es mayor de edad.\n";
	}else{ //en caso contrario es menor a 18 entonces eres menor de edad..
		cout<<"\nUsted no es mayor de edad.\n";
	}
	cout<<"En que tipo de transporte viaja? "; //ahora aplicando un ejemplo con el else if...
	cout<<"\nDigite:1-Para decir en Bus.\nDigite:2-Para decir en automovil.\nDigite:3-Para referirte a otros medios..\n"; //pregunta
	cout<<"Digite: ";
	cin>>tx;
	if(tx==1){ //si opcion es igual a 1 entonces dices que viajas en bus..
		cout<<"\nUsted viaja en bus gracias por comentar la informacion.\n";
		lm="bus";
	}else if(tx==2){//en otro caso digitaste 2 es por que viajas en automovil..
		cout<<"\nUsted viaja en automovil gracias por comentar la informacion.\n";
		lm="automovil";
	}else if (tx==3){ //en otro caso digitaste 3 es por que viajas en otro medio de transporte....
		cout<<"\nUsted viaja en una alternativa distinta, gracias por comentar la informacion.\n";
		lm="otra opcion";
	}else{ //y si no en ulimas no has digitado una opcion en el rango de las opcinones a elegir....
		cout<<"\nLa opcion que usted digito no esta entre las opciones intente de vuelta\n";
	}
	cout<<"\nNota del Autor: Las sentencias else if se pueden usar varias veces para armar un menu si quieres o si tienes varias opciones\n";//aviso para el estudiante..
	cout<<"\nEs un aviso ya que los if y else solo se pueden usar una vez , y al inicio y al final de cada ejercicio.\n"; //espero que tome de manera positiva este detalle profesora..
	cout<<"\n";
	cout<<"\nNombre: "<<nombrex; // y aqui la info del usuario que hiso la encuesta..
	cout<<"\nEdad: "<<edad;
	cout<<"\nMedio de transporte: "<<lm<<endl; // y aqui lm dice en que medio viajas....
	cout<<"\nFin del programa\n pulse una tecla para continuar\n";
	system("pause");
	system("cls");
	return 0;
}
