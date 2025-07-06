#include<iostream>
#include<stdlib.h>
#include<ctype.h>
#include<string.h>
#include<time.h>
using namespace std;
void ordenaB1(int [],int [],int b,int p); //funciones para hacer los metodos.
void ordenaSl2(int [],int [],int a,int k);
void ordenaP3(int [],int [],int d,int u);
void ordenaS4(int [],int [],int c,int s);//...
void Bmet1(int [],int [],int x,int z);//funciones para hacer las busquedas.
void Bmet2(int [],int [],int y,int wh);//...
void impress(int[],int[],int kl,int mr); //funcion auxiliar o de emergencia.
int main(){
	int elecf; //para definir el tamaño de las filas;
	int elecl; //para definir el tamaño de las columnas.
	int opc;
	int i=0;
	int j=0;
	int m3,m5;// se usa dentro de las switch
	int m4,m45;  //para dentro de la switch de adentro de las switch.
	do{
		cout<<"Bienvenido usuario!!!\n";
		cout<<"Digite un numero para crear el numero de filas para la matriz: ";
		cin>>elecf;
	}while(elecf<=0); //validador para que solo agarre numeros positivos.
	int num1[elecf];
	do{
		cout<<"\nAhora,digite el numero de colunmas para crear la martiz: "<<endl;
		cin>>elecl;
	}while(elecl<=0);
	int num2[elecl];
	
	for(int i=0;i<elecf;i++){
		for(int j=0;j<elecl;j++){
			cout<<"Ahora,ingrese el numero para la posicion de fila,["<<(i)<<"]: "<<endl; //pora las posiciones de filas
		    cin>>num1[i];
		    cout<<"Ahora ingrese la posicion de colunma,["<<(j)<<"]: "<<endl;
			cin>>num2[j];
	}
	cout<<endl;
}
		cout<<"imprimiendo matriz que has creado..\n"; // mostrando la matriz que hemos creado
		for(int i=0;i<num1[i];i++){
			for(int j=0;j<num2[j];j++){
				cout<<num1[i]<<" | ";
				cout<<num2[j]<<" | ";
			}
			cout<<endl;
		}
	//algo no esta funcionando bien me pase algunas horas buscando el error y aun asi no logro identificar.
	do{
		cout<<"Ahora,Escoja una opcion ordenamiento para realizar.";
		cout<<"\n1-metodo burbuja.";
		cout<<"\n2-metodo seleccion.";
		cout<<"\n3-metodo incersion.";
		cout<<"\n4-metodo shell.";
		cout<<"\n5-Salir del programa.";
		cout<<"\nDigite la opcion que desea seleccionar: "<<endl;
		cin>>opc;
	}while(opc<0 and opc>5);
	switch(opc){
		case 1:
			cout<<"Usted eligio metodo arrgelo por Burbuja.";
			ordenaB1(num1,num2,elecf,elecl);
			impress(num1,num2,elecf,elecl);
				do{
			cout<<"\nDesearia hacer una busqueda en su matriz?";
			cout<<"\nEscriba 1 para hacer la operacion y 2 para salir del programa: ";
			cin>>(m4);
				cout<<"\nPor cual metododo  quiere hacer su busqueda?";
				cout<<"\n1-Secuencial.";
				cout<<"\n2-Binaria.";
				cout<<"\n3-Salir.";
				cout<<"\nOpcion: ";
				cin>>m5;
				switch(m5){
					case 1: 
					cout<<"\nUsted eligio el metodo de busqueda selectiva.";
					Bmet1(num1,num2,elecf,elecl);
					break;
					case 2:
					cout<<"\nUsted eligio el metodo de busqueda binaria.";
					Bmet1(num1,num2,elecf,elecl);
					break;
					case 3:
						cout<<"Adios!!";
						return 0;
						break;
				}
				}while(m4=!3);
			break;
		case 2:
			cout<<"Usted eligio metodo arreglo por Seleccion.";
			ordenaSl2(num1,num2,elecf,elecl);
			cout<<"\nDesearia hacer una busqueda en su matriz?";
			cout<<"\nEscriba 1 para hacer la operacion y 2 para salir del programa: ";
			cin>>(m4);
			if(m4==1){
			
			switch(m4){
				case 1:
				cout<<"\nPor cual metododo  quiere hacer su busqueda?";
				cout<<"\n1-Secuencial.";
				cout<<"\n2-Binaria.";
				cout<<"\n3-Salir.";
				cout<<"\nOpcion: ";
				cin>>m5;
				do{
				switch(m5){
					case 1: 
					cout<<"\nUsted eligio el metodo de busqueda selectiva.";
					Bmet1(num1,num2,elecf,elecl);
					break;
					case 2:
					cout<<"\nUsted eligio el metodo de busqueda binaria.";
					Bmet1(num1,num2,elecf,elecl);
					break;
					case 3:
						cout<<"Adios!!";
						return 0;
						break;
				}
				}while(m5!=3);
			     break;
			     case 2:
			     	return 0;
			     	break;
			 } 
		}else{
			return 0;
			break;
		}
		case 3:
			cout<<"Usted eligio metodo arrgelo por Insercion."; //este metodo da un error feo no lo he identificado.
			ordenaP3(num1,num2,elecf,elecl);
			impress(num1,num2,elecf,elecl);
			cout<<"\nDesearia hacer una busqueda en su matriz?";
			cout<<"\nEscriba 1 para hacer la operacion y 2 para salir del programa: ";
			cin>>(m45);
			if(m45==1){
			do{
				cout<<"\nPor cual metododo  quiere hacer su busqueda?";
				cout<<"\n1-Secuencial.";
				cout<<"\n2-Binaria.";
				cout<<"\n3-Salir.";
				cout<<"\nOpcion: ";
				cin>>m5;
				switch(m5){
					case 1: 
					cout<<"\nUsted eligio el metodo de busqueda selectiva.";
					 Bmet1(num1,num2,elecf,elecl);
					break;
					case 2:
					cout<<"\nUsted eligio el metodo de busqueda binaria.";
					Bmet1(num1,num2,elecf,elecl);
					break;
					case 3:
						cout<<"Adios!!";
						return 0;
						break;
			}
			}while(m5!=3);
			break;
		}else{
			return 0;
			break;
		}
		case 4:
			cout<<"Usted eligio el metodo arreglo por Shell.";
			ordenaS4(num1,num2,elecf,elecl);
			impress(num1,num2,elecf,elecl);
					do{
			cout<<"\nDesearia hacer una busqueda en su matriz?";
			cout<<"\nEscriba 1 para hacer la operacion y 2 para salir del programa: ";
			cin>>(m4);
			if(m4==2){
				cout<<"\nPor cual metododo  quiere hacer su busqueda?";
				cout<<"\n1-Secuencial.";
				cout<<"\n2-Binaria.";
				cout<<"\n3-Salir.";
				cout<<"\nOpcion: ";
				cin>>m5;
				switch(m5){
					case 1: 
					cout<<"\nUsted eligio el metodo de busqueda selectiva.";
					Bmet1(num1,num2,elecf,elecl);
					break;
					case 2:
					cout<<"\nUsted eligio el metodo de busqueda binaria.";
					Bmet1(num1,num2,elecf,elecl);
					break;
					case 3:
						cout<<"Adios!!";
						return 0;
						break;
				}	
				}else{
					return 0;
					break;
				}
				}while(m4!=3);
				
		case 5:
			do{
			cout<<"Seguro que usted desea salir ahora?";
			cout<<"\n1-SI";
			cout<<"\n2-NO";
			cout<<"\nOpcion: ";
			cin>>m3;
			if(m3==1){
				return 0;
			}
			else if(m3==2){
				return main();
			}
			else{
				cout<<"\nError digite una de las opciones indicadas.";
			}
			break;
		}while(m3==1 and m3 !=2);
		 default:
		 	return main();
		 	break;
		}
	
	system("pause");
	return 0;
}

