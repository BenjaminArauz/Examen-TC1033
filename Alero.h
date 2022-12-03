/*
- Benjamín Iván Arauz Córdova
- A00836936
- 02/12/2022

Clase Alero: Representa a un tipo de jugador, heredado de Jugador, principalmente 
se caracteriza por tener buenas jugadas.
*/

#ifndef ALERO_H //Si no esta definido JUGADOR_H
#define ALERO_H //Definir procesador JUGADOR_H 

//Librerias
#include <iostream>
#include <string>
using namespace std;

//Clase incluida
#include "Jugador.h"

//Clase heredada de jugador
class Alero : public Jugador {
    private:
        int buenas_jugadas;
        Jugador jugador;
    public:
        //Constructor por omisión
        Alero(){}
        //Constructor con variables
        Alero(int buenas_jugadas, Jugador jugador):Jugador(){
            this->buenas_jugadas = buenas_jugadas;
            this->jugador = jugador;
        }
        //Getters
        Jugador getJugador();
        int getBuenasJugadas();
        //Setters
        void setBuenasJugadas(int);

};
//Getters
Jugador Alero::getJugador(){
    return jugador;
}
int Alero::getBuenasJugadas(){
    return buenas_jugadas;
}
//Setters
void Alero::setBuenasJugadas(int nuevo_buenas_jugadas){
    buenas_jugadas = nuevo_buenas_jugadas;
}

#endif
