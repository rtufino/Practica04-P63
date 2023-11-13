#ifndef SUPERVISOR_H
#define SUPERVISOR_H

#include <vector>

#include "persona.h"
#include "vendedor.h"

class Supervisor : public Persona
{
private:
    const float BONO = 400;
    vector<Vendedor*> vendedores;
public:
    const float META = 8500;
    Supervisor();
    Supervisor(string cedula, string nombre, float salario);
    float cerrarVentas();
    void agregarVendendor(Vendedor *v);
};

#endif // SUPERVISOR_H
