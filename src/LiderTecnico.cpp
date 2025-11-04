#include "LiderTecnico.h"


LiderTecnico::LiderTecnico() : Empleado(nombre, salario) {
    nombre = "";
    salario = 0;
}

LiderTecnico::LiderTecnico(std::string nombre, double salario) : Empleado(nombre, salario){};


double LiderTecnico::calcularSalario() {
    return salario * (1.25) ;
}