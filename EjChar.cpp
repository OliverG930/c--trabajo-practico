#include<iostream>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
using namespace std;
int main(){
 char dia;

 cout << "Introduzca un Numero del 0 al 9: ";

 cin >> dia;



 switch(dia)

  {

  case '0': cout << "Domingo";

  break;

  case '1': cout << "Lunes";

  break;

  case '2': cout << "martes";

  break;

  case '3': cout << "miercoles";

  break;

  case '4': cout << "jueves";

  break;

  case '5': cout << "viernes";

  break;

  case '6': cout << "sabado";

  break;

  case '7': cout << "domingo";

  break;

  case '8': cout << "Lunes";

  break;

  case '9': cout << "Martes";

  break;

  default: cout << "ingrese un numero del 0 al 9";

  break;

  }

 cout<<"\nAqui tuve que buscar un ejemplo bueno con chars...";
 cout<<"\nNota mia: en mi caso creo que usar string es mejor aun que en algunos casos el char ayuda bastante y te puede ahorrar espacio.\n";
 cout<<"\n aun que te puede limitar en su uso por eso le veo la desventaja aun que de seguro le podremos hallar un buen uso como limitando las letras\n";
 cout<<"que los usuarios pueden meter en el registro asi no mal gastamos espacio...\n";
 cout<<"Presione una tecla para terminar...\n";
 system("pause");
 system("cls");
 return 0;
}
