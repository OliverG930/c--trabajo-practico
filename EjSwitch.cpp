#include<iostream>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
using namespace std;
int main(){
	 int a, b, total; //variables declaradas a usar en el ejercicio..
    int seleccion;
    bool terminar = false; //bandera logica para asegurar que no existan errores.
    cout<<"Bienvenido, a este programa. realizar? operaciones aritm?ticas\n" << endl;
    cout<<"Sobre 2 cantidades que escribas" << endl << endl;
    do  //con esto. garantizamos que al menos se ejecute una vez nuestro c?digo...
    {
        cout<<endl<<"Indica el n?mero de la operaci?n que desees realizar " <<endl;
        cout<<"Escribe 0 para Salir del programa.." << endl;
        cout<<"(1)-Suma."<< endl;
        cout<<"(2)-Resta."<< endl;
        cout<<"(3)-Producto."<< endl;
        cout<<"(4)-Divisi?n Entera."<< endl;
        cout<<"(5)-M?dulo."<< endl;
        cout<<"(0)-Salir."<< endl;
        cout<<"Seleccion: ";
        cin>>seleccion;
        //Para realizar la operaci?n solicitada utilizamos una estructura switch
        //Switch impide que se ejecuten todas las sentencias case. para los distintos casos..
        switch (seleccion) {
            case 1:
                cout<<"Escribe el primer n?mero: ";
                cin>>a;
                cout <<"Escribe el segundo n?mero: ";
                cin>>b;
                cout << "La suma es: " << a + b << endl;
                break;//con esto solo se ejecutara esta parte del switch y no lo que no sea innecesario....
            case 2: {
                cout<<"Escribe el primer n?mero: ";
                cin>>a;
                cout <<"Escribe el segundo n?mero: ";
                cin>>b;
                cout << "La resta es: " << a - b << endl;
                break;
            }
            case 3: {
                cout<<"Escribe el primer n?mero: ";
                cin>>a;
                cout <<"Escribe el segundo n?mero: ";
                cin>>b;
                cout << "El producto es: " << a * b << endl;
                break;
            }
            case 4: {
                bool valido = false;
                cout<<"Escribe el primer n?mero: ";
                cin>>a;
                //Introducimos la comprobaci?n de errores..
                //Evitamos errores por divisi?n entre 0...
                do
                {
                    cout <<"Escribe el segundo n?mero: ";
                    cin>>b;
                    if (b == 0)
                    {
                        cout << "No puedes dividor entre 0, elige otro n?mero" << endl;
                        valido = false;
                    }
                    else {
                        valido = true;
                    } //if
                } //while
                while (not valido);
                cout << "La divisi?n es: " << a / b << endl;
                break;
            }
            case 5: {
                cout<<"\nEscribe el primer n?mero: ";
                cin>>a;
                cout <<"\nAhora,escribe el segundo n?mero: ";
                cin>>b;
                cout << "El m?dulo es: " << a % b << endl;
                break;
            }
            case 0: {
                terminar = true;
                break;
            }
            default: {
                cout << "\nOpci?n no v?lida,Por favor vuelve a intentarlo.." << endl;
                break;
            }
        } //Fin de switch.....
    	//fin de do.. 
     }while (not terminar); //Repite el ciclo hasta presionar 0....
	cout<<"\nNota mia: En este ejercicio me inspire en un buen ejemplo que habia encontrado para aprender a usar la sentencia switch..\n";
	cout<<"Basicamente te ahorra hacer los if,else if y else, aqui solo poner el switch los case y su composicion logica y sin limites.\n";
	cout<<"con su default opcional claro por si hay errores o elementos fuera de rango. y es excelente para crear menus...\n";
	cout<<"Presione una tecla para continuar...\n";
	system("pause");
	system("cls");
	return 0;
}
