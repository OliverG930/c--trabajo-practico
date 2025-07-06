#include<iostream>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
using namespace std;
int main(){ //funcion para desarrollar un ejercicio que lleve bucle do/while.
	string marcas[5];
	int numeros[5]; //declarados para el ejercicio en la otra seccion esta como estan los arrays/vectores y como los usamos.
	int v=5;
	cout<<"\nAhora veremos un ejemplo en donde perfectamente se podria ocupar la sentencia do/while.\n";
	cout<<"Este ejercicio tratara de algo simple pero con un buen fundamento que es usarlo como validador al do/while\n";
	cout<<"a continuacion usted digitara 5 nombres o algo como marca de autos como usted desee pero que no sean numeros.\n";
	cout<<"luego una ganacia osea numeros para luego combinar los datos(acuerdese que esto es un ejemplo basico).\n";
	for(int i=0;i<v;i++){
		fflush(stdin);//funcion para refrescar la pantalla y no se junte todo ...
		do{
		cout<<"\nAhora,digite por favor el nombre "<<i+1<<": ";
		getline(cin,marcas[i]);
	}while(!isalpha(marcas[i][0])); //aqui ocupamos el do/while como validador para que solo entren letras...
	do{//hacer.....
		cout<<"\nIngrese cuanto ha ganado: "<<marcas[i]<<": ";
		cin>>numeros[i];
	}while(numeros[i]<0);  //mientras sea condicion distinta a la que se pide. Nota: El validador hace que solo se acepten numeros positivos en este caso....
	}
	for(int i=0;i<v;i++){
		fflush(stdin);
		cout<<"-"<<marcas[i]<<"ha generado :"<<numeros[i]<<endl;//imprimiendo el ejemplo...
	}
	cout<<"\nY asi termina el ejercicio aun que en explicacion breve.\n";
	cout<<"El bucle do while se usa para hacer algo mientras no se cumpla la condicion pedida en el while puede trabajar de manera casi ilimitada.\n";
	cout<<"por ejemplo usted podria estar metiendo muchos numeros negativos en el validador y ninguno lo aceptaria y te estara tirando el mismo mensaje una y otra y otra..vez..\n";
	cout<<"fin del ejericio. pulse cualquier tecla para continuar\n";
	system("pause");
	system("cls");
	return 0;
}
