#ifndef INC_9_PRACTICA_POLLIMORFISMOSALARIO_MANUELR0107_EMPLEADO_H
#define INC_9_PRACTICA_POLLIMORFISMOSALARIO_MANUELR0107_EMPLEADO_H

#include <iostream>
#include <string>

class Empleado {
protected:
    std::string nombre;
    double salario;

private:

public:
    Empleado(std::string &nombre, double &salario);

    virtual double calcularSalario() = 0;

};


#endif //INC_9_PRACTICA_POLLIMORFISMOSALARIO_MANUELR0107_EMPLEADO_H