#include <iostream>
#include <sstream>
#include <cmath>
#include <cstdlib>
#include <string>
#include <limits>
#include <stdio.h>
#include <conio.h>
#include <windows.h>
#include <bitset>
#include <math.h>
#include <locale.h>
#if defined(_WIN32) || defined(WIN32) 
#define gotoxy(x,y) {COORD a;a.X = x; a.Y = y;SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),a);}
#else 
#endif


using namespace std;
void getSuma_Resta_Multiplicacion_Divicion();  //numero 1                                          
void getPar_o_Impar();  //numero 2                  
void getConvertidor_de_Unidades();  //numero 3                             
void getPalindromo();  //numero 4                  
void getConversion_Arabigos_a_Romanos();  //numero 5                
void getConversion_Numeros_a_Letras(); //numero 6            
void getCon_Decimales();  //numero 7            
void getTabla_de_Multiplicar(); //numero 8                
void getTablas_de_Multiplicar(); //numero 9          
void getMultiplicacion_con_Graficas(); //numero 10               
void getDecimal_a_Binario(); //numero 11             
void getDecimal_a_Hexadecimal(); //numero 12   
void getFiguras_Geometricas_Basicas(); // 13
void getMover_un_Punto_en_la_Pantalla(); //14
void getSimulacion_de_un_Cajero(); //15    
void getHipotenusa(); //numero 16   
void getSueldo_Horas_Trabajadas(); //numero 17   
void getNumero_a_Factorial(); //numero 18   
void getTrinomio_al_cuadrado(); //numero 19  
void getMayor_Menor(); //numero 20           
main()
{

   int op;
   while(op != 21)
   { 
        system("color 74");
  		cout << "-------------------------------------------------" <<endl;
      	cout <<"------------------------MENU----------------------" <<endl;
      	cout << "อออออออออออออออออออออออออออออออออออออออออออออออออ" <<endl;
 
        cout<<" [1] Suma_Resta_Multiplicacion_Divicion.\n"<<endl;
        cout<<" [2] Determinar si es par o impar.\n"<<endl;
        cout<<" [3] Convetidor de Unidades.\n"<<endl;   
        cout<<" [4] Determinar si una palabra o un numero es palindromo. \n"<<endl;
        cout<<" [5] Conversion de numeros arabigos a romanos.\n"<<endl;
        cout<<" [6] Conversion de numeros a letras.\n"<<endl;
        cout<<" [7] Conversion de numeros enteros con decimal a letras.\n"<<endl;
        cout<<" [8] Una tabla de multiplicar .\n"<<endl;
        cout<<" [9] Todas las tablas de multiplicar del 1 al 10.\n"<<endl;
        cout<<" [10] Multiplicacion de forma grafica..\n"<<endl;
        cout<<" [11] Conversion de numeros decimales a binario.\n"<<endl;
        cout<<" [12] Conversion de numeros decimales a hexadecimales .\n"<<endl;
        cout<<" [13] Figura Geometrica.\n"<<endl;
        cout<<" [14] Punto en la Pantalla.\n"<<endl;
        cout<<" [15] Simulacion Cajero.\n"<<endl;
        cout<<" [16] Enontrar la hipotenusa.\n"<<endl;
        cout<<" [17] Determinar el Sueldo en Horas Trabajadas.\n"<<endl;
        cout<<" [18] Calcular un Numero a Factorial.\n"<<endl;
        cout<<" [19] Calcular el Trinomio al Cuadrado Perfecto.\n"<<endl;
        cout<<" [20] Identificar el Mayor y Menor de 3 Numeros.\n"<<endl;
        cout<< "<<<<<<<<<<<<<<<<<<<<<>>>>>>>>>>>>>>>>>>>>" << endl;
        cout<< "Digite una opcion: \n"<<endl;
        cin>>op;
        
        switch(op){
    	
            case 1:
               system("cls"); 
			   getSuma_Resta_Multiplicacion_Divicion(); 
        	   system("pause");
            break;
            
			case 2:
               system("cls");
			   getPar_o_Impar(); 
        	   system("pause");
            break;
			
			case 3:
               system("cls");
			   getConvertidor_de_Unidades();        	
        	   system("pause");
            break;
			
			case 4:
               system("cls");
			   getPalindromo();               	
        	   system("pause");
            break;
			
			
			case 5:
               system("cls");
			   getConversion_Arabigos_a_Romanos();  
        	   system("pause");
            break;
			
			case 6:
               system("cls");
			   getConversion_Numeros_a_Letras();   	
        	   system("pause");
            break;
			
			case 7:
               system("cls");
               getCon_Decimales();
        	   system("pause");
            break;
			
			case 8:
               system("cls");
			   getTabla_de_Multiplicar();          	
        	   system("pause");
            break;
			
			case 9:
               system("cls");
			   getTablas_de_Multiplicar();            	
        	   system("pause");
            break;
			
			case 10:
               system("cls");
			   getMultiplicacion_con_Graficas();              	
        	   system("pause");
            break;
			
			case 11:
               system("cls");
			   getDecimal_a_Binario();         	
        	   system("pause");
            break;
			
			case 12:
               system("cls");
			   getDecimal_a_Hexadecimal();        	
        	   system("pause");
            break;     
			
			case 13:
               system("cls");
			   getFiguras_Geometricas_Basicas();        
        	   system("pause");
            break; 
			
			case 14:
               system("cls");
			   getMover_un_Punto_en_la_Pantalla();        
        	   system("pause");
            break; 
			
			case 15:
               system("cls");
			   getSimulacion_de_un_Cajero();     	
        	   system("pause");
            break;     
			
			case 16:
               system("cls");
			   getHipotenusa();                       	
        	   system("pause");
            break;      
            
            case 17:
               system("cls");
			   getSueldo_Horas_Trabajadas();                       	
        	   system("pause");
            break;  
            
            case 18:
               system("cls");
			   getNumero_a_Factorial();                       	
        	   system("pause");
            break;
            
			case 19:
               system("cls");
			   getTrinomio_al_cuadrado();                       	
        	   system("pause");
            break; 
            
            case 20:
               system("cls");
			   getMayor_Menor();                         	
        	   system("pause");
            break;
        
         }
         
    }while(op != 21);
 
 
}

