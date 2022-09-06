#include"Empleado.h"

int main() {
	cout << "------------------------Regla de Tres-----------------------" << endl;
	cout << "------------------------------------------------------------" << endl;
	cout << "-------------Primero creamos un Vector de Hijos-------------" << endl;
	string cedula = "1234567";
	string nombre = "Luis";
	int numeroHijos = 4;
	int* vectH = new int[4];
	vectH[0] = 12;//Edad del hijo No1
	vectH[1] = 14;//Edad del hijo No2
	vectH[2] = 16;//Edad del hijo No3
	vectH[3] = 18;//Edad del hijo No4

	cout << "--------------Jugando con objeto empleados-----------------" << endl;
	cout << "--------Creacion de un empleado totalmente vacio-----------" << endl;
	Empleado* emp1 = new Empleado;
	cout << " ------------------Imprimiendo empleado 1: -----------------" << endl;
	cout << *emp1 << endl;
	cout << endl << endl;

	cout << "--------Creacion de un empleado totalmente lleno-----------" << endl;
	cout << " ------------------Imprimiendo empleado 2: -----------------" << endl;
	Empleado* empl2 = new Empleado(cedula, nombre, numeroHijos, vectH);
	cout << *empl2 << endl;
	cout << endl << endl;

	cout << "--------Creacion de un empleado constructor copia-----------" << endl;
	cout << " ------------------con ayuda del empleado 2: ---------------" << endl;
	Empleado* empl4 = new Empleado(*empl2);
	cout << " ------------------Imprimiendo empleado 4: -----------------" << endl;
	cout << *empl4 << endl;
	cout << endl << endl;

	cout << "--------Creacion de un empleado constructor usando-----------" << endl;
	cout << " -----------------la informacion del empleado 4--------------" << endl;
	cout << " --------------------- al empleado 1-------------------------" << endl;
	*emp1 = *empl4;
	cout << " -------------Imprimiendo empleado 1 de nuevo: --------------" << endl;
	cout << *emp1 << endl;
	cout << endl << endl;

	system("pause");
	return 0;

}