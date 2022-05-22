//
//  main.cpp
//  Tarea_Herencia_EntregaPaquetes
//
//  Created by Avril Ruiz on 21/05/22.
//

#include "Envio.hpp"
#include "Paquete.hpp"
#include "Sobre.hpp"


int main() {
    // insert code here...
    Envio envioUno;
    Paquete paqueteUno;
    Sobre sobreUno;
    
    cout << "El costo del envío estándar es: " << envioUno.calculaCosto() << endl;
    cout << "El costo del envío de un paquete de " << paqueteUno.getPeso() << " kg es: " << paqueteUno.calculaCosto() << endl;
    cout << "El costo del envío de un sobre de " << sobreUno.getPeso() << " kg y medidas " << sobreUno.getLargo() << " x " << sobreUno.getAncho() << " es: " <<sobreUno.calculaCosto() << endl;
    
    return 0;
}
