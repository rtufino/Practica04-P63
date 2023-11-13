#ifndef VENDEDOR_H
#define VENDEDOR_H

#include "persona.h"

class Vendedor : public Persona
{
private:
    float ventas;
public:
    Vendedor();
    Vendedor(string cedula, string nombre);
    void vender(float venta);

    float getVentas() const;
};

#endif // VENDEDOR_H