void ordenaB1(int wl[],int t[],int b,int p){
	int i,j,aux,aux2;
  		for(i=0;i<b;i++){
		for(j=0;j<b;j++){
			if(wl[j]>wl[j+1]){
				aux=wl[j];
				wl[j]=wl[j+1];
				wl[j+1]=aux;
			}
		}
	}
	int ti,tj;
		for(ti=0;ti<p;ti++){
		for(tj=0;tj<p;tj++){
			if(t[tj]>t[tj+1]){
				aux2=t[tj];
				t[j]=t[tj+1];
				t[tj+1]=aux2;
			}
		}
	}
  
}
void ordenaSl2(int o[],int u[],int a,int k){
	   		int i,j,aux,min;
	   		int aux2,min2;
		//ordenamiento metodo por seleccion.
		for(i=0;i<a;i++){
			 min=i;
			for(j=i+1;j<a;j++){
				if(o[j]<o[min]){
					min=j;
				}
			}
			aux= o[i];
			o[i]=o[min];
			o[min]=aux;
		}
			for(i=0;i<k;i++){
			 min2=i;
			for(j=i+1;j<k;j++){
				if(u[j]<u[min2]){
					min2=j;
				}
			}
			aux2= u[i];
			u[i]=u[min2];
			u[min2]=aux2;
		}
		cout<<"Orden ascendente: ";
		for(i=0;i<a;i++){
			for(j=0;j<k;j++){
			cout<<o[i]<<" | ";
			cout<<u[j]<<" | ";
		}
	}
		cout<<"\nOrden descendente: ";
		for(i=a-1;i>=0;i--){
			for(j=k-1;j>=0;j--){
			cout<<o[i]<<" | ";
			cout<<u[j]<<" | ";
		}
	}
 }

