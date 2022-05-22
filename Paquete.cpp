//
//  Paquete.cpp
//  Tarea_Herencia_EntregaPaquetes
//
//  Created by Avril Ruiz on 21/05/22.
//

#include "Paquete.hpp"

// constructores
Paquete::Paquete() : Envio() {
    largo = 20;
    ancho = 40;
    profundidad = 30;
    peso = 2;
    costoKg = 5.6;
}

Paquete::Paquete(string _nombreR, string _ciudadR, string _estadoR, int _codigoPostalR, string _nombreD, string _ciudadD, string _estadoD, int _codigoPostalD, int _costoEstandar, int _largo, int _ancho, int _profundidad, int _peso, double _costoKg) : Envio(_nombreR, _ciudadR, _estadoR, _codigoPostalR,  _nombreD, _ciudadD, _estadoD, _codigoPostalD, _costoEstandar) {
    largo = _largo;
    ancho = _ancho;
    profundidad = _profundidad;
    peso = _peso;
    costoKg = _costoKg;
}

// gets
int Paquete::getLargo() {
    return largo;
}

int Paquete::getAncho() {
    return ancho;
}

int Paquete::getProfundidad() {
    return profundidad;
}

int Paquete::getPeso() {
    return peso;
}

double Paquete::getCostoKg() {
    return costoKg;
}

// sets
void Paquete::setLargo(int _largo) {
    largo = _largo;
}

void Paquete::setAncho(int _ancho) {
    ancho = _ancho;
}

void Paquete::setProfundidad(int _profundidad) {
    profundidad = _profundidad;
}

void Paquete::setPeso(int _peso) {
    if (_peso >= 0) {
        peso = _peso;
    }
    else {
        peso = _peso * (-1);
    }
}

void Paquete::setCostoKg(double _costoKg) {
    if (_costoKg >= 0) {
        costoKg = _costoKg;
    }
    else {
        costoKg = _costoKg * (-1);
    }
}

// redefinir la funicón
double Paquete::calculaCosto() {
    if (costoKg * peso >= 0) {
        return (costoKg * peso) + costoEstandar;
    }
    else {
        return (costoKg * peso * -1) + costoEstandar;
    }
}


