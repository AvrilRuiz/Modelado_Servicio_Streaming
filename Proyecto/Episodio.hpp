//
//  Episodio.hpp
//  Evidencia
//
//  Created by Avril Ruiz on 28/05/22.
//

#ifndef Episodio_hpp
#define Episodio_hpp

#include <stdio.h>
#include <iostream>
using namespace std;

class Episodio{

private:

    // atributos
    string titulo;
    int temporada;
    double calificacion;

public:
    // métodos constructores - sirven para inicializar los atributos
    Episodio();
    Episodio(string _titulo, int _temporada, double _calificacion);

    // método deconstructor
    ~Episodio();
    
    // métodos modificadores
    void setTitulo(string _titulo);
    void setTemporada(int _temporada);
    void setCalificacion(double _calificacion);

    // métodos de acceso
    string getTitulo();
    int getTemporada();
    double getCalificacion();
    
  // otros métodos
    string str() const;

};
#endif /* Episodio_hpp */