void getSuma_Resta_Multiplicacion_Divicion(){  //<<<<<<<<<<<<<<<<<<<<<<<<<<< numero 1 >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
double Sumar(double,double);
double Restar(double,double);
double Multiplicar(double,double);
double Dividir(double,double);

    double val1;
    cout << "Ingrese El Primer Valor: ";
    cin >> val1;
    double val2;
    cout << "Ingrese El Segundo Valor: ";
    cin >> val2;
    cout << "-------------------------------------------------" << endl;
	cout << "---------------ELIJA UNA OPCION------------------" << endl;
	cout << "-------------------------------------------------" << endl;
    int operador;
    cout<<"Suma (1): "<<endl;
	cout<<"Resta (2): "<<endl;
	cout<<"Multiplicacion (3): "<<endl;
	cout<<"Division (4): "<<endl;
	cout << "-------------------------------------------------" << endl;
    cin >> operador;
    cout << "---------------EL RESULTADO ES-------------------" << endl;
    switch(operador)
    {
        case 1:
            cout << "\n";
            cout << ">>>>>--- " << Sumar(val1,val2) << " ---<<<<<" << endl;
            cout << "\n";
        break;
        case 2:
            cout << "\n";
            cout << ">>>>>--- " << Restar(val1,val2) << " ---<<<<<" << endl;
            cout << "\n";
        break;
        case 3:
            cout << "\n";
            cout << ">>>>>--- " << Multiplicar(val1,val2) << " ---<<<<<" << endl;
            cout << "\n";
        break;
        case 4:
            cout << "\n";
            cout  << ">>>>>--- " << Dividir(val1,val2) << " ---<<<<<" << endl;
            cout << "\n";
        break;
    }
    
    system("pause");
}


double Sumar(double x,double y)
{
    return x + y;
}


double Restar(double x,double y)
{
    return x - y;
}


double Multiplicar(double x,double y)
{
    return x * y;
}


double Dividir(double x,double y)
{
	if(y==0) 
	   cout <<"MATH ERROR"<< endl;	
}

