#include<iostream>
#include<stdlib.h>
#include<ctype.h>
#include<string.h>
#include<iomanip>
using namespace std;
void keisan(int X,int cuotas[],int aume[][13],int auxi[],int totalmes[],int totalgen);//funciom usada en el ejercicio de matrices 1.
int main(){
	int b,c,z,x;
	float X; //variables para usar....
	do{
		cout<<"Ingrese la cantidad de socios o asociaciones; que deseara registrar: ";
		cin>>X;
	}while(X<1 or X!=abs(X)); x=X; //validador..
	string nombre[x]; int cuotas[x], cedula[x]; //variables para almacenar los datos
	string planillas[14]={"Datos\t","Ene\t", "Feb\t", "Mar\t", "Abr\t", "May\t", "Jun\t", "Jul\t", "Ago\t", "Set\t", "Oct\t", "Nov\t", "Dic\t", "Total"}; 
	//Vector pata impresión de planilla en pantalla
	int aume[x][13], totalx[x][13], auxi[x], totalmes[13], totalgen=0;
	for(int i=0;i<X;i++){
		fflush(stdin); //optimizador?
		do{
			cout<<"\nIngrese el nombre del socio o asociacion: "<<i+1<<": ";
			getline(cin,nombre[i]);
		}while(!isalpha(nombre[i][0])); //validador de nombres....
		do{
			cout<<"\nDigite el numero de CI del socio o algun codigo si se trata de una asociacion: "<<i+1<<": ";
			cin>>cedula[i];
		}while(cedula[i]<0); // no pongo el limite de Ci por que: quien sabe en donde se pueda usar el programa.....
		do{
			cout<<"\nIngrese la cuota fija del socio o asociacion "<<i+1<<": ";
			cin>>cuotas[i];
		}while(cuotas[i]<0);///pongo asi por que puede que en algun caso especial el cliente no pague cuota.....
		cout<<endl;
	}
	system("cls");
	
	keisan (X,cuotas,aume,auxi,totalmes,totalgen); ///llamada de funcion tipo void o subrutina... 
	
	cout<<"\t-Muestra de datos..........\n"; //impresion....
	for(int i=0;i<14;i++){
		cout<<setw(6)<<planillas[i]; //impresion de planilla.
	}
	for(int i=0;i<X;i++){
		cout<<"\n"<<nombre[i]; ///imp de nombre y mas abajo los aumentos y sus respectivas sumas...
		for(int j=0;j<12;j++){
		cout<<"\t"<<setw(6)<<aume[i][j];
	}totalx[i][13]=auxi[i]; cout<<"  "<<totalx[i][13]; cout<<endl; 
		totalgen=totalgen+totalx[i][13];
	}
		cout<<"\nTotal: \t"; //resultado total...
	for (int i=0; i<13; i++) {
		if (i<12) {
			cout<<totalmes[i]<<"  ";
		} if (i==12) {
			cout<<totalgen;
		}
	} cout<<"\n\nTotal general: G. "<<totalgen<<endl; //el total general....
	cout<<"Programa Finalizado\n";
	//fin
	cout<<"Nota: Una matriz no dista mucho de como se usa un vector ya que al ser un array solo que es bi o multidimensional.\n";
	cout<<"ahora pulse cualquier tecla para terminar.\nPress any key to finish.\n";
	system("pause");
	return 0;
}
///nota no hacer con numeros muy grandes ya que no esta hecho con el long que sirve para los numeros muy grandes...
void keisan(int X,int cuotas[],int aume[][13],int auxi[],int totalmes[],int totalgen){//funciom usada en el ejercicio de matrices 1.
	int i,j,sz; 
		for (int i=0; i<X; i++) {
		auxi[i]=0;
		for (int j=0; j<12; j++) {
			if (j==0) {
				aume[i][j]=cuotas[i];
			} else
				aume[i][j]=aume[i][j-1]*1.5; // Aumento del 15%  en cada mes.....
				auxi[i]=auxi[i]+aume[i][j]; // Cálculo del total por cada cliente....
		}
	} for (int i=0; i<13; i++) {
		totalmes[i]=0;
		for (int j=0; j<X; j++) {
			totalmes[i]=totalmes[i]+aume[j][i]; // Cálculo del total por cada mes.....
		}
	}
}
