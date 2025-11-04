//
// Created by ACER on 4/11/2025.
//

#ifndef INC_9_PRACTICA_POLLIMORFISMOSALARIO_MANUELR0107_LIDERTECNICO_H
#define INC_9_PRACTICA_POLLIMORFISMOSALARIO_MANUELR0107_LIDERTECNICO_H


#include <iostream>
#include <string>
#include "Empleado.h"

class LiderTecnico : public Empleado{
public:

    LiderTecnico();

    LiderTecnico(std::string nombre, double salario);

    double calcularSalario() override;

};

};



#endif //INC_9_PRACTICA_POLLIMORFISMOSALARIO_MANUELR0107_LIDERTECNICO_H