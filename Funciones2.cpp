#include<iostream>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
using namespace std;
void funciones2();
void factorial1de(); //funcion exclusiva, para la funcion funciones2();

int main(){
	cout<<"\n---Bienvenido al apartado de funcionamiento de funciones tipo void---\n";
	funciones2();
	cout<<"\nAdios!...\n";
	system("pause");
	return 0;
}
void funciones2(){
cout<<"\nAhora veremos funciones tipo void, este programa esta construido a base de eso.";
cout<<"\nEl ejercicio consiste en hallar el factorial de un numero. como de seguro lo has visto en el otro ejemplo.";
cout<<"\nPuse mismo ejercicio en ambos tipos funciones para mostrar que son algo distintos las funciones.\n";
	int fc =0;
    int numero1; //variables para usar en nuestro ejercicio...
    cout<<"\nAhora haremos un ejercicio de funciones tipo void.";
    cout<<"\nEnfocado en encontrar el factorial de un numero..\n";
       factorial1de();
    cout<<"\nEn este caso es lo mismo pero con void, me parece mas simple y comodo de esta forma.\n";
    cout<<"Pero cada quien tiene su forma de programar, ambas formas estan bien solo que el void es una funcion sin retorno.\n";
    cout<<"y algo delicada en usar pero sirve.\n";
    cout<<"Presione cualquier tecla para salir\n";
    system("pause");
    system("cls");
}
void factorial1de(){ //funcion exclusiva, para la funcion funciones2();
	int aux,x;
	aux=1;
	cout<<"Ingrese el numero a encontrar el factorial: "<<endl;
	cin>>x;
    for(int i = 1; i <=x; i++){
        aux*=i;
}
	cout<<"El factorial del numero:"<<x<<" es:"<<aux<<endl;
	system("pause");
}
