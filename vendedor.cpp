#include "vendedor.h"

float Vendedor::getVentas() const
{
    return ventas;
}

Vendedor::Vendedor()
{

}

Vendedor::Vendedor(string cedula, string nombre) :
    Persona(cedula, nombre), ventas(0)
{
    this->rol = 'V';
}

void Vendedor::vender(float venta)
{
    ventas += venta;
    incSalario(venta * 0.02);
}
