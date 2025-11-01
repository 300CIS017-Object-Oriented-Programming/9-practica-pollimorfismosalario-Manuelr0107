#ifndef INC_9_PRACTICA_POLLIMORFISMOSALARIO_MANUELR0107_EMPLEADOJUNIOR_H
#define INC_9_PRACTICA_POLLIMORFISMOSALARIO_MANUELR0107_EMPLEADOJUNIOR_H

#include <iostream>
#include <string>
#include "Empleado.h"


class EmpleadoJunior : public Empleado {
public:
    EmpleadoJunior(std::string nombre, int salario);

    double calcularSalario() {
        return salario;
    }

};





#endif //INC_9_PRACTICA_POLLIMORFISMOSALARIO_MANUELR0107_EMPLEADOJUNIOR_H