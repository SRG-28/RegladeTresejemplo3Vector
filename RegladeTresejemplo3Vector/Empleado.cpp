#include "Empleado.h"



Empleado::Empleado(string cedula, string nombre, int cantHijos, int* vec)
	:cedula(cedula), nombre(nombre), cantHijos(cantHijos), vecAnios(vec){

}
//Constructor copia
Empleado::Empleado(const Empleado& e2)
{
	this->cedula = e2.cedula;
	this->nombre = e2.nombre;
	this->cantHijos = e2.cantHijos;
	if (cantHijos != 0) {
		vecAnios = new int[cantHijos];//creación vect, enteros
		for (int i = 0; i < cantHijos; i++) {
			vecAnios[i] = e2.vecAnios[i];
		}
	}
	else {
		vecAnios = NULL;
	}
}



Empleado::~Empleado()
{
	delete[]vecAnios;
}

Empleado& Empleado::operator=(const Empleado& e2)
{
	if (this== &e2)
	{//la idea es que los objetos sean diferentes
		this->cedula = e2.cedula;
		this->nombre = e2.nombre;
		this->cantHijos = e2.cantHijos;
		if (this->vecAnios != NULL) //Aqui exist un vect de anios que no me interesa
			delete[]vecAnios;
			vecAnios = new int[cantHijos];
			for (int i = 0; i < cantHijos; i++) {
				vecAnios[i] = e2.vecAnios[i];
			}

	}
	return *this;
}

ostream& operator<<(ostream& out, const Empleado& emple)
{
	out << " Cedula: " << emple.cedula << endl
		<< " Nombre: " << emple.nombre << endl
		<< " Cantidad Hijos: " << endl;
	if (emple.cantHijos != 0) {
		//Aquí seguir+ia el despliegue de la información de la edad de los hijos
		for (int i = 0; i < emple.cantHijos; i++)
			out << "Hijo No. " << i + 1 << "tiene --> " << emple.vecAnios[i] << "anios" << endl;
	}
	return out;
}