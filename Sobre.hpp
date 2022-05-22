//
//  Sobre.hpp
//  Tarea_Herencia_EntregaPaquetes
//
//  Created by Avril Ruiz on 21/05/22.
//

#ifndef Sobre_hpp
#define Sobre_hpp

#include "Paquete.hpp"

class Sobre : public Paquete {

public:
    // constructores
    Sobre();
    Sobre(string _nombreR, string _ciudadR, string _estadoR, int _codigoPostalR, string _nombreD, string _ciudadD, string _estadoD, int _codigoPostalD, int _costoEstandar, int _largo, int _ancho, int _profundidad, int _peso, double _costoKg, double _cargoAdicional);
    // get
    double getCargoAdicional();
    // set
    void setCargoAdicional(double _cargoAdicional);
    // redefinir la funicón
    double calculaCosto();
    
private:
    double cargoAdicional;
    
};
#endif /* Sobre_hpp */
