#pragma once
#include<iostream>
#include<string.h>
using namespace std;

class estudiantes
{
private:
	string nombre;
	int edad;
	string materia;
	float calificacion;
public:
	estudiantes();
	~estudiantes();
	void set_nombre(string _n);
		string get_nombre();
};
