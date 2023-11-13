#include "supervisor.h"

Supervisor::Supervisor()
{

}

Supervisor::Supervisor(string cedula, string nombre, float salario)
    : Persona(cedula, nombre)
{
    setSalario(salario);
    rol = 'S';
}

float Supervisor::cerrarVentas()
{
    float totalVentas = 0;
    for(size_t i=0; i<vendedores.size();i++){
        totalVentas += vendedores.at(i)->getVentas();
    }

    if (totalVentas >= META){
        incSalario(BONO);
    }

    return totalVentas;
}

void Supervisor::agregarVendendor(Vendedor *v){

    vendedores.push_back(v);
}
