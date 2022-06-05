//
//  Serie.cpp
//  Evidencia
//
//  Created by Avril Ruiz on 28/05/22.
//

#include "Serie.hpp"

// constructores
Serie::Serie() : Video() {
    cantidad = 0;
}

Serie::Serie(string _iD, string _titulo, int _duracion, string _genero, double _calificacionPromedio) : Video(_iD, _titulo, _duracion, _genero, _calificacionPromedio){
    cantidad = 0;
}

// deconstructor
Serie::~Serie(){
    //cout << "Se destruyó un obejto Serie" << endl;
}

// métodos modificadores
void Serie::setEpisodio(int _index, Episodio _episodio) {
    // validar que el _index sea >= 0 and  _index < cantidad
    // si no cumple el _index no se cambia
    if ( _index >= 0 && _index < cantidad)
        episodios[_index] = _episodio;
}

void Serie::setCantidad(int _cantidad) {
    cantidad = _cantidad;
}

// métodos de acceso
Episodio Serie::getEpisodio(int _index) {
    // validar que el _index sea >= 0 and  _index < cantidad
    // si no cumple el _index no se regresa
    Episodio epi;
    if ( _index >= 0 && _index < cantidad)
        return episodios[_index];
    else
        return epi;
}

int Serie::getCantidad() {
    return cantidad;
}

// otros métodos
double Serie::calculaCalPromedio() {
    double sumatoria = 0;
    if (cantidad > 0) {
        for(int indice = 0; indice < cantidad; indice++)
            sumatoria = sumatoria + episodios[indice].getCalificacion();
        
        return sumatoria/cantidad;
    }
    else
        return 0;
}

string Serie::str() {
    string acumulador = "\n";
    for(int indice = 0; indice < cantidad; indice++)
        acumulador = acumulador + episodios[indice].str() + '\n';
    return "S" + iD + ',' + titulo + ',' + to_string(duracion) + ',' + genero + ',' + to_string(calificacionPromedio) + acumulador;
}
