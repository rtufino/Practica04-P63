#ifndef PERSONA_H
#define PERSONA_H

#include <string>

using namespace std;

class Persona
{
private:
    string cedula;
    string nombre;
    float salario;
protected:
    char rol;
    void setSalario(float newSalario);
    void incSalario(float incremento);  // Se requiere este metodo para incrementar el salario
public:
    Persona();
    Persona(const string &cedula, const string &nombre);
    string informacion();

};

#endif // PERSONA_H