void getPar_o_Impar(){  //<<<<<<<<<<<<<<<<<<<<<<<<<<< numero 2 >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
int numero;
cout<<"Ingrese el valor: "<<endl;
cin>>numero;
div_t resultado;

resultado=div(numero,2);

    if (resultado.rem>0)

         {
		  cout << "-------------------------------------------------" << endl;
          cout << numero << " Es Impar" << endl;

         }

    else {
		  cout << "-------------------------------------------------" << endl;
          cout << numero << " Es Par" << endl;

         }

cin.get();
}	


void getConvertidor_de_Unidades(){  //<<<<<<<<<<<<<<<<<<<<<<<<<<< numero 3 >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>

	int op;
	float dato;
    printf("Conversiones\n");
    printf("1- Kilometros a Millas\n");
    printf("2- Millas a Kilometros\n");
    printf("3- Metros a Pulgadas\n");
    printf("4- Pulgadas a Metros\n");
    printf("5- Libras a Kilos\n");
    printf("6- Kilos a Libras\n");
    printf("Ingrese opcion: \n");
    scanf("%d",&op);
    
    switch (op)
    {
    case 1:
        printf("Ingrese La Cantidad En Kilometros\n");
        scanf("%f",&dato);
        printf("Por %.2f Kilometros hay %.2f Millas \n",dato,dato*0.621371);
        break;
    case 2:
        printf("Ingrese La Cantidad En Millas\n");
        scanf("%f",&dato);
        printf("Por %.2f Millas hay %.2f Kilometros\n",dato,dato*1.60934);
        
        break;
    case 3:
        printf("Ingrese La Cantidad En Metros\n");
        scanf("%f",&dato);
        printf("Por %.2f Metros hay %.2f Pulgadas\n",dato,dato*39.3701);
        break;
    case 4:
        printf("Ingrese La Cantidad En Pulgadas\n");
        scanf("%f",&dato);
        printf("Por %.2f Pulgadas hay %.2f Metros\n",dato,dato*0.0254);
        break;
    case 5:
        printf("Ingrese La Cantidad En Libras\n");
        scanf("%f",&dato);
        printf("Por %.2f Libras hay %.2f Kilogramo\n",dato,dato*0.453592);
        break;
    case 6:
        printf("Ingrese La Cantidad En Kilogramo\n");
        scanf("%f",&dato);
        printf("Por %.2f Kilogramo hay %.2f Libras\n",dato,dato*2.20462);
        break;    
    }

}
	
void getPalindromo(){  //<<<<<<<<<<<<<<<<<<<<<<<<<<< numero 4 >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
	
	string texto;
    int aux = 0, igual = 0;
    
    cout << "Ingrese la Palabra a Evaluar: ";
    getline(cin >> ws, texto);
    
    for(int ind = texto.length() - 1; ind >= 0; ind--) {
        if(texto[ind] == texto[aux]) {
            igual++;
        }
        aux++;
    }
    
    if(texto.length() == igual) {
        cout << "La Palabra Ingresada es Palindromo" << endl;
    } else {
        cout << "La Palabra Ingresada no es Palindromo" << endl;
    }
	
}

void getConversion_Arabigos_a_Romanos(){  //<<<<<<<<<<<<<<<<<<<<<<<<<<< numero 5 >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
int numero,unidades,decenas,centenas,millar; 
	
	cout<<"Digite un numero: "<<endl;
	cout<<"El Numero en Romano es: "<<endl;
	unidades = numero%10; numero /= 10; 
	decenas = numero%10; numero /= 10; 
	centenas = numero % 10; numero /= 10; 
	millar = numero % 10 ; numero /= 10; 
	
	switch(millar){
		case 1: cout<<"M";
		break;
		case 2: cout<<"MM"; 
		break;
		case 3: cout<<"MMM";
		break;
	}
	
	
	switch(centenas){
		case 1: cout<<"C";
		break;
		case 2: cout<<"CC";
		break;
		case 3: cout<<"CCC";
		break;
		case 4: cout<<"CD";
		break;
		case 5: cout<<"D";
		break;
		case 6: cout<<"DC";
		break;
		case 7: cout<<"DCC";
		break;
		case 8: cout<<"DCCC";
		break;
		case 9: cout<<"CM";
		break;
	}
	
	switch(decenas){
		case 1: cout<<"X";
		break;
		case 2: cout<<"XX";
		break;
		case 3: cout<<"XXX";
		break;
		case 4: cout<<"XL";
		break;
		case 5: cout<<"L";
		break;
		case 6: cout<<"LX";
		break;
		case 7: cout<<"LXX";
		break;
		case 8: cout<<"LXXX";
		break;
		case 9: cout<<"XC";
		break;
	}
	
	switch(unidades){
		case 1: cout<<"I";
		break;
		case 2: cout<<"II";
		break;
		case 3: cout<<"III";
		break;
		case 4: cout<<"IV";
		break;
		case 5: cout<<"V";
		break;
		case 6: cout<<"VI";
		break;
		case 7: cout<<"VII";
		break;
		case 8: cout<<"VIII";
		break;
		case 9: cout<<"IX";
		break;
	}
}

