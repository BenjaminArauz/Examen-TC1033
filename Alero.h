#ifndef ALERO_H
#define ALERO_H

#include <iostream>
#include <string>
using namespace std;

#include "JugadorNuevo.h"

class Alero : public JugadorNuevo {
    private:
        int buenas_jugadas;
    public:
        Alero(int buenas_jugadas):JugadorNuevo(){
            this->buenas_jugadas = buenas_jugadas;
        }
        int getBuenasJugadas();
        void setBuenasJugadas(int);

};

int Alero::getBuenasJugadas(){
    return buenas_jugadas;
}
void Alero::setBuenasJugadas(int nuevo_buenas_jugadas){
    buenas_jugadas = nuevo_buenas_jugadas;
}

#endif

