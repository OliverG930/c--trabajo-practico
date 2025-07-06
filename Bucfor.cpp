#include<iostream>
#include<stdlib.h>
#include<ctype.h>
#include<string.h>
using namespace std;

int main(){//funcion de ejemplo del bucle for..
	long numr,resultado;
	cout<<"\nAhora veremos un ejemplo breve del bucle for ya que es una buena forma en mi opinion de mostar a los principiantes..\n";
	cout<<"Haremos una tabla de multiplicar de cualquier numero que el usuario desee...\n";
	cout<<"Digite un numero para multiplicar: ";
	cin>>numr;
	for(int i=0;i<=10;i++){ //bucle for de limite de 10 elementos...usted puede claro hacer del valor que se le antoje, solo tiene que crear una variable y preguntar al usuario de cuanto sera luego de eso usted pondra como ejemplo llamala:elemento 
		 resultado=numr*i;//aqui se multiplican para dar el resultado...																				-continuacion de lo de arriba :for(int i=0;i<elemento;i++) y asi se pone en marcha nuestro for
	      cout<<"\n"<<numr<<"*"<<i<<"="<<resultado; //aqui se hace la tabla de multiplicar....
	}
	cout<<"\nAhora usted ha visto como funciona la tabla de multiplicar en un bucle tipo for no es algo tan dificil no hay mucho secreto.";
	cout<<"\nConsiste en mirar los elementos i esten en funcion de la variable que usted desee poner en este caso puse la constante a 10 como en el ejemplo que luego puede mirar la parte\n";
	cout<<"donde esta el for(int i=0;i<=10;i++) el i++ es un contador de sumador\n";
	cout<<"ahora ya sabe como esta compuesto el bucle for..\n";
	cout<<"Presione una tecla para continuar..\n";
	system("pause");
	system("cls");
	return 0;
}
