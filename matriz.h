#pragma once
#define MAX 20
class matrix
{
private:
	int Mat[MAX][MAX];
	int fila;
	int col;
public:
	matrix();//Constructor
	~matrix();//Destructor
	//Metodos que modifican o retornan los atributos
	void set_fila(int _fil);
	int get_fila();
	void set_col(int _col);
	int get_col();
	void mostrarmat(int Mat[MAX][MAX], int m, int n);
	void cargarmat(int Mat[MAX][MAX], int m, int n);
	float promedio(int Mat[MAX][MAX], int m, int n);
	int mayor(int Mat[MAX][MAX], int m, int n);
};