void getConversion_Numeros_a_Letras(){  //<<<<<<<<<<<<<<<<<<<<<<<<<<< numero 6 >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
	
    int main,argc; 
	char** argv; 

 double valor;
 int miles,cientos,unidades,decimales;

 char numeros[100][20] = 
 {
  {""},{"un"},{"dos"},{"tres"},{"cuatro"},{"cinco"},{"seis"},{"siete"},{"ocho"},{"nueve"},
  {"diez"},{"once"},{"doce"},{"trece"},{"catorce"},{"quince"},{"dieciseis"},{"dieceisiete"},{"dieciocho"},{"diecinueve"},
  {"veinte"},{"veintun"},{"veintidos"},{"veintitres"},{"veinticuatro"},{"veinticinco"},{"veintiseis"},{"veintisiete"},{"veintiocho"},{"veintinueve"},
  {"treinta"},{"treinta y uno"},{"treinta y dos"},{"treinta y tres"},{"treinta y cuatro"},{"treinta y cinco"},{"treinta y seis"},{"treinta y siete"},{"treinta y ocho"},{"treinta y nueve"},
  {"cuarenta"},{"cuarenta y uno"},{"cuarenta y dos"},{"cuarenta y tres"},{"cuarenta y cuatro"},{"cuarenta y cinco"},{"cuarenta y seis"},{"cuarenta y siete"},{"cuarenta y ocho"},{"cuarenta y nueve"},
  {"cincuenta"},{"cincuenta y uno"},{"cincuenta y dos"},{"cincuenta y tres"},{"cincuenta y cuatro"},{"cincuenta y cinco"},{"cincuenta y seis"},{"cincuenta y siete"},{"cincuenta y ocho"},{"cincuenta y nueve"},
  {"sesenta"},{"sesenta y uno"},{"sesenta y dos"},{"sesenta y tres"},{"sesenta y cuatro"},{"sesenta y cinco"},{"sesenta y seis"},{"sesenta y siete"},{"sesenta y ocho"},{"sesenta y nueve"},
  {"setenta"},{"setenta y uno"},{"setenta y dos"},{"setenta y tres"},{"setenta y cuatro"},{"setenta y cinco"},{"setenta y seis"},{"setenta y siete"},{"setenta y ocho"},{"setenta y nueve"},
  {"ochenta"},{"ochenta y uno"},{"ochenta y dos"},{"ochenta y tres"},{"ochenta y cuatro"},{"ochenta y cinco"},{"ochenta y seis"},{"ochenta y siete"},{"ochenta y ocho"},{"ochenta y nueve"},
  {"noventa"},{"noventa y uno"},{"noventa y dos"},{"noventa y tres"},{"noventa y cuatro"},{"noventa y cinco"},{"noventa y seis"},{"noventa y siete"},{"noventa y ocho"},{"noventa y nueve"},
 };

 char centenas[10][20] = 
 {
  {""},{"cien"},{"doscientos"},{"trescientos"},{"cuatrocientos"},{"quinientos"},{"seiscientos"},{"sietecientos"},{"ochocientos"},{"novecientos"},
 };
 
 std::cout << "Ingrese un Numero: ";
 std::cin >> valor;

 miles = ((int)valor)/1000;
 cientos = (((int)valor)%1000)/100;
 unidades = ((int)valor)%100;

 if (miles)
  std::cout << numeros[miles] << " mil ";
 
 if (cientos)
  std::cout << centenas[cientos] << " ";
 
 if (unidades) 
  std::cout << numeros[unidades];
  
  std::cout << std::endl;

 system("pause");
 
}
	
