//
//  main.cpp
//  Evidencia
//
//  Created by Avril Ruiz on 28/05/22.
//

#include <iostream>
#include "Pelicula.hpp"
#include "Serie.hpp"

int main() {
    // declaracion de un video default
    Video video1;
    // declaracion de un video con parámetros
    Video video2{"001", "La vida", 12, "Drama", -40};
    // declaracion de una pelicula con parámetros
    Pelicula peli2{"001", "Parasite", 12, "Misterio", 99, 4};
    // declaracion de una serie con parámetros
    Serie kingdom{"002", "The Kingdom", 50, "Horror", 0};
    // declaracion de un episodio con parámetros
    Episodio episodio1{"Fight the zombies", 1, 92};
    Episodio episodio2{"The stolen crown", 1, 85};
    
    
    kingdom.setCantidad(kingdom.getCantidad() + 1);
    kingdom.setEpisodio(0, episodio1);
    kingdom.setCantidad(kingdom.getCantidad() + 1);
    kingdom.setEpisodio(1, episodio2);
    
    
    cout << video1.str() << endl;
    cout << video2.str() << endl;
    cout << peli2.str() << endl;
    cout << kingdom.str() << endl;
    return 0;
}
