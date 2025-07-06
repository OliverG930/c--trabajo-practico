//desing by Oliver Gamarra.
//name of the program: prototype: N#00001.
#include<iostream>
#include<stdlib.h>
#include<string.h>
using namespace std;
int main(){
	int n,N;
	int cont=0;
	int men;
	int acum[]={0};
	cout<<"----Saludos usuario---\n";
	do{
	cout<<"Bienvenido al programa de servicio automotriz\n";
	cout<<"Ingrese el numero de automoviles que van a requerir servicios: "<<endl;
	cin>>N;
	}while(N!=abs(N) or N<1); n=N;
	string clientes[N];
	string marca[N];
	string modelo[N];
	string duenio[N];
	string servicio[N];
	string apellido[N];
	string servi[N];
	string servi2[N];
	string servi3[N];
	string servi4[N];
	string servi5[N];
	string servi6[N];
	string servi7[N];
	int tot;

	float tarifa[N];
	for(int i=0;i<N;i++){
		fflush(stdin);
		do{
		cout<<"\nIngrese la marca del coche "<<i+1<<": ";
		getline(cin,marca[i]);
	}while(!isalpha(marca[i][0]));
	do{
		cout<<"\nIngrese el nombre del modelo del coche "<<i+1<<": ";
		getline(cin,modelo[i]);
	}while(!isalpha(modelo[i][0]));
	do{
		cout<<"\nIngrese el nombre del duenio del coche "<<i+1<<": ";
		getline(cin,duenio[i]);
	}while(!isalpha(duenio[i][0]));
	fflush(stdin);
	do{
		cout<<"\nIngrese el apellido del duenio del coche "<<i+1<<": ";
		getline(cin,apellido[i]);
	}while(!isalpha(apellido[i][0]));
	do{
		cout<<"\nIngrese la tarifa del coche "<<marca[i]<<": ";
		cin>>tarifa[i];
	}while(tarifa[i]<0);
	cout<<endl;
	}
	cout<<"\n";
	for(int i=0;i<N;i++){
		//for(int j=0;j<N;j++){
		do{
			fflush(stdin);
		cout<<"\nMenu de servicios Que ha seleccionado el usuario.\n";
		cout<<"cliente: "<<duenio[i]<<endl;
		cout<<"Opcion: 1-Cambio de neumaticos.\n";
		cout<<"Opcion: 2-Cambio de aceite.\n";
		cout<<"Opcion: 3-Servicio al motor.\n";
		cout<<"Opcion: 4-Servicio de frenos.\n";
		cout<<"Opcion: 5-Servicio de suspension y alinemiento.\n";
		cout<<"Opcion: 6-Mantenimiento general.\n";
		cout<<"Opcion: 7-Modificacion.\n";
		cout<<"Opcion: 8-terminar con cliente (para pasar al siguiente si hay.).\n";
		cout<<"Opcion: 9-Salir del programa.\n";
		cout<<"Opcion: ";
		cin>>men;
	 if(men==1){
	 	cout<<"\nSe ha solicitado el cambio de neumaticos.\n";
	 	servi[i]="\nCambio de neumaticos.\n";
	 		acum[i]=acum[i]+1;
	 	cont=cont+1;
	 		 }else if(men==2){
	 	cout<<"\nSe ha solicitado el cambio de aceite.\n";
	 	servi2[i]="\nCambio de aceite.\n";
	 		acum[i]=acum[i]+1;
	 	cont=cont+1;
	 }else if(men==3){
	 	cout<<"\nSe ha solicitado servicio de motor.\n";
	 	servi3[i]="\nServicio de motor.\n";
		acum[i]=acum[i]+1;
	 	cont=cont+1;
	 }else if(men==4){
	 	cout<<"\nSe ha solicitado el servicio de frenos.\n";
	 	servi4[i]="\nServicio de frenos.\n";
	 		acum[i]=acum[i]+1;
	 	cont=cont+=1;
	 }else if(men==5){
	 	cout<<"\nSe ha solicitado el servicio de suspencion y alinemiento.\n";
	 	servi5[i]="\nServicio de suspension y alineamiento\n";
	 	acum[i]=acum[i]+1;
	 	cont=cont+1;
	 }else if(men==6){
	 	cout<<"\nSe ha solicitado el mantenimiento general.\n";
	 	servi6[i]="\nMantenimiento General.\n";
		acum[i]=acum[i]+1;
	 	cont=cont+1;
	 }else if(men==7){
	 	cout<<"\nSe ha solicitado el serviccio de modificaciones\n";
	 	servi7[i]="\nServicio de Modificaciones.\n";
		acum[i]=acum[i]+1;
	 	cont=cont+1;
	 }else if(men==8){
	 			break; //para pasar de cliente.....................
	 }
	 else{
	 	return 0;
	 }
	 }while(men!=8 and men!=9);///solo con 8 y 9 se corta el bucle, bueno el 8 es para pasar al siguente cliente si es que hay y el 9 para salir del programa..
	 
}
	cout<<"\nPulse una tecla para continuar.\nPress one key to continue.\n";
	system("pause");
	system("cls");
	 	tot=cont+tot;//contador de servicios....
	cout<<"\n-------Imprimiendo totales--------\n";
	for(int i=0;i<N;i++){
		fflush(stdin);
		cin.ignore();
		cout<<"El cliente "<<duenio[i]<<" "<<apellido[i]<<",su coche de marca: "<<marca[i]<<" modelo: "<<modelo[i]<<",Ha hecho algunos servicios.\n"<<endl;
		cout<<"En total el cliente "<<duenio[i]<<" "<<apellido[i]<<" pidio: "<<acum[i]<<" Servicios.\n";
		cout<<"Por los servicios de:"<<servi[i]<<""<<servi2[i]<<""<<servi3[i]<<""<<servi4[i]<<""<<servi5[i]<<""<<servi6[i]<<""<<servi7[i]<<" "<<endl;
		cout<<"Por lo tanto su cuenta es de: "<<tarifa[i]<<endl;
	}
		cout<<"\nEn total hoy hemos hecho un total de "<<tot<<" Servicios.\n"<<endl;
		cout<<"Programa diseniado por Oliver Gamarra para el t.p de algortimos 2.\n";
		cout<<"Un array es una colección de datos del mismo tipo, que se almacenan en posiciones\n";
		cout<<"consecutivas de memoria y reciben un nombre en común.\n";
		cout<<"Para referirse a un determinado elemento de un array se deberá utilizar un índice, que\n";
		cout<<"especifique su posición relativa en el array.\n";
		cout<<"Espero que te sirva el ejemplo :) \n";
		cout<<"\n Por favor pulse cualquier tecla para terminar.\nPlease press any key for finish.\n";
	system("pause");
	return 0;
}

