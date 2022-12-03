/*
- Benjamín Iván Arauz Córdova
- A00836936
- 02/12/2022

Clase Poste: Representa a un tipo de jugador, heredado de Jugador, principalmente
se caracteriza por tener rebotes.
*/

#ifndef POSTE_H //Si no esta definido JUGADOR_H
#define POSTE_H //Definir procesador JUGADOR_H 

//Librerias
#include <iostream>
#include <string>
using namespace std;

//Clase incluida
#include "Jugador.h"

//Clase heredada de Jugador
class Poste : public Jugador {
    private:
        //Atributos
        Jugador jugador;
        int rebotes;
    public:
        //Constructor por omisión
        Poste(): Jugador(){};
        //Constructor con variables
        Poste(int rebotes, Jugador jugador):Jugador(){
            this->rebotes = rebotes;
            this->jugador = jugador;
        }
        //Getters
        Jugador getJugador();
        int getRebotes();
        //Setters
        void setRebotes(int);

};
//Getters
Jugador Poste::getJugador(){
    return jugador;
}
int Poste::getRebotes(){
    return rebotes;
}
//Setters
void Poste::setRebotes(int nuevo_rebotes){
    rebotes = nuevo_rebotes;
}

#endif
