/*
Autor: Oliver G.
fecha: domingo 6 de junio del 2021. hora: 19.00hs. hora a la que empiezo a desarrollar este programa.
materia: algortimos 2.  
*/
#include<iostream>
#include<stdlib.h>
#include<iomanip>
#include<ctype.h>
#include<string.h>
#include<fstream> 
using namespace std;
void menuLuka(string name);//funcion del menu principal.....
void basica(); //funcion para menu de las sentencias basicas..
void sentenciaifelse(); //funcion del ejercicio para las sentencias if,else if y else.
void msentenciaifelse();//imprime como esta compuesto el ejercicio del if, else if y else..
void buwhile();//muestra el ejercicio del bucle while.
void mbuwhile();//muestra como esta compuesto el ejercicio del bucle while..
void dowhile();//muestra el ejercicio con do/while..
void mdowhile();//muestra como esta compuesto el ejercicio del do/while..
void forbuc();//muestra el ejercicio del bucle for..
void mforbuc();//muestra como esta compuesto el ejercicio del bucle for..
void elswitch(); //muestra el ejercicio usando el switch()..
void melswitch();//muestra como esta compuesto el ejercicio que ha usado el switch()..
void algun();//muestra un ejercicio facil con dato tipo char... es un bonus..
void malgun();//muesra como esta compuesto el ejercicio que usa dato tipo char..
void funciones(); //muestra ejerccio de funciones standart/normal.
void mfunciones();//imprime el ejercicio funciones..
void funciones2();//muestra ejerccio de funciones tipo void..
void mfunciones2();//imprime el ejerciciofunciones 2..
void vectorMat();//funcion de vectores y matrices menu
void vecEjer1(); //vector ejercicio1
void vecEjer2();//vector ejercicio2
void mvecEjer1();//imprecion del vec ej1
void mvecEjer2();//impresion del vec ej2
void mat1();//matrizej1
void mat2();//matrizej2
void mosmat1();//impresion del matrizej1
void mosmat2();//impresion dle matrizej2
void mostOrdn();//ordenamientos ejecicios.
void imprordn();//impresion del ejercicio
void hana();//arboles ejercicios
void Mhana();//impresion del ejercicio..
void AR();//archivos ejecicios..
void MAR();//impresion de archvios...
int main(){
	string nombre; //variable para el nombre de usuario......
	int opc; //variable para el switch........
	cout<<"Escriba su nombre/write your name: "; // pedimos el nombre para el saludo correspondiente al usuario. para una buena practica de modales jajaja..
	getline(cin,nombre);
	cout<<"\nBienvenido:"<<nombre<<"!!\n"; //saludo al usuario...........
	cout<<"Welcome:"<<nombre<<"!!\n";
 cout<<"Este programa trata sobre ense?arte a como funciona la programacion con sentencias basicas y como funcionan en C++.\n";
 cout<<"En el menu usted podra elegir por donde empezar, y cual tipo de ejercicio podra ejecutar o revisar su funcionamiento.\n";
 cout<<"a continuacion usted tendra que elegir una de las opciones del menu que aparece abajo. Presione enter para continuar..\n";
 system("pause");//lo puse para que quede mas elegante...........
 system("cls"); //limpieza de pantalla....
	menuLuka(nombre);
	cout<<"\nAdios:"<<nombre<<",gracias por usar el programa.\n";
	cout<<"\n Bye/sayonara: "<<nombre<<",thanks for use the program.\nPuroguramu o go riyoo itadaki arigatougozaimasu.\n";//un simple pero guay detalle que se me ocurrio.
	cout<<"Mas adelante volvere con mas proyectos.\n By Oliver Gamarra el autor."<<endl;	//guay =genial...
	system("pause");
	return 0;
}
void menuLuka(string name){
	name;
	int opc,mikuxd;
	 do{
 cout<<"Bienvenido al menu "<<name<<" escoja una opcion.\n";
 cout<<"Opcion: 1-Mostrar sentencias basicas del lenguaje.\n";
 cout<<"Opcion: 2-Mostrar funcionamiento de vectores y matrices.\n";
 cout<<"Opcion: 3-Mostrar funcionamiento de archivos.\n";
 cout<<"Opcion: 4-Mostrar funciomaniento de arboles.\n";
 cout<<"Opcion: 5-Mostrar informacion acerca del programa.\n";
 cout<<"Opcion: 6-Salir del programa.\n";
 cout<<"digite la opcion del 1 al 6: ";
 cin>>opc;
	switch(opc){ //menu de opciones para las funciones que usaremos para mostrar los ejemplos y ejericicos... se va retornar mientras el usuario no salga del programa.
		case 1:
			basica();
			system("cls");
			return menuLuka(name);
			break;
		case 2:
			vectorMat();
			system("cls");
			return menuLuka(name);
			break;
		case 3:
			do{
				cout<<"Bienvenido a archivos (3ejercicios en uno).\n";
				cout<<"Seleccione una opcion: 1 para el ejercicio 2 para ver la logica y 3 retornar al menu.\n";
				cin>>mikuxd;
				switch(mikuxd){
					case 1:
						AR();
						system("cls");
						return menuLuka(name);
					break;
						case 2:
						MAR();
							system("cls");
						return menuLuka(name);
					break;
					case 3:
						return menuLuka(name);
						break;
					default:
						cout<<"\nOpcion incorrecta vuelta a insertar.\n";
						break;
				}
			}while(mikuxd!=3);
			break;
		case 4:
			do{
			cout<<"\nBienvenido sera llevado al menu de arboles.\n";
				cout<<"Opcion 1 mostar ejercicio de arboles 3 en 1 y Opcion 2 mostrar logica y Opcion 3 retornar al menu.\n";
				cin>>mikuxd;
				switch(mikuxd){
					case 1:
						hana();
						system("cls");
					return	menuLuka(name);
						break;
					case 2:
						Mhana();
						system("cls");
						return menuLuka(name);
						break;
					case 3:
							return menuLuka(name);
							system("pause");
						break;
					default:
						cout<<"\ningeese una opcion valida.\n";
			
						break;
				}
		}while(mikuxd!=3);
			break;
		case 5:
			cout<<"Desarrollado por Oliver Gamarra version 1.0, fecha de inicio domingo: 06/06/2021.\n"; //firma de Oliver: lukapower jaja..... 
			cout<<"Este programa fue hecho como trabajo practico para la universidad y con el fin de ense?ar y ser usado en el ambito educacional si desean.\nClaro de manera gratuita. Su venta queda prohibida.\n";
			cout<<" Y nada  mas saludos a quien este leyendo. By: Oliver.G.The autor\n";
			cout<<"Pulsa cualquier tecla para vovler al main o la funcion principal...\n";
			system("pause");
			system("cls");
			return menuLuka(name);
			break;
		case 6:
			return; //retorna a la funcion principal para la despedida.......
			break;
		default:
			cout<<"Digite una opcion correcta.\n";
	//	return menuLuka(name);
			break;
	}
	}while(opc!=1 ||opc!=2 ||opc!=3||opc!=4||opc!=5||opc!=6);
}
void basica(){
	int op,sun,miku; //variables para el bendito menu xd y menu de menus dx....
	cout<<"\nBienvenido ala seccion de sentencias basicas. ";
	cout<<"\nAqui te dejaremmos opciones de que tipo de sentencias en especifico,que usted elegira para probar o mirar\n";
	do{
	cout<<"Opciones.\n";
	cout<<"Opcion 1-muestra de la sentencia if/else.\n";
	cout<<"Opcion 2-Muestra del bucle while.\n";
	cout<<"Opcion 3-Muestra del bucle del do/while.\n";
	cout<<"Opcion 4-Muestra del bucle 'For'.\n";
	cout<<"Opcion 5-Muestra del Switch.\n";
	cout<<"Opcion 6-Operador basico, pequenia muestra de char.\n";
	cout<<"Opcion 7-Muestra de funciones normales y tipo void.\n";
	cout<<"Opcion 8-Salir del programa.\n";
	cout<<"Opcion 9-Retornar al menu principal.\n";
	cout<<"Opcion: ";
	cin>>op;
	switch(op){
		case 1:
			do{
			cout<<"\nBienvenido a la seccion de muestra de las sentencias if y else, y de como funcionan.\n";
			cout<<"Escoja una opcion:\n"; 
			cout<<"Opcion 1-Ejecutar programa para ver como funciona.\nOpcion 2-Ver el codigo para ver la logica aplicada en el ejercicio.\nOpcion: 3-salir del programa.\nOpcion: 4-Retornar al menu.\n";
			cout<<"Opcion: ";
			cin>>sun;
			switch(sun){
				case 1:
		    sentenciaifelse();
			 system("cls");
			 return basica();
					break;
				case 2:
			 msentenciaifelse();	
			 return basica();
					break;
				case 3:
					exit(1);
					break;
				case 4:
					return basica();
					break;
				default:
					cout<<"\nPor favor digite una de las opciones existentes.";
					break;
			}
			}while(sun!=3);
			break;
		case 2:
			cout<<"\nBienvenido a la seccion de muestra del bucle while, y de como funciona.";
			do{
			cout<<"Escoja una opcion:\n";
			cout<<"Opcion 1-Ejecutar programa para ver como funciona.\nOpcion 2-Ver el codigo para ver la logica aplicada en el ejercicio.\nOpcion 3-Para salir del programa.\nOpcion 4-Retornar al menu.\n";
			cout<<"Opcion: ";
			cin>>sun;
				switch(sun){
				case 1:
		        buwhile();
			 system("cls");
					break;
				case 2:
		  		 mbuwhile();		
					break;
				case 3:
				exit(1);
					break;
				case 4:
					return basica();
					break;
				default:
					cout<<"\nPor favor digite una de las opciones existentes.";
					break;
			}
			}while(sun!=3);
			break;
		case 3:
			cout<<"\nBienvenido a la seccion de muestra de los bucles do/while, y de como funcionan.\n";
			do{
			cout<<"Escoja una opcion:\n";
			cout<<"Opcion 1-Ejecutar programa para ver como funciona.\nOpcion 2-Ver el codigo para ver la logica aplicada en el ejercicio.\nOpcion 3-Para salir del programa.\nOpcion 4-Retronar al menu.\n";
			cout<<"Opcion: ";
			cin>>sun;
				switch(sun){
				case 1:
			 dowhile();
			 system("cls");
			 return basica();
					break;
				case 2:
			 mdowhile();
			 system("cls");
			 return basica();	
					break;
				case 3:
					exit(1);
					break;
				case 4:
					return basica();
					break;
				default:
					cout<<"\nPor favor digite una de las opciones existentes.";
					break;
			}
			}while(sun!=3);
			break;
		case 4:
			cout<<"\nBienvenido a la seccion de muestra del bucle 'For', y de como funciona.\n";
			do{
			cout<<"Escoja una opcion:\n";
			cout<<"Opcion 1-Ejecutar programa para ver como funciona.\nOpcion 2-Ver el codigo para ver la logica aplicada en el ejercicio.\nOpcion 3-Para salir del programa.\nOpcion 4-retornar al menu.\n";
			cout<<"Opcion: ";
			cin>>sun;
				switch(sun){
				case 1:
			 forbuc();
			 system("cls");
			 return basica();
					break;
				case 2:
			 mforbuc();		
			 return basica();
					break;
				case 3:
					exit(1);
					break;
				case 4:
					return basica();
					break;
				default:
					cout<<"\nPor favor digite una de las opciones existentes.";
					break;
			}
			}while(sun!=3);
			break;
			case 5:
				cout<<"\nBienvenido a la seccion de muestra del Switch, y de como funciona.\n";
			do{
			cout<<"Escoja una opcion:\n";
			cout<<"Opcion 1-Ejecutar programa para ver como funciona.\nOpcion 2-Ver el codigo para ver la logica aplicada en el ejercicio.\nOpcion 3-Salir del programa.\nOpcion 4-retornar al menu.\n";
			cout<<"Opcion: ";
			cin>>sun;
				switch(sun){
				case 1:
			 elswitch();
			 system("cls");
					break;
				case 2:
			 melswitch();		
					break;
				case 3:
					exit(1);
					break;
				case 4:
					return basica();
					break;
				default:
					cout<<"\nPor favor digite una de las opciones existentes.";
					break;
			}
			}while(sun!=3);
			break;
	   	case 6:
			cout<<"\nBienvenido a la seccion de muestra de algunos operadores basicos mas, y de como funcionan.\n";
			do{
			cout<<"Escoja una opcion:\n";
			cout<<"Opcion 1-Ejecutar programa para ver como funciona.\nOpcion 2-Ver el codigo para ver la logica aplicada en el ejercicio.\nOpcion 3-Para salir del programa.\nOpcion 4-retornar al menu.\n";
			cout<<"Opcion: ";
			cin>>sun;
				switch(sun){
				case 1:
				 algun();
			 system("cls");
					break;
				case 2:
			 malgun();		
					break;
				case 3:
					exit(1);
					break;
				case 4:
					return basica();
					break;
				default:
					cout<<"\nPor favor digite una de las opciones existentes.";
					break;
			}
			}while(sun!=3);
			break;
		case 7:
			cout<<"\nBienvenido a la seccion de muestra de funciones.\n";
			do{
			cout<<"Escoja una opcion:\n";
			cout<<"Opcion 1-Ejecutar programa para ver como funciona.\nOpcion 2-Ver el codigo para ver la logica aplicada en el ejercicio.\nOpcion 3-para salir del programa.\nOpcion 4-retornar al menu.\n";
			cout<<"Opcion: ";
			cin>>sun;
				switch(sun){
				case 1:
					cout<<"\nBienvenido al apartado de funciones cual ejercicio de funciones deseara usar.\n";
					cout<<"Escoja una opcion.\n";
					do{
					cout<<"Opcion 1-Usando Funcion tipo standart o normales.\nOpcion 2-Usando Funcion tipo void.\nOpcion 3-Salir del programa.\nOpcion 4-retornar al menu.\n";
					cout<<"Opcion: ";
					cin>>miku;
					switch(miku){
						case 1:
							funciones();
							system("cls");
							return basica();
							break;
						case 2:
							funciones2();
							system("cls");
							return basica();
							break;
						case 3:
							exit(1);
						break;
						case 4:
							return basica();
							break;
						default:
							cout<<"\nIngrese una funcion en el rango de opciones\n";
							break;
					}
				}while(miku!=3);
			 system("cls");
					break;
				case 2:
						cout<<"\nBienvenido al apartado de funciones cual ejercicio de funciones deseara mirar.\n";
						cout<<"Aqui podra mirar como estan compuestos esos ejercicios y mirar la logica usada en esas funciones.\n";
						cout<<"Escoja una opcion.\n";
					do{
					cout<<"Opcion 1-Mostrar Funcion tipo standart o normales.\nOpcion 2-Mostrar Funcion tipo void.\nOpcion 3-Salir del programa.\nOpcion 4-retornar al menu.\n";
					cout<<"Opcion: ";
					cin>>miku;
					switch(miku){ //menu para funciones
						case 1:
							mfunciones();
							system("cls");
							return basica();
							break;
						case 2:
							mfunciones2();
							system("cls");
							return basica();
							break;
						case 3:
							exit(1);
						break;
						case 4:
							return basica();
							break;
						default:
							cout<<"\nIngrese una funcion en el rango de opciones\n";
							break;
					}
				}while(miku!=4);
					break;
				case 3:
					exit(1);
					break;
				case 4:
					return basica();
					break;
				default:
					cout<<"\nPor favor digite una de las opciones existentes.";
					break;
			}
			}while(sun!=3);
			break;
		case 8:
			cout<<"\nAdios-Bye bye - Sayonara!!\n";
			system("pause");
			exit(1); //salida del programa........
			break;
		default:
			cout<<"\nPor favor digite una opcion correcta.\n";
			break;
		}
	}while(op!=8 and op!=9);
}
void sentenciaifelse(){
	string valor;
	while(true){ //diseñe esto para que pueda abrir el programa en todos lo uso de manera igual para abrir los archivos.exe
		cout<<"Opcion: 1-Ejecutar el programa.\n";
		cout<<"Opcion: 2-Salir.\n";
		cout<<"Opcion: ";
		cin>>valor;
		if(valor =="1"){
			system("C:\\Users\\elult\\Downloads\\Trabajo_practico_ByOliverGamarra\\basicasIFelse.exe");
			system("pause");
			break;
		}else{
			exit(1);
		}
	}
}
void msentenciaifelse(){
	ifstream exe; //Nota!!!:se llama exe por que al principio creia que usando esta forma ejecutaria el exe. pero es el nombre de archivo a leer...
	string text;
	exe.open("C:\\Users\\elult\\Downloads\\Trabajo_practico_ByOliverGamarra\\basicasIFelse.cpp",ios::in); //abrimos el archivo en modo lectura..
	if(exe.fail()){
		cout<<"\nNo se pudo abrir el archivo.\n";
		exit(1);
	}
	while(!exe.eof()){ //miebtras no sea el final del archivo...
		getline(exe,text);
		cout<<text<<endl;
	}
	system("pause");
	exe.close();//y se cierra el archivo llamado denominado exe..
}
void buwhile(){
		string valor;
	while(true){
		cout<<"Opcion: 1-Ejecutar el programa.\n";
		cout<<"Opcion: 2-Salir.\n";
		cout<<"Opcion: ";
		cin>>valor;
		if(valor =="1"){
			system("C:\\Users\\elult\\Downloads\\Trabajo_practico_ByOliverGamarra\\Bwhile.exe");
			system("pause");
			break;
		}else{
			exit(1);
		}
	}
}
void mbuwhile(){
		ifstream exe;
	string text;
	exe.open("C:\\Users\\elult\\Downloads\\Trabajo_practico_ByOliverGamarra\\Bwhile.cpp",ios::in); //abrimos el archivo en modo lectura..
	if(exe.fail()){
		cout<<"\nNo se pudo abrir el archivo.\n";
		exit(1);
	}
	while(!exe.eof()){ //miebtras no sea el final del archivo...
		getline(exe,text);
		cout<<text<<endl;
	}
	system("pause");
	exe.close();//y se cierra el exe..
}
void dowhile(){
		string valor;
	while(true){ 
		cout<<"Opcion: 1-Ejecutar el programa.\n";
		cout<<"Opcion: 2-Salir.\n";
		cout<<"Opcion: ";
		cin>>valor;
		if(valor =="1"){
			system("C:\\Users\\elult\\Downloads\\Trabajo_practico_ByOliverGamarra\\DoWhileB.exe");
			system("pause");
			break;
		}else{
			exit(1);
		}
	}
}
void mdowhile(){
		ifstream exe;
	string text;
	exe.open("C:\\Users\\elult\\Downloads\\Trabajo_practico_ByOliverGamarra\\DoWhileB.cpp",ios::in); //abrimos el archivo en modo lectura..
	if(exe.fail()){
		cout<<"\nNo se pudo abrir el archivo.\n";
		exit(1);
	}
	while(!exe.eof()){ //miebtras no sea el final del archivo...
		getline(exe,text);
		cout<<text<<endl;
	}
	system("pause");
	exe.close();//y se cierra el exe..
}
void forbuc(){
			string valor;
	while(true){
		cout<<"Opcion: 1-Ejecutar el programa.\n";
		cout<<"Opcion: 2-Salir.\n";
		cout<<"Opcion: ";
		cin>>valor;
		if(valor =="1"){
			system("C:\\Users\\elult\\Downloads\\Trabajo_practico_ByOliverGamarra\\Bucfor.exe");
			system("pause");
			break;
		}else{
			exit(1);
		}
	}
}
void mforbuc(){
		ifstream exe;
	string text;
	exe.open("C:\\Users\\elult\\Downloads\\Trabajo_practico_ByOliverGamarra\\Bucfor.cpp",ios::in); //abrimos el archivo en modo lectura..
	if(exe.fail()){
		cout<<"\nNo se pudo abrir el archivo.\n";
		exit(1);
	}
	while(!exe.eof()){ //miebtras no sea el final del archivo...
		getline(exe,text);
		cout<<text<<endl;
	}
	system("pause");
	exe.close();//y se cierra el exe..
}
void elswitch(){
	string valor;
	while(true){
		cout<<"Opcion: 1-Ejecutar el programa.\n";
		cout<<"Opcion: 2-Salir.\n";
		cout<<"Opcion: ";
		cin>>valor;
		if(valor =="1"){
			system("C:\\Users\\elult\\Downloads\\Trabajo_practico_ByOliverGamarra\\EjSwitch.exe");
			system("pause");
			break;
		}else{
			exit(1);
		}
	}
}
void melswitch(){
	ifstream exe;
	string text;
	exe.open("C:\\Users\\elult\\Downloads\\Trabajo_practico_ByOliverGamarra\\EjSwitch.cpp",ios::in); //abrimos el archivo en modo lectura..
	if(exe.fail()){
		cout<<"\nNo se pudo abrir el archivo.\n";
		exit(1);
	}
	while(!exe.eof()){ //miebtras no sea el final del archivo...
		getline(exe,text);
		cout<<text<<endl;
	}
	system("pause");
	exe.close();//y se cierra el exe..
}
void algun(){
		string valor;
	while(true){
		cout<<"Opcion: 1-Ejecutar el programa.\n";
		cout<<"Opcion: 2-Salir.\n";
		cout<<"Opcion: ";
		cin>>valor;
		if(valor =="1"){
			system("C:\\Users\\elult\\Downloads\\Trabajo_practico_ByOliverGamarra\\EjChar.exe");
			system("pause");
			break;
		}else{
			exit(1);
		}
	}
}
void malgun(){
	ifstream exe;
	string text;
	exe.open("C:\\Users\\elult\\Downloads\\Trabajo_practico_ByOliverGamarra\\EjChar.cpp",ios::in); //abrimos el archivo en modo lectura..
	if(exe.fail()){
		cout<<"\nNo se pudo abrir el archivo.\n";
		exit(1);
	}
	while(!exe.eof()){ //miebtras no sea el final del archivo...
		getline(exe,text);
		cout<<text<<endl;
	}
	system("pause");
	exe.close();//y se cierra el exe..
}
void funciones(){
		string valor;
	while(true){
		cout<<"Opcion: 1-Ejecutar el programa.\n";
		cout<<"Opcion: 2-Salir.\n";
		cout<<"Opcion: ";
		cin>>valor;
		if(valor =="1"){
			system("C:\\Users\\elult\\Downloads\\Trabajo_practico_ByOliverGamarra\\FuncionesEj.exe");
			system("pause");
			break;
		}else{
			exit(1);
		}
	}
}
void mfunciones(){
	ifstream exe;
	string text;
	exe.open("C:\\Users\\elult\\Downloads\\Trabajo_practico_ByOliverGamarra\\FuncionesEj.cpp",ios::in); //abrimos el archivo en modo lectura..
	if(exe.fail()){
		cout<<"\nNo se pudo abrir el archivo.\n";
		exit(1);
	}
	while(!exe.eof()){ //miebtras no sea el final del archivo...
		getline(exe,text);
		cout<<text<<endl;
	}
	system("pause");
	exe.close();//y se cierra el exe..
}
void funciones2(){
		string valor;
	while(true){
		cout<<"Opcion: 1-Ejecutar el programa.\n";
		cout<<"Opcion: 2-Salir.\n";
		cout<<"Opcion: ";
		cin>>valor;
		if(valor =="1"){
			system("C:\\Users\\elult\\Downloads\\Trabajo_practico_ByOliverGamarra\\Funciones2.exe");
			system("pause");
			break;
		}else{
			exit(1);
		}
	}
}
void mfunciones2(){
	ifstream exe;
	string text;
	exe.open("C:\\Users\\elult\\Downloads\\Trabajo_practico_ByOliverGamarra\\Funciones2.cpp",ios::in); //abrimos el archivo en modo lectura..
	if(exe.fail()){
		cout<<"\nNo se pudo abrir el archivo.\n";
		exit(1);
	}
	while(!exe.eof()){ //miebtras no sea el final del archivo...
		getline(exe,text);
		cout<<text<<endl;
	}
	system("pause");
	exe.close();//y se cierra el exe..
}
void vectorMat(){
	int men1,men2,men3,men4;//para mis menus xd.
	cout<<"\nBienvenido al apartado de Vectores/Arrays y matrices.\n";
	cout<<"A continuacion usted vera como funcionan y se aplican los vectores/arrays y matrices y arreglos,en algortimos.\n";
	do{
	cout<<"-------Seleccione una Opcion.-------\n";
	cout<<"Opcion 1-Ver sobre vectores/arrays.\nOpcion 2-Ver sobre matrices.\nOpcion 3-Ver sobre busquedas.\nOpcion 4-Salir del programa.\n";
	cin>>men1;
	switch(men1){
		case 1:
			cout<<"\nUsted ha elegido el tema sobre vectores o tambien conocidos como arrays en ingles.\n";
			cout<<"Nota: Un array es una coleccion de datos del mismo tipo, que se almacenan en posiciones,\nconsecutivas de memoria y reciben un nombre en com?n.\n";
			do{
			cout<<"-------Seleccione una opcion.-------\n";
			cout<<"Opcion 1-Hacer  ejercicios de arrays.\nOpcion 2- Revisar el codigo de ejercicio de arrays.\nOpcion 3-Salir del programa.\nOpcion 4-Retornar al menu.\n";
			cin>>men2;
			switch(men2){
				case 1:
					do{
					cout<<"\nUsted ha elegido ejercicios de vectores/arrays.\n";
					cout<<"ingrese numero 1 para ejercicio '1' y numero 2 para el ejercicio '2'.\n O ingrese la '3' para retormar al menu y 4 para salir del programa.\n";
					cout<<"Opcion: "<<endl;
					cin>>men3;
					switch(men3){
						case 1:
						do{
							cout<<"\nEscoja cual ejercicio desea mirar.\n";
							cout<<"Opcion: '1' para ejercicio 1 y opcion 2 para el ejercicio 2.\n";
							cin>>men4;
							switch(men4){
								case 1:
										cout<<"\nUsted ha selecionado el ejercicio 1.\n";
										vecEjer1();
										return vectorMat();
										break;
								case 2:
										cout<<"\nUsted ha seleccionado el ejercicio 2.\n";
										vecEjer2();
										return vectorMat();
										break;
							}
						}while(men4!=1 or men4!=2);
							 return vectorMat();
							 break;
						case 2:
							do{
							cout<<"\nSeleccione 1 para ver codigo de ejercicio 1 y 2 para el codigo del ejercicio 2. y 3 retornar al menu.\n";
							cin>>men3;
							switch(men3){
								case 1:
									mvecEjer1();
									return vectorMat();
								break;
								case 2:
							  mvecEjer2();
								return vectorMat();
								break;
							case 3:
							return vectorMat();
							break;
							default:
								cout<<"\nDigite una opcion valida...\n";
								break;
						}
					}while(men3!=3);
							return vectorMat();
							break;
						case 3:
							
							return vectorMat();
							break;
						case 4: 
							exit(1);
							break;
						default: 
							cout<<"\nPor favor ingrese la opcion correcta.\n";
							return vectorMat();
							break;
					}
				}while(men3!=4);
					break;
				case 2:

					break;
				case 3:
					exit(1);
					break;
				case 4:
				return vectorMat();
				break;
				default: 
				cout<<"\n Por favor, ingrese una opcion valida.\n";
				break;
			}
		}while(men2!=3);
			break;
		case 2:
				cout<<"\nUsted ha elegido el tema de matrices.\n";
			cout<<"Nota: \n";
			do{
			cout<<"-------Seleccione una opcion.-------\n";
			cout<<"Opcion 1-Hacer un ejercicio de matrices.\nOpcion 2- Revisar el codigo de ejercicio de matrices.\nOpcion 3-Salir del programa.\nOpcion 4-Retornar al menu.\n";
			cin>>men2;
			switch(men2){
				case 1:
					do{
					cout<<"\nBienvenido al apartado de matrices\n";
					cout<<"Opcion 1 ejercicio 1, Opcion 2 ejercicio 2 y opcion 3 retornar al menu.\n";
					cout<<"Opcion: ";
					cin>>men3;
					switch(men3){
						case 1:
							mat1();
							return vectorMat();
							break;
						case 2:
							mat2();
							return vectorMat();
							break;
						case 3:
							return vectorMat();
							break;
						default:
							cout<<"\nIngrese Opcion valida..\n";
							break;
					}
					}while(men3!=3);
					break;
				case 2:
					do{
					cout<<"Cual ejercicio desea revisar 1 para Ej1 y 2 para EJ2 y 3 retornar al menu.\n";
					cin>>men3;
					switch(men3){
						case 1:
							mosmat1();
							return vectorMat();
							break;
						case 2:
							mosmat2();
							return vectorMat();
							break;
						case 3:
							return vectorMat();
							break;
						default:
							cout<<"\nIngrese una opcion valida.\n";
							break;
					}
				}while(men3!=3);
					break;
				case 3:
					exit(1);
					break;
				case 4:
				return vectorMat();
				break;
				default: 
				cout<<"\n Por favor, ingrese una opcion valida.\n";
				break;
			}
		}while(men2!=3);
			break;
		case 3:
		do{
			cout<<"\nUsted ha seleccionado busquedas.\n";
			cout<<"Seleccione una opcion.\n1-Para ver el ejercicio con los 4 tipos de busquedas\n 2 Para ver la logica.\n";
			cout<<"3 Para retornar y 4 para salir del programa.\n";
			cin>>men4;
			switch(men4){
				case 1:
					mostOrdn();
					system("pause");
					system("cls");
					return vectorMat();
					break;
				case 2:
					imprordn();
				system("pause");
					system("cls");
					return vectorMat();
					break;
				case 3:
					return vectorMat();
					break;
				case 4:
					exit(1);
					break;
				default:
					cout<<"\nIngrese una opcion valida.\n";
					return vectorMat();
					break;
			}
		}while(men4!=4);
			break;
		case 4:
			exit(1);
			break;
		default:
			cout<<"\n No ha seleccionado una opcion valida por favor, digite una opcion valida\n";
			return vectorMat();
			break;
	}
	}while(men1!=4);
}
void vecEjer1(){
		string valor;
	while(true){
		cout<<"Opcion: 1-Ejecutar el programa.\n";
		cout<<"Opcion: 2-Salir.\n";
		cout<<"Opcion: ";
		cin>>valor;
		if(valor =="1"){
			system("C:\\Users\\elult\\Downloads\\Trabajo_practico_ByOliverGamarra\\VectoresEj1.exe");
			system("pause");
			break;
		}else{
			exit(1);
		}
	}
}
void vecEjer2(){
		string valor;
	while(true){
		cout<<"Opcion: 1-Ejecutar el programa.\n";
		cout<<"Opcion: 2-Salir.\n";
		cout<<"Opcion: ";
		cin>>valor;
		if(valor =="1"){
			system("C:\\Users\\elult\\Downloads\\Trabajo_practico_ByOliverGamarra\\VectoresEj2.exe");
			system("pause");
			break;
		}else{
			exit(1);
		}
	}
}
void mvecEjer1(){
		ifstream exe;
	string text;
	exe.open("C:\\Users\\elult\\Downloads\\Trabajo_practico_ByOliverGamarra\\VectoresEj1.cpp",ios::in); //abrimos el archivo en modo lectura..
	if(exe.fail()){
		cout<<"\nNo se pudo abrir el archivo.\n";
		exit(1);
	}
	while(!exe.eof()){ //miebtras no sea el final del archivo...
		getline(exe,text);
		cout<<text<<endl;
	}
	system("pause");
	exe.close();//y se cierra el exe..
}
void mvecEjer2(){
		ifstream exe;
	string text;
	exe.open("C:\\Users\\elult\\Downloads\\Trabajo_practico_ByOliverGamarra\\VectoresEj2.cpp",ios::in); //abrimos el archivo en modo lectura..
	if(exe.fail()){
		cout<<"\nNo se pudo abrir el archivo.\n";
		exit(1);
	}
	while(!exe.eof()){ //miebtras no sea el final del archivo...
		getline(exe,text);
		cout<<text<<endl;
	}
	system("pause");
	exe.close();//y se cierra el exe..
}
void mat1(){
		string valor;
	while(true){
		cout<<"Opcion: 1-Ejecutar el programa.\n";
		cout<<"Opcion: 2-Salir.\n";
		cout<<"Opcion: ";
		cin>>valor;
		if(valor =="1"){
			system("C:\\Users\\elult\\Downloads\\Trabajo_practico_ByOliverGamarra\\MatrizEj1.exe");
			system("pause");
			break;
		}else{
			exit(1);
		}
	}
}
void mat2(){
		string valor;
	while(true){
		cout<<"Opcion: 1-Ejecutar el programa.\n";
		cout<<"Opcion: 2-Salir.\n";
		cout<<"Opcion: ";
		cin>>valor;
		if(valor =="1"){
			system("C:\\Users\\elult\\Downloads\\Trabajo_practico_ByOliverGamarra\\MatrizEj2.exe");
			system("pause");
			break;
		}else{
			exit(1);
		}
	}
}
void mosmat1(){
		ifstream exe;
	string text;
	exe.open("C:\\Users\\elult\\Downloads\\Trabajo_practico_ByOliverGamarra\\MatrizEj1.cpp",ios::in); //abrimos el archivo en modo lectura..
	if(exe.fail()){
		cout<<"\nNo se pudo abrir el archivo.\n";
		exit(1);
	}
	while(!exe.eof()){ //miebtras no sea el final del archivo...
		getline(exe,text);
		cout<<text<<endl;
	}
	system("pause");
	exe.close();//y se cierra el exe..
}
void mosmat2(){
		ifstream exe;
	string text;
	exe.open("C:\\Users\\elult\\Downloads\\Trabajo_practico_ByOliverGamarra\\MatrizEj2.cpp",ios::in); //abrimos el archivo en modo lectura..
	if(exe.fail()){
		cout<<"\nNo se pudo abrir el archivo.\n";
		exit(1);
	}
	while(!exe.eof()){ //miebtras no sea el final del archivo...
		getline(exe,text);
		cout<<text<<endl;
	}
	system("pause");
	exe.close();//y se cierra el exe..
}
void mostOrdn(){
		string valor;
	while(true){
		cout<<"Opcion: 1-Ejecutar el programa.\n";
		cout<<"Opcion: 2-Salir.\n";
		cout<<"Opcion: ";
		cin>>valor;
		if(valor =="1"){
			system("C:\\Users\\elult\\Downloads\\Trabajo_practico_ByOliverGamarra\\OrdenamientosEx.exe");
			system("pause");
			break;
		}else{
			exit(1);
		}
	}
}
void imprordn(){
		ifstream exe;
	string text;
	exe.open("C:\\Users\\elult\\Downloads\\Trabajo_practico_ByOliverGamarra\\OrdenamientosEx.cpp",ios::in); //abrimos el archivo en modo lectura..
	if(exe.fail()){
		cout<<"\nNo se pudo abrir el archivo.\n";
		exit(1);
	}
	while(!exe.eof()){ //miebtras no sea el final del archivo...
		getline(exe,text);
		cout<<text<<endl;
	}
	system("pause");
	exe.close();//y se cierra el exe..
}
void AR(){
	string valor;
	while(true){
		cout<<"Opcion: 1-Ejecutar el programa.\n";
		cout<<"Opcion: 2-Salir.\n";
		cout<<"Opcion: ";
		cin>>valor;
		if(valor =="1"){
			system("C:\\Users\\elult\\Downloads\\Trabajo_practico_ByOliverGamarra\\ArchivosMD.exe");
			system("pause");
			break;
		}else{
			exit(1);
		}
	}	
}
void MAR(){
	ifstream exe;
	string text;
	exe.open("C:\\Users\\elult\\Downloads\\Trabajo_practico_ByOliverGamarra\\ArchivosMD.cpp",ios::in); //abrimos el archivo en modo lectura..
	if(exe.fail()){
		cout<<"\nNo se pudo abrir el archivo.\n";
		exit(1);
	}
	while(!exe.eof()){ //miebtras no sea el final del archivo...
		getline(exe,text);
		cout<<text<<endl;
	}
	system("pause");
	exe.close();//y se cierra el exe..
}
void hana(){
		string valor;
	while(true){
		cout<<"Opcion: 1-Ejecutar el programa.\n";
		cout<<"Opcion: 2-Salir.\n";
		cout<<"Opcion: ";
		cin>>valor;
		if(valor =="1"){
			system("C:\\Users\\elult\\Downloads\\Trabajo_practico_ByOliverGamarra\\ArbolesTp.exe");
			system("pause");
			break;
		}else{
			exit(1);
		}
	}
}
void Mhana(){
		ifstream exe;
	string text;
	exe.open("C:\\Users\\elult\\Downloads\\Trabajo_practico_ByOliverGamarra\\ArbolesTp.cpp",ios::in); //abrimos el archivo en modo lectura..
	if(exe.fail()){
		cout<<"\nNo se pudo abrir el archivo.\n";
		exit(1);
	}
	while(!exe.eof()){ //miebtras no sea el final del archivo...
		getline(exe,text);
		cout<<text<<endl;
	}
	system("pause");
	exe.close();//y se cierra el exe..
}
