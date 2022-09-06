#pragma once
#include<iostream>
#include<sstream>
#include<string>
using namespace std;

class Empleado {
private:
	string cedula;
	string nombre;
	int cantHijos;
	int* vecAnios;
public:
	Empleado(string = " ", string =" ", int=0, int* =NULL);
	Empleado(const Empleado&);
	virtual ~Empleado();
	Empleado& operator=(const Empleado&);
	friend ostream& operator<<(ostream&, const Empleado&);
};