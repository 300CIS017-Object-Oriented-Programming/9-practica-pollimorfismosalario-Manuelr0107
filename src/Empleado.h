#ifndef INC_9_PRACTICA_POLLIMORFISMOSALARIO_MANUELR0107_EMPLEADO_H
#define INC_9_PRACTICA_POLLIMORFISMOSALARIO_MANUELR0107_EMPLEADO_H

#include <iostream>
#include <string>

class Empleado {
protected:
    std::string nombre;
    int salario;

private:

public:
    virtual double calcularSalario = 0;

};


#endif //INC_9_PRACTICA_POLLIMORFISMOSALARIO_MANUELR0107_EMPLEADO_H