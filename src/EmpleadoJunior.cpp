#include "EmpleadoJunior.h"

EmpleadoJunior::EmpleadoJunior() : Empleado(nombre, salario) {
    nombre = "";
    salario = 0;
}

EmpleadoJunior::EmpleadoJunior(std::string nombre, double salario) : Empleado(nombre, salario){};


double EmpleadoJunior::calcularSalario() {
    return salario;
}