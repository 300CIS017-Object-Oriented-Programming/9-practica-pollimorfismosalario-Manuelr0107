#ifndef INC_9_PRACTICA_POLLIMORFISMOSALARIO_MANUELR0107_EMPLEADOTESTER_H
#define INC_9_PRACTICA_POLLIMORFISMOSALARIO_MANUELR0107_EMPLEADOTESTER_H


#include <iostream>
#include <string>
#include "Empleado.h"

class EmpleadoTester : public Empleado{
public:

    EmpleadoTester();

    EmpleadoTester(std::string nombre, double salario);

    double calcularSalario() override;

};

#endif //INC_9_PRACTICA_POLLIMORFISMOSALARIO_MANUELR0107_EMPLEADOTESTER_H