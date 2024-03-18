#include "matriz.h"
#include <iostream>
using namespace std;
matrix::matrix() {
}//CONSTRUCTOR

matrix::~matrix() {
}//DESTRUCTOR

//Metodos que modifican o retornan los atributos
void matrix::set_fila(int _fila) {
	fila = _fila;
}

int matrix::get_fila(){
	return fila;
}

void matrix::set_col(int _col) {
	col = _col;
}

int matrix::get_col() {
	return col;
}

void matrix::mostrarmat(int Mat[MAX][MAX], int m, int n) {
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++) {
			cout << Mat[i][j] << "\t";
		}
		cout << endl;
	}
}

void matrix::cargarmat(int Mat[MAX][MAX], int m, int n) {
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++) {
			cout << "Mat[" << i << "][" << j << "]= ";
			cin >> Mat[i][j];
		}
}

float matrix::promedio(int Mat[MAX][MAX], int m, int n) {
	float prom, s = 0;
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
			s = s + Mat[i][j];
	prom = s / (m * n);
	return prom;
}

int matrix::mayor(int Mat[MAX][MAX], int m, int n) {
	int may = Mat[0][0];
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
			if (Mat[i][j] > may)
				may = Mat[i][j];
	return may;
}
