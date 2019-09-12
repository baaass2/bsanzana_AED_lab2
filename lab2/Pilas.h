#include <iostream>
#include <string>
using namespace std;

#ifndef PILAS_H
#define PILAS_H

class Pilas{
    private:
        int *array;
        int tope = 0;
		int max = 0;
    public:
        Pilas();
        Pilas(int tope, int max);
        
        bool pilaVacias();
		bool pilaLlena();
		void push(int dato);
		void pop();
		void imprimir();
};
#endif
