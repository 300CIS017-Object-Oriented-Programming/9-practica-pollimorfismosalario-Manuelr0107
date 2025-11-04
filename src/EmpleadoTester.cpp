#include "EmpleadoTester.h"

EmpleadoTester::EmpleadoTester() : Empleado(nombre, salario) {
    nombre = "";
    salario = 0;
}

EmpleadoTester::EmpleadoTester(std::string nombre, double salario) : Empleado(nombre, salario){};


double EmpleadoTester::calcularSalario() {
    return salario * (1.05) ;
}