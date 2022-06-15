//
//  Series.hpp
//  Evidencia
//
//  Created by Avril Ruiz on 09/06/22.
//

#ifndef Series_hpp
#define Series_hpp
#include <sstream>
#include <fstream>
#include <stdio.h>
// composicion
#include "Serie.hpp"

const int MAX_SERIES = 50;
class Series{
    
private:
    // Arreglo de apuntadores de la clase Serie
    Serie *arrPtrSeries[MAX_SERIES];
    // cantidad de Series dadas de alta en el arrPtrSeries, inicialmente es 0
    int cantidad{};
    
public:
    // constructor
    Series();
    // deconstructor
    ~Series();
    
    // sets
    void setPtrSerie(Serie *ptr) ;
    void setCantidadSeries(int _cantidad);
    // gets
    Serie* getPtrSerie(string _iD);
    int getCantidadSeries();
    // Lee las Series desde un archivo cvs y las carga en el arreglo arrPtrSeries
    void leerArchivo();
    // reportes 
    void reporteTodasLasSeries();
    void reporteConCalificacion(double _calificacion);
    void reporteGenero(string _genero);
    void calcularCalificacionSeries();
    
};
    
#endif /* Series_hpp */
