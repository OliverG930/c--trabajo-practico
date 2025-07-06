#include<iostream>
#include<stdlib.h>
#include<string.h>
using namespace std;
int main(){ //funcion tipo void para el ejemplo de como se usa el bucle while..
 int numeros; 
cout<<"Bienvenido a la muestra del funcionamiento del bucle while.\n";
cout<<"Puse el numero 1,para que el contador vaya subiendo hasta ese numero final que es el 100 y asi se vea com funciona.\n";

while (numeros <= 100)  //contador de numeros positivos. hasta 100.
{ 
 cout<<numeros<<endl;
 numeros++; //suma sucesiva del numero que esta de constante aun que tambien se aplica con tipo variables..
}
cout<<"\nPresione cualquier tecla para avanzar y limpiar la pantalla.";
system("pause");
system("cls");
int numerosn =1; 
while (numerosn >= -100) //contador de numeros hacia negativos lo contrario a lo de arriba. hasta -100.
{ 
 cout<<numerosn<<endl; 
 numerosn--; //resta sucesiva del numero que esta de constante, que tambien se puede aplicar en tipo variables...
}
system("pause");
cout<<"\nfin del ejemplo muy corto pero es la forma mas facil de explicar y rapida.\n";
cout<<"Nota de autor: El bucle tipo while funciona mientras, tal condicion no se cumpla o no llegue al objetivo,\n eso significa que seguira trabajando mientas no llegue a su objetivo.\n";
cout<<"Es una breve explicacion.. Claro deben haber mas conceptos yo solo lo digo de la forma mas facil de interpretar.\n";
cout<<"Pulse una tecla para continuar.\n.";
system("pause");
system("cls");
}