void ordenaP3(int z[],int x[],int d,int u){
	
   int i,j, posi, auxi; ///hay un error en este metodo que no logro identificar.
	int posi2,auxi2;
	for(i=0;i<d;i++){
		posi=i;
		auxi=z[i];
		while((posi>0)&&(z[posi-1])>auxi ){
			z[posi]= z[posi-1];
			posi--;
		}
		z[posi]=auxi;
	}
 for(j=0;j<u;j++){
		posi2=j;
		auxi2=x[j];
		while((posi2>0)&&(x[posi2-1])>auxi2 ){
			x[posi2]= x[posi2-1];
			posi2--;
		}
		x[posi2]=auxi2;
	}
	cout<<"Orden Ascendente: ";
	for(i=0;i<d;i++){
		for(j=0;j<u;j++){
		cout<<z[i]<<" | ";
		cout<<x[j]<<" | ";
	 }
	 cout<<endl;
	}
	cout<<"\nOrden Descendente: ";
	for(i=d-1;i>=0;i--){
		for(j=u-1;j>=0;j--){
		cout<<z[i]<<" | ";
		cout<<x[j]<<" | ";
	}
	cout<<endl;
	}
}
void ordenaS4(int xd[],int dx[],int c,int s){
		int ints,i,aux;
	bool band;
	ints=c;
	while(ints>1){
		ints=(ints/2);
		band=true;
		while(band==true){
			band=false;
			i=0;
			while(i+ints<=c){
				if(xd[i]>xd[i+ints]){
					aux=xd[i];
					xd[i]=xd[i+ints];
					xd[i+ints]=aux;
					band=true;
				}
				i++;
			}
		}
	}
	int ints2,j,aux2;
	bool band2;
	ints=s;
	while(ints2>1){
		ints2=(ints2/2);
		band2=true;
		while(band2==true){
			band2=false;
			j=0;
			while(j+ints2<=s){
				if(dx[j]>dx[j+ints2]){
					aux2=dx[j];
					dx[j]=dx[j+ints2];
					dx[j+ints2]=aux2;
					band2=true;
				}
				j++;
			}
		}
	}
}
void Bmet1(int lm[],int ks[],int x,int z){
	int	i=0,j=0, dato,dato2; //variables que usaremos en nuestra funcion.
char band ='F';
char band2 ='F'; // la bandera para evitar algunos errores.
cout<<"vector cargado!!: "<<endl;
for(i=0;i<x;i++){
	for(j=0;j<z;j++){
	cout<<lm[i]<<" | ";
	cout<<ks[j]<<" | ";
}
}
do{
	cout<<"Ahora,digite el dato que desea buscar de las filas: ";
	cin>>dato;
	i=0;
    while((band =='F') && (i<x)){
		if(lm[i] == dato){
		
		band ='V';
	}
	i++;
		}
		if(band =='F'){
		
	cout<<"El dato a buscar no existe en el arreglo"<<endl;
		}
	else if(band =='V'){
	 cout<<"El dato ha sido encontrado en la posicion de fila: "<<i-1<<endl;
	}
}while(band=='F');

//////para las colunmas.  //no funciona todavia no entiendo el error.
do{
	cout<<"Ahora,digite el dato que desea buscar: ";
	cin>>dato2;
	j=0;
    while((band2 =='F') && (i<z)){
		if(ks[j] == dato2){
		
		band2 =='V';
	}
	j++;
		}
		if(band2 =='F'){
		
	cout<<"El dato a buscar no existe en el arreglo"<<endl;
		}
	else {
		cout<<"El dato ha sido encontrado en la posicion: "<<j-1<<endl;
		band2=='V';
	}
}while(band2!='V');

}
void Bmet2(int hl[],int kl[],int y,int wh){
		int i,j,dato,dato2,mitad,mitad2,inf,inf2,sup,sup2; //variables necesarias para el metodo de bus binaria.
	char band = 'F';
	char band2 ='F'; //la bandera para evitar errores.
	cout<<"vector cargado!!: "<<endl;
	for(i=0;i<y;i++){
		for(j=0;j<wh;j++){
		cout<<hl[i]<<" | ";
		cout<<kl[j]<<" | ";
	 }
	}
	do{
	cout<<"Por favor digite el dato que quiere buscar para las filas: ";
	cin>>dato;
	inf=0;
	sup=y;
	i=0;
	while((inf<=sup)&&(i<y)){
		mitad=(inf+sup)/2;
		if(hl[mitad]==dato){
			band='V';
		}
		if(hl[mitad]>dato){
			sup=mitad;
			mitad=(inf+sup)/2;
		}
		if(hl[mitad]<dato){
			inf=mitad;
			mitad=(inf+sup)/2;
		}
		i++;
	}
		if(band =='V'){
		cout<<"El numero se encontro en la posicion de fila: "<<mitad<<endl;
		}
	else{
		cout<<"El dato a buscar no existe en el arreglo"<<endl;
	}
	}while(band=='F');

	do{
	
	cout<<"Por favor digite el dato que quiere buscar para las columnas: ";
	cin>>dato2;
	inf2=0;
	sup2=wh;
	j=0;
	while((inf2<=sup2)&&(j<wh)){
		mitad2=(inf2+sup2)/2;
		if(kl[mitad2]==dato2){
			band2='V';
		}
		if(kl[mitad2]>dato2){
			sup2=mitad2;
			mitad2=(inf2+sup2)/2;
		}
		if(kl[mitad2]<dato2){
			inf2=mitad2;
			mitad2=(inf2+sup2)/2;
		}
		j++;
	}
		if(band2 =='V'){
		cout<<"El numero se encontro en la posicion de columna: "<<mitad2<<endl;
		}
	else{
		cout<<"El dato a buscar no existe en el arreglo"<<endl;
	}
	}while(band2=='F');
}
void impress(int m[],int n[],int kl,int mr){      //funcion auxiliar o de emergencia.
	for(int i=1;i<kl+1;i++){
		cout<<"[ "<<m[i]<<" ]";
		for(int j=1;j<mr+1;j++){
		cout<<"[ "<<n[j]<<" ]";
	}
	}
} //powered by oli.
