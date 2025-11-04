#ifndef INC_9_PRACTICA_POLLIMORFISMOSALARIO_MANUELR0107_EMPLEADOJUNIOR_H
#define INC_9_PRACTICA_POLLIMORFISMOSALARIO_MANUELR0107_EMPLEADOJUNIOR_H

#include <iostream>
#include <string>
#include "Empleado.h"


class EmpleadoJunior : public Empleado {
public:

    EmpleadoJunior();

    EmpleadoJunior(std::string nombre, double salario);

    double calcularSalario()override;

};





#endif //INC_9_PRACTICA_POLLIMORFISMOSALARIO_MANUELR0107_EMPLEADOJUNIOR_H