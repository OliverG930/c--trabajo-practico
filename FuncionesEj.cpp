#include<iostream>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
using namespace std;
void funciones();
float factorialDe(int numero){ //funcion que se usara para el ejercicio que esta ubicado alla abajo xd... es tambien funcion exclusiva...
    float resultado = 1; //variable para la funcion...
    for(int i = 1; i <= numero; i++){
        resultado *= i;
    }
    return resultado;
}

int main(){
	cout<<"Bienvenido al apartado de funciones.\n";
	funciones();
	cout<<"\nAdios!!.\n";
system("pause");
return 0;
}
void funciones(){
	 float factorial = 0;
    int numero;
    cout<<"\nAhora haremos un ejercicio de funciones.";
    cout<<"\nEnfocado en encontrar el factorial de un numero..";
    cout<<"\nIba a usar otro ejemplo pero este me parece algo interesante en este caso..\n";
    cout << "Ingrese un numero: " << endl;
    cin>>numero;
    if(numero >= 1 && numero <= 20){ //limite definido...
        factorial = factorialDe(numero);//llamada a la funcion factorial..
        cout<<"El factorial de "<<numero<<" es: "<<factorial<<endl;
    }else{
        cout<<"El numero no esta permitido.."<<endl;
    }
    cout<<"\nEs simple el funcionamiento ya que implica que tienes que dividir el ejercicio y sacarlo de la funcion principal\n";
    cout<<"te ayuda a optimizar el espacio en la funcion main()\n";
    cout<<"tambien existen las funciones tipo void que en mi caso es las que aplico aqui por que me parece mas comodo XD.\n";
    cout<<"Presione una tecla para continuar..\n";
    system("pause");
    system("cls");
}
