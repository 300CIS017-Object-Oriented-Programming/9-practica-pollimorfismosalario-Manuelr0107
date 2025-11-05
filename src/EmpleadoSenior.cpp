#include "EmpleadoSenior.h"

EmpleadoSenior::EmpleadoSenior() : Empleado(nombre, salario) {
    nombre = "";
    salario = 0;
}

EmpleadoSenior::EmpleadoSenior(std::string nombre, double salario) : Empleado(nombre, salario){};


double EmpleadoSenior::calcularSalario() {
    return salario * (1.2) ;
}