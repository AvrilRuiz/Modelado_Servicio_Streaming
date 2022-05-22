//
//  Envio.cpp
//  Tarea_Herencia_EntregaPaquetes
//
//  Created by Avril Ruiz on 21/05/22.
//

#include "Envio.hpp"

// constructores
Envio::Envio() {
    
    // datos remitente
    nombreR = "Luis";
    ciudadR = "Mty";
    estadoR = "Nuevo León";
    codigoPostalR = 6588;
  
    // datos destinatario
    nombreD = "Marta";
    ciudadD = "Oaxaca";
    estadoD = "Oaxaca";
    codigoPostalD = 7977;
    
    // costo estándar por un envío
    costoEstandar = 400;
}

Envio::Envio(string _nombreR, string _ciudadR, string _estadoR, int _codigoPostalR, string _nombreD, string _ciudadD, string _estadoD, int _codigoPostalD, int _costoEstandar) {

    // datos remitente
    nombreR = _nombreR ;
    ciudadR = _ciudadR;
    estadoR = _estadoR;
    codigoPostalR = _codigoPostalR;
    
    // datos destinatario
    nombreD = _nombreD ;
    ciudadD = _ciudadD;
    estadoD = _estadoD;
    codigoPostalD = _codigoPostalD;
    
    // costo estándar por un envío
    costoEstandar = _costoEstandar;
}

// gets remitente

string Envio::getNombreR() {
    return nombreR;
}

string Envio::getCiudadR() {
    return ciudadR;
}

string Envio::getEstadoR() {
    return estadoR;
}

int Envio::getCodigoPostalR() {
    return codigoPostalR;
}

// gets destinatario

string Envio::getNombreD() {
    return nombreD;
}

string Envio::getCiudadD() {
    return ciudadD;
}

string Envio::getEstadoD() {
    return estadoD;
}

int Envio::getCodigoPostalD() {
    return codigoPostalD;
}

// get costo
int Envio::getCostoEstandar() {
    return costoEstandar;
}

// sets remitente
void Envio::setNombreR(string _nombreR) {
    nombreR = _nombreR ;
}

void Envio::setCiudadR(string _ciudadR) {
    ciudadR = _ciudadR;
}

void Envio::setEstadoR(string _estadoR) {
    estadoR = _estadoR;
}

void Envio::setCodigoPostalR(int _codigoPostalR) {
    codigoPostalR = _codigoPostalR;
}

// sets destinatario
void Envio::setNombreD(string _nombreD) {
    nombreD = _nombreD ;
}

void Envio::setCiudadD(string _ciudadD) {
    ciudadD = _ciudadD;
}

void Envio::setEstadoD(string _estadoD) {
    estadoD = _estadoD;
}

void Envio::setCodigoPostalD(int _codigoPostalD) {
    codigoPostalD = _codigoPostalD;
}


// set costo
void Envio::getCostoEstandar(int _costoEstandar) {
    costoEstandar = _costoEstandar;
}

// costo asociado con el envío del paquete
double Envio::calculaCosto() {
    return costoEstandar;
}
