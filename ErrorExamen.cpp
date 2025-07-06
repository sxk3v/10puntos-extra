#include <iostream>
using namespace std;

 string nombreCliente;
 int tipoEntrada;
 double precioEntrada = 0.0;
 char seguirProceso = 'S';
 int contadorGeneral = 0;
 int contadorVIP = 0;
 double ingresoTotalGeneral = 0.0;
 double ingresoTotalVIP = 0.0;
 int cantEntrada;
 double total;
 
   void deseaComprar(){
 	
 	 while (true){
 	 	cout<< "Desea comprar (S/N):  ";
 	 	cin>> seguirProceso;
 	 	if(seguirProceso== 'S' ||  seguirProceso=='s'){	
 	 		 cin.ignore();// limpia el bufer de abajo 
			  break;
		  } else if (seguirProceso== 'N' ||  seguirProceso=='n'){
		  	cout << "NO SE REGISTRO NINGUNA VENTA " << endl;
		    cout << "\n--- FIN DE VENTAS ---" << endl;
            cout << "Generando reporte..." << endl;

           cout << "\n--- Resumen de Tipos de Entradas Vendidas ---" << endl;
           cout << "Entradas Generales vendidas: " << contadorGeneral << endl;
           cout << "Ingreso total por Generales: $" << ingresoTotalGeneral << endl;
           cout << "Entradas VIP vendidas: " << contadorVIP << endl;
           cout << "Ingreso total por VIP: $" << ingresoTotalVIP  << endl;
           cout << "Ingreso total global: $" << ingresoTotalGeneral + ingresoTotalVIP <<
           endl;
           exit (0);// cierra TODO
 	 
		  } else {
		  	cout << "Letra no valida solo: (S/N) " << endl;
		
		  }
		  
		  }
	  }
 
 void solicitar(){   
 	cout << "\nDatos de la venta" <<endl;
 cout << "Ingrese nombre del cliente: ";
 getline(cin, nombreCliente);
 cout << "Seleccione tipo de entrada (1 para General, 2 para VIP): ";
 cin >> tipoEntrada;
 
 cout << "Cuantas entradas desea comprar (MAX/5):" <<endl;
 cin>> cantEntrada;
  while (cantEntrada < 1 || cantEntrada > 5){
  	 cout << "Cantidad INVALIDA"; 
 } 
  
 if (tipoEntrada == 1) {
 precioEntrada = 50.0;
 total= cantEntrada * precioEntrada;
 contadorGeneral+= cantEntrada;
 ingresoTotalGeneral += total;
 } else if (tipoEntrada == 2) {
 precioEntrada = 80.0;
 total=cantEntrada * precioEntrada;
 contadorVIP+= cantEntrada;
 ingresoTotalVIP += total;
 } else {
 cout << "Tipo de entrada invalido. Se asumira General." <<endl;
 precioEntrada = 50.0;
 total= cantEntrada * precioEntrada;
 contadorGeneral+= cantEntrada;
 ingresoTotalGeneral += total;
 } cout << "Entrada para: " << nombreCliente <<  "  (General)" << endl;
 cout << "Precio: $" << total << endl;
 
 
  while (true){
 	 	cout<< "Desea hacer otra compra (S/N)  ";
 	 	cin>> seguirProceso;
 	 	if(seguirProceso== 'S' ||  seguirProceso=='s'){	
 	 	cin.ignore();// limpia el bufer de abajo 
 	 	cout << "\nDatos de la venta" <<endl;
 cout << "Ingrese nombre del cliente: ";
 getline(cin, nombreCliente);
 cout << "Seleccione tipo de entrada (1 para General, 2 para VIP): ";
 cin >> tipoEntrada;
 cout << "Cuantas entradas desea comprar (MAX/5):" <<endl;
 cin>> cantEntrada;
  while (cantEntrada < 1 || cantEntrada > 5){
  	 cout << "Cantidad INVALIDA"; 
 } 
  
  
 if (tipoEntrada == 1) {
 precioEntrada = 50.0;
 total= cantEntrada * precioEntrada;
 contadorGeneral+= cantEntrada;
 ingresoTotalGeneral += total;
 } else if (tipoEntrada == 2) {
 precioEntrada = 80.0;
 total=cantEntrada * precioEntrada;
 contadorVIP+= cantEntrada;
 ingresoTotalVIP += total;
 } else {
 cout << "Tipo de entrada invalido. Se asumira General." <<endl;
 precioEntrada=50.0;
 tipoEntrada=1;
 contadorGeneral++;
 ingresoTotalGeneral += total;
 } cout << "Entrada para: " << nombreCliente << " (" << (tipoEntrada == 1 ? "General"
: "VIP") << ")" << endl;
 cout << "Precio: $" << total << endl;
 
  } else if (seguirProceso== 'N' ||  seguirProceso=='n'){
  
  cout << "\n--- FIN DE VENTAS ---" << endl;
  cout << "Generando reporte..." << endl;

  cout << "\n--- Resumen de Tipos de Entradas Vendidas ---" << endl;
  cout << "Entradas Generales vendidas: " << contadorGeneral << endl;
  cout << "Ingreso total por Generales: $" << ingresoTotalGeneral << endl;
  cout << "Entradas VIP vendidas: " << contadorVIP << endl;
  cout << "Ingreso total por VIP: $" << ingresoTotalVIP  << endl;
  cout << "Ingreso total global: $" << ingresoTotalGeneral + ingresoTotalVIP <<
  endl;
  return;
  
  }else {
  	cout << "Letra no valida solo: (S/N) " << endl;
  }
 cin.ignore();
 
  }

}
 
int main() {
  cout << "--- Sistema de Venta de Entradas ---" <<endl;
  deseaComprar();
  solicitar();
	return 0;
}  
