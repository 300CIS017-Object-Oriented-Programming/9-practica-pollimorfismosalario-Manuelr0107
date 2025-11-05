#ifndef INC_9_PRACTICA_POLLIMORFISMOSALARIO_MANUELR0107_EMPLEADOSENIOR_H
#define INC_9_PRACTICA_POLLIMORFISMOSALARIO_MANUELR0107_EMPLEADOSENIOR_H

#include <iostream>
#include <string>
#include "Empleado.h"

class EmpleadoSenior : public Empleado{
public:

    EmpleadoSenior();

    EmpleadoSenior(std::string nombre, double salario);

    double calcularSalario() override;

};



#endif //INC_9_PRACTICA_POLLIMORFISMOSALARIO_MANUELR0107_EMPLEADOSENIOR_H