void getCon_Decimales(){  //<<<<<<<<<<<<<<<<<<<<<<<<<<< numero 7 >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
	
int main,argc; 
char** argv;
{
 double valor;
 int miles,cientos,unidades,decimales;

 char numeros[100][20] = 
 {
  {""},{"uno"},{"dos"},{"tres"},{"cuatro"},{"cinco"},{"seis"},{"siete"},{"ocho"},{"nueve"},
  {"diez"},{"once"},{"doce"},{"trece"},{"catorce"},{"quince"},{"dieciseis"},{"dieceisiete"},{"dieciocho"},{"diecinueve"},
  {"veinte"},{"veintun"},{"veintidos"},{"veintitres"},{"veinticuatro"},{"veinticinco"},{"veintiseis"},{"veintisiete"},{"veintiocho"},{"veintinueve"},
  {"treinta"},{"treinta y uno"},{"treinta y dos"},{"treinta y tres"},{"treinta y cuatro"},{"treinta y cinco"},{"treinta y seis"},{"treinta y siete"},{"treinta y ocho"},{"treinta y nueve"},
  {"cuarenta"},{"cuarenta y uno"},{"cuarenta y dos"},{"cuarenta y tres"},{"cuarenta y cuatro"},{"cuarenta y cinco"},{"cuarenta y seis"},{"cuarenta y siete"},{"cuarenta y ocho"},{"cuarenta y nueve"},
  {"cincuenta"},{"cincuenta y uno"},{"cincuenta y dos"},{"cincuenta y tres"},{"cincuenta y cuatro"},{"cincuenta y cinco"},{"cincuenta y seis"},{"cincuenta y siete"},{"cincuenta y ocho"},{"cincuenta y nueve"},
  {"sesenta"},{"sesenta y uno"},{"sesenta y dos"},{"sesenta y tres"},{"sesenta y cuatro"},{"sesenta y cinco"},{"sesenta y seis"},{"sesenta y siete"},{"sesenta y ocho"},{"sesenta y nueve"},
  {"setenta"},{"setenta y uno"},{"setenta y dos"},{"setenta y tres"},{"setenta y cuatro"},{"setenta y cinco"},{"setenta y seis"},{"setenta y siete"},{"setenta y ocho"},{"setenta y nueve"},
  {"ochenta"},{"ochenta y uno"},{"ochenta y dos"},{"ochenta y tres"},{"ochenta y cuatro"},{"ochenta y cinco"},{"ochenta y seis"},{"ochenta y siete"},{"ochenta y ocho"},{"ochenta y nueve"},
  {"noventa"},{"noventa y uno"},{"noventa y dos"},{"noventa y tres"},{"noventa y cuatro"},{"noventa y cinco"},{"noventa y seis"},{"noventa y siete"},{"noventa y ocho"},{"noventa y nueve"},
 };

 char centenas[10][20] = 
 {
  {""},{"cien"},{"doscientos"},{"trescientos"},{"cuatrocientos"},{"quinientos"},{"seiscientos"},{"sietecientos"},{"ochocientos"},{"novecientos"},
 };
 
 std::cout << "Ingrese un  Numero: ";
 std::cin >> valor;

 miles = ((int)valor)/1000;
 cientos = (((int)valor)%1000)/100;
 unidades = ((int)valor)%100;
 decimales = ((int) (valor*100.0))%100 ;

 if (miles)
  std::cout << numeros[miles] << " mil ";
 
 if (cientos)
  std::cout << centenas[cientos] << " ";
 
 if (unidades) 
  std::cout << numeros[unidades];
 
 if (decimales)
 {
  if(miles || cientos || unidades)
  {
   std::cout << " con ";
  }
 
  std::cout << numeros[decimales];
 }

 std::cout << std::endl;


 system("pause");

}
}
	
