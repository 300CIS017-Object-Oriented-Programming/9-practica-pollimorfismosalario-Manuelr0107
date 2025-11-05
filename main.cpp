#include "src/Nomina.h"
#include <iostream>
using namespace std;

int main() {
    Nomina nomina;
    nomina.inicializarDatos();
    nomina.procesarNomina();
    cout << "============================" << endl;
    cout << "Total a pagar: $" << nomina.totalPagar() << endl;
    return 0;
}
