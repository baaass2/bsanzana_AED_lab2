
#include <iostream>
#include <string>
#include "Pilas.h"
using namespace std;

int main()  {

    int N = 0;
	int stop= 0;
	int opc = 0;
	int dato=0;
	
    cout << "¿Tamaño de pila ?: ";cin >> N;
	Pilas p = Pilas(0, N);
	while(stop != 1){
		cout << "-----------------------" <<endl;
		cout << "Agregar/push [1]" <<endl;
		cout << "Remover/pop [2]" <<endl;
		cout << "Ver pila [3]" <<endl;
		cout << "Salir[0]" <<endl;
		cout << "¿Ingrese opc: ";cin >> opc;
		
		if(opc==0){
			stop=1;
		}
		else if(opc ==1){
			cout << "Ingrese dato: ";cin >> dato;
			p.push(dato);
		}
		else if(opc == 2){
			p.pop();
		}
		else if(opc == 3){
			p.imprimir();
		}
	}
}
	
