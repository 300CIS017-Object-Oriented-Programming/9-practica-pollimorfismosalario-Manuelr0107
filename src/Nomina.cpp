#include "Nomina.h"

#include "Nomina.h"
#include <iostream>
using namespace std;

void Nomina::inicializarDatos() {
    empleados.push_back(new EmpleadoJunior("Ana", 2000));
    empleados.push_back(new EmpleadoJunior("Pedro", 1800));
    empleados.push_back(new EmpleadoSenior("Luis", 3000));
    empleados.push_back(new EmpleadoSenior("Natalia", 3200));
    empleados.push_back(new LiderTecnico("Marta", 4000));
    empleados.push_back(new LiderTecnico("Jorge", 4100));
    empleados.push_back(new EmpleadoTester("Carla", 2200));
    empleados.push_back(new EmpleadoTester("Sofia", 2300));
}

void Nomina::procesarNomina() {
    cout << " Nomina de empleados " << endl;
    for (Empleado* e : empleados) {
        cout << e->getNombre() << " gana: " << e->calcularSalario() << endl;
    }
}

double Nomina::totalPagar() {
    double total = 0;
    for (Empleado* e : empleados) {
        total += e->calcularSalario();
    }
    return total;
}


