//
//  Episodio.cpp
//  Evidencia
//
//  Created by Avril Ruiz on 28/05/22.
//

#include "Episodio.hpp"

// Métodos constructores - sirven para inicializar los atributos
Episodio::Episodio(){
    titulo = "titulo";
    temporada = 0;
    calificacion = 0;
}

Episodio::Episodio(string _tituloEpisodio, int _temporada, double _calificacion){
    titulo = _tituloEpisodio;
    temporada = _temporada;
    calificacion = _calificacion;
}

// método deconstructor
Episodio::~Episodio(){
   // cout << "Se destruyó un obejto Episodio" << endl;
}

//Métodos modificadores
void Episodio::setTitulo(string _titulo){
    titulo = _titulo;
}
void Episodio::setTemporada(int _temporada){
    temporada = _temporada;
}
void Episodio::setCalificacion(double _calificacion){
    calificacion = _calificacion;
}

//Métodos de acceso
string Episodio::getTitulo(){
    return titulo;
}

int Episodio::getTemporada(){
    return temporada;
}

double Episodio::getCalificacion(){
    return calificacion;
}

//Otro Métodos
string Episodio::str() const {
    return "E" + titulo + ',' + to_string(temporada) + ',' + to_string(calificacion);
}
