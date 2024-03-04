#include "estudiantes.h"
#include <iostream>
#include <string>
using namespace std;

estudiantes::estudiantes() {
}

estudiantes::~estudiantes() {
}
void estudiantes::set_nombre(string _n) {
	nombre = _n;
}
string estudiantes::get_nombre(){
	return nombre;
}
