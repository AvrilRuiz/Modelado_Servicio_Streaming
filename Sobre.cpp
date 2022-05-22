//
//  Sobre.cpp
//  Tarea_Herencia_EntregaPaquetes
//
//  Created by Avril Ruiz on 21/05/22.
//

#include "Sobre.hpp"

// constructores
Sobre::Sobre() : Paquete() {
    cargoAdicional = 25;
}

Sobre::Sobre(string _nombreR, string _ciudadR, string _estadoR, int _codigoPostalR, string _nombreD, string _ciudadD, string _estadoD, int _codigoPostalD, int _costoEstandar, int _largo, int _ancho, int _profundidad, int _peso, double _costoKg, double _cargoAdicional) : Paquete(_nombreR, _ciudadR, _estadoR, _codigoPostalR, _nombreD, _ciudadD, _estadoD, _codigoPostalD, _costoEstandar, _largo, _ancho, _profundidad, _peso, _costoKg) {
    cargoAdicional = _cargoAdicional;
}

// get
double Sobre::getCargoAdicional() {
    return cargoAdicional;
}

// set
void Sobre::setCargoAdicional(double _cargoAdicional) {
    cargoAdicional = _cargoAdicional;
}

// redefinir la funicón
double Sobre::calculaCosto() {
    if (costoKg * peso >= 0) {
        if (largo <= 25 && ancho <= 30) {
            return (costoKg * peso) + costoEstandar;
        }
        else {
            return (costoKg * peso) + costoEstandar + cargoAdicional;
        }
    }
    else {
        if (largo <= 25 && ancho <= 30) {
            return (costoKg * peso * -1) + costoEstandar;
        }
        else {
            return (costoKg * peso * -1) + costoEstandar + cargoAdicional;
        };
    }
}