void getTabla_de_Multiplicar(){  //<<<<<<<<<<<<<<<<<<<<<<<<<<< numero 8 >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
	
    int number;
    cout<<"Agregue el numero de la tabla que desea ver :"<<endl;
    cin>>number;
    
    for(int i=1;i<=10;i++){
        int multiplicacion = i * number;
        cout<<number <<" x "<< i <<"="<< multiplicacion <<endl;
    }
	
}

void getTablas_de_Multiplicar(){  //<<<<<<<<<<<<<<<<<<<<<<<<<<< numero 9 >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
	
	int izquierda=1;
	int derecha=1;

cout << "Tablas de Multiplicar" << endl;
while (izquierda <= 10){

cout << izquierda << "x" << derecha << "=" << izquierda*derecha << endl;

if (derecha == 10){
cout << endl;

izquierda++;
derecha=0; 
}

derecha++; 

}

cin.get();
	
}

void getMultiplicacion_con_Graficas()  //<<<<<<<<<<<<<<<<<<<<<<<<<<< numero 10 >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
{       
int n1;
int n2;
float x;
	
cout<<"Igrese el primer valor: ";
cin>>n1;
cout<<"Ingrese su segundo valor: ";
cin>>n2;
x = n1 * n2;
cout<<endl;
cout<<"Su multiplicacion es: "<<endl;
 cout<<"    "<<n1<<endl;
 cout<<"    "<<n2<<endl;
 cout<<"_x_________"<<endl;
 cout<<"   "<<x;
 cout<<endl;

	
}

void getDecimal_a_Binario(){  //<<<<<<<<<<<<<<<<<<<<<<<<<<< numero 11 >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>

	cout<<"Ingrese un numero: \n";
	int numero;
	string binario = "";
	cin>> numero;
	if (numero > 0){
		while (numero > 0){
			if (numero%2 == 0){
				binario = "0"+binario;
			} else {
				binario = "1"+binario;
			}
			numero = (int) numero/2;
		}
	}else if (numero = 0){
			binario ="0";	
}else {
	binario = "No se puede realizar la convercion";	
}  

	cout <<"El resultado de la conversion es: "<< binario<<endl;
}

void getDecimal_a_Hexadecimal(){  //<<<<<<<<<<<<<<<<<<<<<<<<<<< numero 12 >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>         
	
    unsigned long long int decimal = 0;

    char cadena[63];

    printf("Ingresa un numero decimal:\n");
    scanf("%llu", &decimal);

    ltoa(decimal, cadena, 16);
    printf("El numero en hexadecimal es: %s\n", cadena);
    
}

void getFiguras_Geometricas_Basicas(){  //<<<<<<<<<<<<<<<<<<<<<<<<<<< numero 13 >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>> 

 setlocale(LC_CTYPE, "");
 int n;
cout <<"Ingrese un numero para formar un Rombo:";
cin>>n;
for (int j=0;j<n;++j){
 for (int i=0;i<n-j;++i)
  cout<<" ";
 for (int i=0;i<2*j+1;++i)
  cout<<"*";
  cout <<endl;
}
for (int j=n-2;j>=0;--j){
 cout <<" ";
 for (int i=0;i<n-j-1;++i)
  cout<<" ";
 for (int i=0;i<2*j+1;++i)
  cout<<"*";
  cout<<endl; 
}

}

void getMover_un_Punto_en_la_Pantalla(){  //<<<<<<<<<<<<<<<<<<<<<<<<<<< numero 14 >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>> 
	
int argc, tiempo;
char* argv();
char caracter_;


cout<<"INGRESE EL TIEMPO (SEGUNDOS)."<<endl;
cin>>tiempo;
cout<<"INGRESE UN CARACTER"<<endl;
cin>>caracter_;


while ( true )
{
system("cls");
for(int j=0; j<1; j++)
{
Sleep(300*tiempo);
}
int coordenada_1 = rand() % (79+1);
int coordenada_2 = rand() % (23+1);
gotoxy(coordenada_1,coordenada_2);
cout<<caracter_<<endl;
Sleep(300*tiempo);
}
}

