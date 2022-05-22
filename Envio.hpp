//
//  Envio.hpp
//  Tarea_Herencia_EntregaPaquetes
//
//  Created by Avril Ruiz on 21/05/22.
//

#ifndef Envio_hpp
#define Envio_hpp

#include <stdio.h>
#include <iostream>
using namespace std;

class Envio {

public:
    
    // constructores
    Envio();
    Envio(string _nombreR, string _ciudadR, string _estadoR, int _codigoPostalR, string _nombreD, string _ciudadD, string _estadoD, int _codigoPostalD, int _costoEstandar);
    
    // gets remitente
    string getNombreR();
    string getCiudadR();
    string getEstadoR();
    int getCodigoPostalR();
 
    // gets destinatario
    string getNombreD();
    string getCiudadD();
    string getEstadoD();
    int getCodigoPostalD();
    
    // get costo
    int getCostoEstandar();
    
    // sets remitente
    void setNombreR(string _nombreR);
    void setCiudadR(string _ciudadR);
    void setEstadoR(string _estadoR);
    void setCodigoPostalR(int _codigoPostalR);
 
    // sets destinatario
    void setNombreD(string _nombreD);
    void setCiudadD(string _ciudadD);
    void setEstadoD(string _estadoD);
    void setCodigoPostalD(int _codigoPostalD);
    
    // set costo
    void getCostoEstandar(int _costoEstandar);
    
    // costo asociado con el envío del paquete
    double calculaCosto();
    
    
protected:
    
    // datos remitente
    string nombreR;
    string ciudadR;
    string estadoR;
    int codigoPostalR;
  
    // datos destinatario
    string nombreD;
    string ciudadD;
    string estadoD;
    int codigoPostalD;
    
    // costo estándar por un envío
    int costoEstandar;
    
};

#endif /* Envio_hpp */
