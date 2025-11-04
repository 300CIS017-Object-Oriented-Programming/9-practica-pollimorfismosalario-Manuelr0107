#ifndef INC_9_PRACTICA_POLLIMORFISMOSALARIO_MANUELR0107_NOMINA_H
#define INC_9_PRACTICA_POLLIMORFISMOSALARIO_MANUELR0107_NOMINA_H

#include <vector>
#include "Empleado.h"
#include "EmpleadoJunior.h"
#include "EmpleadoSenior.h"
#include "LiderTecnico.h"
#include "EmpleadoTester.h"

class Nomina {
private:
    std::vector<Empleado*> empleados;

public:
    void inicializarDatos();
    void procesarNomina();
    double totalPagar();


};



#endif //INC_9_PRACTICA_POLLIMORFISMOSALARIO_MANUELR0107_NOMINA_H