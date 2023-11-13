#include "persona.h"

void Persona::setSalario(float newSalario)
{
    salario = newSalario;
}

Persona::Persona()
{

}

Persona::Persona(const string &cedula, const string &nombre) :
    cedula(cedula), nombre(nombre)
{
    salario = 400;
    rol = ' ';
}

string Persona::informacion()
{
    return "Cedula: " + cedula +"\n"
            + "Nombre: " + nombre + "\n"
            + "Salario: " + to_string(salario) + "\n"
            + "Rol: " + rol + "\n";
}
/**
 * @brief Persona::incSalario Incrementa el salario en base a las condiciones de
 * los vendedores y supervisores
 * @param incremento Valor a sumar en el salario
 */
void Persona::incSalario(float incremento)
{
    salario += incremento;
}
