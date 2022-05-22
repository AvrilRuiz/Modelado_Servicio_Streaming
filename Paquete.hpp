//
//  Paquete.hpp
//  Tarea_Herencia_EntregaPaquetes
//
//  Created by Avril Ruiz on 21/05/22.
//

#ifndef Paquete_hpp
#define Paquete_hpp

#include "Envio.hpp"

class Paquete : public Envio {

public:
    
    // constructores
    Paquete();
    Paquete(string _nombreR, string _ciudadR, string _estadoR, int _codigoPostalR, string _nombreD, string _ciudadD, string _estadoD, int _codigoPostalD, int _costoEstandar, int _largo, int _ancho, int _profundidad, int _peso, double _costoKg);
    
    // gets
    int getLargo();
    int getAncho();
    int getProfundidad();
    int getPeso();
    double getCostoKg();
    
    // sets
    void setLargo(int _largo);
    void setAncho(int _ancho);
    void setProfundidad(int _profundidad);
    void setPeso(int _peso);
    void setCostoKg(double _costoKg);
    
    // redefinir la funicón
    double calculaCosto();
    
protected:
    
    int largo;
    int ancho;
    int profundidad;
    int peso;
    double costoKg;
    
};

#endif /* Paquete_hpp */
