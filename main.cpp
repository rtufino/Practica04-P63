#include <iostream>

#include "persona.h"
#include "vendedor.h"
#include "supervisor.h"

using namespace std;

int main()
{
    cout << "== SALARIOS ==" << endl;
    cout << "Autor: Rodrigo Tufiño C." << endl << endl;

    Persona p("1717235467", "Rodrigo Tufiño");
    cout << p.informacion() << endl;

    Vendedor v1("1718472340", "Mayra Araujo");
    v1.vender(1000);
    v1.vender(2350);
    cout << v1.informacion() << endl;

    Vendedor v2("1234567894", "Mateo Espinosa");
    Vendedor v3("12431234567", "David Ramos");

    v2.vender(2400);
    v2.vender(1200);

    v3.vender(1000);
    v3.vender(4600);

    Supervisor s("0923456432", "Juan Tapia", 600);
    s.agregarVendendor(&v1);
    s.agregarVendendor(&v2);
    s.agregarVendendor(&v3);

    float total = s.cerrarVentas();
    cout << "Total de ventas: " << total << endl;
    cout << s.informacion() << endl;

    v3.vender(300);

    total = s.cerrarVentas();
    cout << "Total de ventas: " << total << endl;

    return 0;
}