void getSimulacion_de_un_Cajero(){  //<<<<<<<<<<<<<<<<<<<<<<<<<<< numero 15 >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>> 
	
 int saldo=6000;
 int op, monto;
 do{
  printf ("Cajero automatico\n");
  printf ("1- Consultar saldo inicial\n");
  printf ("2- Retirar efectivo\n");
  printf ("3- SALIR\n");
  scanf ("%d", &op);
  switch (op){
   case 1:
    printf ("Su saldo inicial es de:%d\n",saldo);
    break;
   case 2:
    printf ("Ingrese monto a retirar\n");
    scanf ("%d", &monto);
    saldo=saldo-monto;
    break;
  }  
 }
 while (op!=3);
 	
}


void getHipotenusa(){ //<<<<<<<<<<<<<<<<<<<<<<<<<<< numero 16 >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>> 
	
float c1,c2,hipo=0;
 
  cout << "Digite cateto 1: ";
  cin >> c1;
  cout << "Digite cateto 2: ";
  cin >> c2;
 
  hipo = sqrt(pow(c1,2)+pow(c2,2));
 
  cout << "La hipotenusa es " << hipo << endl;
  cout<<endl;
	
}

void getSueldo_Horas_Trabajadas(){  //<<<<<<<<<<<<<<<<<<<<<<<<<<< numero 17 >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>> 
	
 int h,t,s;
 puts ("Ingrese las horas trabajadas");
 scanf ("%d",&h);
 if (h<=40)
 {
  t=h*10;
  printf ("\n El total a pagar es de: %d",t);
 }
 else
 {
  s=h-40;
  t=400+(s*20);
  printf ("\n El total a pagar es de: %d",t);
 }
 getch(); 
}

void getNumero_a_Factorial(){  //<<<<<<<<<<<<<<<<<<<<<<<<<<< numero 18 >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
 int num;
 int fact=1;
 printf ("Ingrese el numero\n");
 scanf ("%d", &num);
 if(num<0)
  fact =0;
    else if(num==0)
  fact=1;
    else{
     for (int i = 1; i <= num; i++){
         fact = fact*i;
       }
    }
   printf ("Factorial es: ");
   printf ("%d", fact);
}

void getTrinomio_al_cuadrado(){  //<<<<<<<<<<<<<<<<<<<<<<<<<<< numero 19 >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
int a, b, c, re;
 printf ("factorizacion de un trinomio cuadrado perfecto\n");
 printf ("de la forma ax^2+bx+c\n");
 printf ("ingrese los valores de a, b, y c\n");
 printf ("ingrese el valor de a\n");
 scanf ("%d", &a);
 printf ("ingrese el valor de b\n");
 scanf ("%d", &b);
 printf ("ingrese el valor de c\n");
 scanf ("%d", &c);
 
 if (2*sqrt(a)*sqrt(c)==fabs(b)){
  printf("es un trinomio cuadrado perfecto\n");
  if (b<0){
   printf("El resultado de %dx%dx%d",a,b,c);
   printf(" es : (%.0fx-%.0f)^2",sqrt(a),sqrt(c));
  }else{
   printf("El resultado de %dx+%dx%d",a,b,c);
   printf(" es : (%.0fx+%.0f)^2",sqrt(a),sqrt(c));
  }
 }else{
  printf("no es un trinomio cuadrado perfecto\n");
 }
}
void getMayor_Menor(){  //<<<<<<<<<<<<<<<<<<<<<<<<<<< numero 20 >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
	int menor(int, int, int);
    int mayor(int, int, int);
	cout<<"Ingrese Tres Numeros\n"<<endl;
    cin;
    int a,b,c;
    cout<<"Ingrese El Primer Numero\n";
    cin>>a;
    cout<<"Ingrese El Segundo Numero\n";
    cin>>b;
    cout<<"Ingrese EL Tercer numeros\n";
    cin>>c;
    cout<<"el menor es: "<<menor(a,b,c)<<endl;
    cout<<"el mayor es: "<<mayor(a,b,c)<<endl;
    cin.ignore(); 

}
int menor(int a,int b,int c)
{
    if(a<b) b=a;
    if(a<c) c=a;
    if(b<c) c=b;
return c;
}
int mayor(int a,int b,int c)
{
    if(a>b) b=a;
    if(a>c) c=a;
    if(b>c) c=b;
}
