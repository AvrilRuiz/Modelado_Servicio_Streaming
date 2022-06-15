//
//  Serie.hpp
//  Evidencia
//
//  Created by Avril Ruiz on 28/05/22.
//

#ifndef Serie_hpp
#define Serie_hpp

#include <stdio.h>
#include "Video.hpp"
#include "Episodio.hpp"

class Serie : public Video {
    
private:
    
    Episodio episodios[5]{};
    // catidad de episodios de la serie
    int cantidad;

public:
    
    // métodos contructores 
    Serie();
    Serie(string _iD, string _titulo, int _duracion, string _genero, double _calificacionPromedio, int _cantidad);
    
    // método deconstructor
    ~Serie();
    
    // métodos modificadores
    void setEpisodio(int _index,Episodio _episodio);
    void setCantidad(int _cantidad);

    // métodos de acceso
    Episodio getEpisodio(int _index);
    int getCantidad();
    
    // otros métodos
    double calculaCalPromedio();
    string str();
    friend ostream & operator << (ostream &out, const Serie &s);

};

#endif /* Serie_hpp */
