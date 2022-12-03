/*
- Benjamín Iván Arauz Córdova
- A00836936
- 02/12/2022

Clase Alero: Representa a un tipo de jugador, heredado de Jugador, principalmente 
se caracteriza por tener buenas jugadas.
*/

#ifndef ARMADOR_H //Si no esta definido ARMADOR_H
#define ARMADOR_H //Definir procesador ARMADOR_H 

//Librerias
#include <iostream>
#include <string>
using namespace std;

//Clase incluida
#include "Jugador.h"

//Clase heredada de jugador
class Armador : public Jugador {
    private:
        int robos_hechos;
        Jugador jugador;
    public:
        //Constructor por omisión
        Armador(){}
        //Constructor con variables
        Armador(int robos_hechos, Jugador jugador):Jugador(){
            this->robos_hechos = robos_hechos;
            this->jugador = jugador;
        }
        //Getters
        Jugador getJugador();
        int getRobosHechos();
        //Setters   
        void setRobosHechos(int);

};
//Getters
Jugador Armador::getJugador(){
    return jugador;
}
int Armador::getRobosHechos(){
    return robos_hechos;
}
//Setters
void Armador::setRobosHechos(int nuevo_robos){
    robos_hechos = nuevo_robos;
}

#endif