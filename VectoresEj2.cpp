#include<iostream>
#include<stdlib.h>
#include<ctype.h>
#include<string.h>
using namespace std;
int main(){
	 int n = 0; int i=0;
    double supin = 0.0; double toca = 0.0; //variables para guardar los porcentajes y numeros con muchos decimales...
    cout<<"\nEste programa trata de ingresar n, numeros de herederos y generaciones distribuir la fortuna\n";
    cout<<"***Calculo superficie herederos***\n\n";
    cout<<"Indique el numero de generaciones: ";
    cin>>n;
     int hGene[n]; ///guardando los datos generacionales en un array para poder determinar cuanto toca........
    cout<<"\nIndique la superficie inicial: ";
    cin>>supin;
    toca = supin;///indicacion de la superficie inicial.........
    for (i=1; i<=n; i++) {
    	cout<<"Indique el numero de herederos de la generacion %: "<<i<<endl;
        cin>>hGene[i];
        toca = toca/hGene[i]; ///para definir cuanto toca......
    }
    cout<<"\nAl heredero actual le corresponde una superficie de:"<<toca<<"%";
    
    cout<<"\nEsto es un ejercicio sencillo para principiantes para mostrarles como funcionan los arrays..\n";
    cout<<"Podrian aplicar para casi cualquier caso ya que sirven para distintas cosas...\n";
    cout<<"Press to continue any ey to continue.. presiona cualquier tecla para continuar.\n";
    system("pause");
    return 0;
}
